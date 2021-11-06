using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

// ARPlaneIcon, handles plane selection and plane/point cloud visualisations.
public class ARPlaneIcon : MonoBehaviour {

  //Dependants
  public ARRaycastManager RaycastManager;
  public ARPointCloudManager CloudManager;
  public ARPlaneManager PlaneManager;
  public Camera camera;
  public SpriteRenderer PlaneSprite;

  // Plane and place raycast screen points (units in percentages)
  public Vector2 PlaneCenter = new Vector2(50, 60);
  public Vector2 PlaceCenter = new Vector2(50, 60);

  public float opacity = 0; // Opacity goal, opacity will transition to meet goal.
  public float fadeDelta = 0.05f; // Transition speed
  public float PlaneYOffset_mm = 15;
  public float PlaneMotionSmoothing = 20; // Used to smooth plane motion

  // Conversions from plane and place centers, from percent to pixels
  public Vector2 planecenterpx {get {return PlaneCenter * new Vector2(Screen.width, Screen.height) / 100;}}
  public Vector2 placepx {get {return PlaceCenter * new Vector2(Screen.width, Screen.height) / 100;}}

  private List<ARPointCloud> clouds = new List<ARPointCloud>();
  private Vector3 centerEWA;
  private float lambda {get {return 2/(PlaneMotionSmoothing + 1);}}

  // Read only
  public bool isPlane {get; private set;} = false; // is plane in sight?
  public bool planeSelected {get; private set;} = false; /* has a plane origin
                                                            been selected? */

  // cloudEnabled, disables or enables the point cloud
  private bool cloudEnabled {
    get {return CloudManager.enabled;}
    set {
      CloudManager.enabled = value;
      foreach (ARPointCloud cloud in clouds) {
        cloud.gameObject.SetActive(value);
      }
    }
  }

  /* On,
        true: starts finding new planes and visualisations
        false: stops finding planes and turns of visualisations
  */
  private bool on = false;
  public bool On {
    get {return on;}
    set {
      if (value) {
        cloudEnabled = true;
        PlaneManager.enabled = true;
        planeSelected = false;
        isPlane = false;
        on = true;
      }else{
        cloudEnabled = false;
        PlaneManager.enabled = false;
        isPlane = false;
        opacity = 0;
        on = false;
      }
    }
  }

  // Origin, returns the selected origin pose.
  private Pose origin; // current origin of plane in sight
  private Pose sorigin; // selected origin
  public Pose Origin {get {
    return new Pose(sorigin.position, sorigin.rotation);
  }}

  // Plane, returns the plane associated with the selected origin
  public Plane Plane {get {
    return new Plane(Vector3.up, sorigin.position);
  }}

  /* PointOfView, performs raycast from PlaceCenter screen position
                  to the selected plane, returns a pose on the plane at the
                  ray collision */
  public Pose PointOfView {get {
    Vector3 collision = new Vector3(0,0,0);
    Vector3 direction = new Vector3(0,0,1);

    //Ray from place center screen position
    Ray ray = camera.ScreenPointToRay(placepx);

    // Get intersection point of ray and offset plane
    float distance = 0f;
    if (Plane.Raycast(ray, out distance)){
      collision = ray.GetPoint(distance);
      direction = ray.direction;
      direction.y = 0; // Do not rotate along y axis
    }

    Quaternion rotation = Quaternion.FromToRotation(new Vector3(0,0,1), direction);
    return new Pose(collision, rotation);
  }}


  // actualOpacity, sets the opacity and goal to a given value
  private float a_o = 0;
  private float actualOpacity {
    get {return a_o;}
    set {
      value = value < 0 ? 0 : value > 1 ? 1 : value;
      a_o = value;
      opacity = value;
    }
  }

  // Reset, resets plane icon to initial state
  public void Reset(){
    PlaneManager.enabled = false;
    planeSelected = false;
    isPlane = false;
    on = false;
    opacity = 0;
    a_o = 0;
  }


  /* ChoosePlane, performes a raycast from the PlaneCenter screen position
                  to the AR planes. If a plane is hit then the default
                  plane and origin pose are set respectively.

                  @return true if a plane and origin where set.*/
  private bool ChoosePlane() {
    try{
      // Raycast to AR planes
      List<ARRaycastHit> hits = new List<ARRaycastHit>();
      if ( RaycastManager.Raycast(planecenterpx, hits, TrackableType.PlaneWithinPolygon) ){
        origin = hits[0].pose;
        return true;
      }else{
        return false;
      }
    }catch {
      return false;
    }
  }

  // UpdateOpacity, opacity updated to reach goal.
  private void UpdateOpacity(){
    if (opacity < 0) opacity = 0;
    if (opacity > 1) opacity = 1;

    if (a_o > opacity) {
      a_o -= fadeDelta;
      if (a_o < opacity) a_o = opacity;
    }else if (a_o < opacity){
      a_o += fadeDelta;
      if (a_o > opacity) a_o = opacity;
    }

    Color c = PlaneSprite.color;
    c.a = a_o;
    PlaneSprite.color = c;
  }

  /* UpdateChoosenPlane, chooses a plane and updates the icon position.
                         isPlane updated to reflect if there exists a defined
                         plane in the field of view. */
  private void UpdateChoosenPlane(){
    //Choose a plane and move icon to position (with smoothing)
    if (ChoosePlane()) {
      isPlane = true;
      opacity = 1;
      centerEWA = centerEWA * (lambda) + (1 - lambda) * origin.position;
      transform.position = centerEWA;

    /* No plane was choosen, but a plane still exists. Check to see that plane
       is still in the field of view */
    } else if (isPlane) {
      Vector3 sPoint = camera.WorldToScreenPoint(transform.position);

      // If the plane is outside the field of view, plane fades out.
      if (sPoint.x < 0 ||
      sPoint.y < 0 ||
      sPoint.x > Screen.width ||
      sPoint.y > Screen.height) {
        isPlane = false;
        opacity = 0;
      }
    }
  }

  /* UpdateSelectedPlane, given user input selects a plane */
  private void UpdateSelectedPlane(){
    //If user touches the screen and a plane is in view
    if(Input.touchCount > 0 && isPlane){

      Touch touch = Input.GetTouch(0);
      if (touch.phase == TouchPhase.Began) {

        // Offset y position and set plane origin
        Vector3 pos = origin.position;
        pos.y -= PlaneYOffset_mm/1000;

        // Select the plane and origin from raycast
        sorigin = new Pose(pos, origin.rotation);
        planeSelected = true;

        // Stop finding more planes and turn off visualisations
        On = false;
      }
    }
  }

  private void Awake(){
    // Rotate such that plane icon points up.
    transform.Rotate(new Vector3(90, 0, 0));

    // Keep concurrent list of all point clouds
    CloudManager.pointCloudsChanged += (args) => {
      foreach (ARPointCloud cloud in args.added)
        clouds.Add(cloud);

      foreach (ARPointCloud cloud in args.removed)
        clouds.Remove(cloud);
    };
  }

  private void Update(){
    // Update if on
    if (on) {
      UpdateChoosenPlane();
      UpdateSelectedPlane();
    }

    // Opacity always updated.
    UpdateOpacity();
  }
}
