using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public enum GMode {
  None,
  Drag,
  Rotate,
}

public class ARGestures : MonoBehaviour {
  public Camera camera;
  public ARScene ARScene;

  public float BinRadiusVW = 33;
  public float DeleteRadiusVW = 15;
  public float DeleteThreshold = 0.7f;

  public ARView ARView {get {return ARScene.ARView;}}
  public ARModel SelectedModel {
    get {
      if (ARScene == null) return null;
      return ARScene.SelectedModel;
    }
    set {
      if (ARScene != null) ARScene.SelectedModel = value;
    }
  }
  public float BinRadius {get {return BinRadiusVW * Screen.width / 100;}}
  public float DeleteRadius {get {return DeleteRadiusVW * Screen.width / 100;}}
  public ARCenterIcon Icon {get {return ARView.CenterIcon;}}
  public Vector2 IconPosition {get {
    return Icon.IconPosition;
  }}

  public GMode Mode {get; private set;} = GMode.None;


  public float binPercent(Vector2 touch) {
    //Shrink model when it gets closer to bin
    float dist = Vector2.Distance(touch, IconPosition);
    if (dist < BinRadius) {
      dist -= DeleteRadius;
      if (dist < 0) dist = 0;
      float delta = BinRadius - DeleteRadius;
      return 1 - dist/delta;
    }
    return 0;
  }
  public Vector3 bin_point {get {
    Ray ray = camera.ScreenPointToRay(IconPosition);
    return ray.GetPoint(0.2f);
  }}



  /* gestures locked if ARView locked or ARToolPanel not hidden,
     unless the ARToolPanel Mode Loader and ARScene Mode Planes
  */
  private bool locked {
    get {
      return ARView.Locked ||
             ARView.ARToolPanel.Mode != ARTool.Hidden ||
             !ARScene.PlaneIcon.planeSelected;
    }
  }

  private Plane offset_plane;
  private Vector3 point_offset;
  private bool drag_start = true;
  public bool SelectModel(Vector2 touch) {
    if (camera == null) return false;

    Ray ray = camera.ScreenPointToRay(touch);
    RaycastHit hit;
    if (Physics.Raycast(ray, out hit)){

      // no collider hit
      if (hit.collider == null || hit.collider.gameObject == null)
        return false;

      // get ARModel of collider
      Transform trans = hit.collider.gameObject.transform;
      while (trans != null){
        ARModel model = trans.gameObject.GetComponent<ARModel>();
        if (model != null) {
          offset_plane = new Plane(Vector3.up, new Vector3(0, hit.point.y, 0));
          point_offset = (model.position - hit.point)/model.size;
          SelectedModel = model;
          drag_start = true;
          return true;
        }
        trans = trans.parent;
      }
    }
    //No model hit, return current selected model.
    return false;
  }




  private bool reset_offset = false;
  public float dragSmoothness = 4;
  private Vector3 dragEWA;
  private float EWAlambda {get {return 2 / (dragSmoothness + 1);}}
  private void MoveSelectedModel(Vector3 touch) {
    if (camera == null || SelectedModel == null) return;
    // Create ray from camera starting at touch
    Ray ray = camera.ScreenPointToRay(touch);

    // Get intersection point of ray and offset plane
    float distance = 0f;
    if (offset_plane.Raycast(ray, out distance)){
      Vector3 point = ray.GetPoint(distance);

      // Reset flag resets point offset's x and z coordinates
      // to the difference of the selected model's position and
      // intersection point.
      if (reset_offset) {
        Vector3 dif = SelectedModel.position - point;
        point_offset.x = dif.x;
        point_offset.z = dif.z;
        reset_offset = false;
      }

      //model position
      Vector3 position = point + point_offset * SelectedModel.size;
      if (Vector3.Distance(ARScene.Origin.position, position) < 10) {

        //Start ewa
        if (drag_start) {
          drag_start = false;
          dragEWA = position;
        } else {
          dragEWA = dragEWA * (EWAlambda) + (1 - EWAlambda) * position;
        }

        float bp = SelectedModel.binPercent;
        SelectedModel.binPercent = binPercent(touch);
        if (bp < DeleteThreshold && SelectedModel.binPercent > DeleteThreshold) {
          NativeAid.HapticEvent(HEvent.Delete);
        }

        SelectedModel.position = dragEWA;
      }
    }
  }

  public bool isInClickBox(Vector2 point) {
    foreach (ClickBox cb in ARView.MainIcons) {
      if (cb.ContainsPoint(point)) {
        Debug.Log($"\nARGestures: touch inside {cb.gameObject.name}'s click box\n");
        return true;
      }
    }
    return false;
  }

  private Vector2 lastDirection;
  public void RotateStart(Vector2 a, Vector2 b) {
    lastDirection = b - a;
  }

  public void RotateSelectedModel(Vector2 a, Vector2 b) {
    Vector2 direction = b - a;
    float deltaTheta = Vector2.SignedAngle(lastDirection, direction);
    lastDirection = direction;
    if (ARScene.SelectedModel != null) {
      ARScene.SelectedModel.yRotation = -deltaTheta; // reverse
    }
  }


  private Vector2 last_a;
  private Vector2 last_b;
  void Update(){
    if (locked) return;

    //One touch detected
    if(Input.touchCount == 1){
      Touch touch = Input.GetTouch(0);
      Vector2 point = touch.position;

      //normalise touch phase Canceled = Ended, Stationary = Moved
      TouchPhase phase = touch.phase;
      if (phase == TouchPhase.Canceled) phase = TouchPhase.Ended;
      if (phase == TouchPhase.Stationary) phase = TouchPhase.Moved;

      if (phase == TouchPhase.Began) {
        //If the touch isn't on any ui click boxes, select a model
        //and set the drag offset, otherwise drag not started.
        if (isInClickBox(point)) {
          Debug.Log("in click box");
          Mode = GMode.None;
        }else {
          if (SelectModel(point)) {
            NativeAid.HapticEvent(HEvent.Select);
            SelectedModel.Held = true;
            Mode = GMode.Drag;
            Icon.Mode = CenterIcon.Bin;
          }else {
            Mode = GMode.None;
          }
        }
      } else if (phase == TouchPhase.Moved && Mode == GMode.Drag) {
        MoveSelectedModel(point);
      } else if (phase == TouchPhase.Ended && Mode == GMode.Drag) {
        if (SelectedModel != null) {
          SelectedModel.Held = false;
          if (SelectedModel.binPercent > DeleteThreshold) {
            ARScene.Remove(SelectedModel);
            NativeAid.HapticEvent(HEvent.Deleted);
          } else {
            SelectedModel.goalBinPercent = 0;
            if (SelectedModel.binPercent > 0) NativeAid.HapticEvent(HEvent.Warning);
          }
        }
        Icon.Mode = CenterIcon.Screenshot;
        Mode = GMode.None;
      }
    //Two or more touch's detected
    }else if (Input.touchCount > 1) {
      Touch a = Input.GetTouch(0);
      Touch b = Input.GetTouch(1);

      Vector2 av = a.position;
      Vector2 bv = b.position;

      //nomalise touch phases Canceled = Ended
      TouchPhase phaseA = a.phase;
      TouchPhase phaseB = b.phase;
      if (phaseA == TouchPhase.Canceled) phaseA = TouchPhase.Ended;
      if (phaseB == TouchPhase.Canceled) phaseB = TouchPhase.Ended;

      // Either touch has just began, set the initial rotation vector
      if (phaseA == TouchPhase.Began || phaseB == TouchPhase.Began) {
        RotateStart(av, bv);
        Mode = GMode.Rotate;

      // Either touches have ended
      } else if (phaseA == TouchPhase.Ended || phaseB == TouchPhase.Ended) {

        // Both touches have ended, mode set to none
        if (phaseA == TouchPhase.Ended && phaseB == TouchPhase.Ended) {
          Mode = GMode.None;
          Icon.Mode = CenterIcon.Screenshot;

        // One touch has ended, mode reverts to drag with offset set to point
        // that has not ended.
        }else {
          reset_offset = true;
          Mode = GMode.Drag;
        }
      // Neither touch has began or ended
      }else if (Mode == GMode.Rotate) {
        RotateSelectedModel(av, bv);
      }
    }
  }
}
