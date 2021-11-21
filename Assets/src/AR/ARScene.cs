using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine.Profiling;

public enum ARSceneMode {
  NoPlanes,
  Planes,
  PlaneSelected,
  Unsupported
}

public class ARScene : MonoBehaviour {

  public App App;
  public ARView ARView;
  public ARSession ARSession;
  public ARSessionOrigin ARSessionOrigin;
  public AssetManager Assets;
  public ARPlaneIcon PlaneIcon;

  public int lightingModeTime = 1000;


  public ARSessionState ARState {get {return ARSession == null ? ARSessionState.None : ARSession.state;}}
  public ARToolPanel ARToolPanel {get{return ARView.ARToolPanel;}}
  public ARCenterIcon CIcon {get{return ARView.CenterIcon;}}
  public ARLoader ARLoader {get{return ARToolPanel.ARLoader;}}
  public ARSceneMode Mode {get; private set;} = ARSceneMode.Unsupported;

  private List<ARModel> ModelsInScene = new List<ARModel>();
  public List<ModelTexture> ModelTexturesInScene {
    get {
      List<ModelTexture> modelTextures = new List<ModelTexture>();
      foreach(ARModel model in ModelsInScene) {
        if (!modelTextures.Contains(model.ModelTexture)) {
          modelTextures.Add(model.ModelTexture);
        }
      }
      return modelTextures;
    }
  }
  public ARModel SelectedModel {get; set;}
  public ModelTexture SelectedModelTexture {
    get {
      if (SelectedModel == null) return null;
      return SelectedModel.ModelTexture;
    }
  }

  public int ModelsCount {get {return ModelsInScene.Count;}}
  public Pose Origin {get {return PlaneIcon.Origin;}}
  public Pose PointOfView {get {return PlaneIcon.PointOfView;}}
  public Plane Plane {get {return PlaneIcon.Plane;}}


  void Awake(){
    App.AddEventListener("beforeshow", () => {
      ARSession.matchFrameRate = false;
    });
  }



  /* Check status of ARSession and update mode accordingly.
  */
  void LateUpdate(){
    if ((ARState == ARSessionState.None) || (ARState == ARSessionState.CheckingAvailability)){
            ARSession.CheckAvailability();
    } else {
      if (ARState == ARSessionState.Unsupported) {
        Mode = ARSceneMode.Unsupported;
      } else if (Mode == ARSceneMode.Unsupported){
        Mode = ARSceneMode.NoPlanes;
      }
    }

  }

  /* On, enables or disables the ARSession and ARSessionOrigin
     gameObject's.
  */
  public bool On{
    set {
      ARSession.gameObject.SetActive(value);
      ARSessionOrigin.gameObject.SetActive(value);
    }
    get{
      return ARSession.gameObject.activeSelf;
    }
  }

  // /* planeManagerEnabled, enables or disables the ARPlaneManager.
  // */
  // public bool planeManagerEnabled {
  //   get {return ARPlaneManager.enabled;}
  //   set {
  //     if (value != ARPlaneManager.enabled)
  //       ARPlaneManager.enabled = value;
  //   }
  // }

  /* Contains, returns true if an ar model is contained within the scene.
  */
  public bool Contains(ARModel model) {
    return ModelsInScene.Contains(model);
  }
  public bool ContainsModelTexture(ModelTexture model) {
    foreach(ARModel armodel in ModelsInScene)
      if (armodel.ModelTexture == model)
        return true;
    return false;
  }


  /* Remove model from scene */
  public void Remove(ARModel model) {
    if (!Contains(model)) return; //Model not in this scene
    if (SelectedModel == model) {
      SelectedModel = null;
    }

    //Last of type remove from memory
    ModelTexture dmt = model.ModelTexture;
    ModelsInScene.Remove(model);
    Destroy(model.gameObject);

    if (!ContainsModelTexture(dmt)) {
      Assets.RemoveModel(dmt);
    }
  }

  public void LogTree(Transform trans = null){
    string log = "";
    if (trans == null) trans = transform.parent.parent;
    foreach(Transform child in trans) {
      log += child.gameObject.name + "\n";
      foreach(Transform c in child) {
        log += "   " + c.gameObject.name + "\n";
        foreach(Transform cn in c) {
          log += "      " + cn.gameObject.name + "\n";
        }
      }
    }
    Debug.Log(log);
  }


  /* Add model to scene */
  private void Add(ARModel model) {
    ModelsInScene.Add(model);
    model.transform.SetParent(transform);
    model.gameObject.SetActive(true);
    Debug.Log($"\nmodel added with scale {model.transform.localScale}\n");
    SelectedModel = model;
  }

  /* PlaceModel, places a new ARModel into the scene at the origin pose
     or replaces a given ARModel.

     @param modelTexture, the modelTexture who's ARModel is to be added
                          and place into the scene

     @param model*, optional a given ARModel to replace.
  */
  private void PlaceModel(ARModel model, ARModel replace = null) {

    //model texture does not have an ARModel
    if (model == null) {
      Debug.Log("\nARScene: new model made was null\n");
      return;
    }

    if (replace == null) {
      Debug.Log("\nARScene: new model set to pose of origin\n");
      model.Pose = PointOfView; //Place at origin pose
      model.yRotation = 180; //Rotate to face user
    } else {
      Debug.Log("\nARScene: new model set to pose of other model\n");
      model.Pose = replace.Pose; //Place at given models pose
      Remove(replace); //Remove model being replaced
    }
    Add(model); //Add new model to scene
  }

  /* AddModel, loads a modelTextures ARModel and adds it to the scene.
     Awaits planes to be detected and a single plane and pose to selected,
     before placing the model into the scene. Optionally an ARModel already
     in the scene can be provided, if so the new model will replace the
     porvided model at its pose.

     @param modelTexture, the modelTexture to get the ARModel from.
     @param model*, optional a given ARModel to replace.
  */
  public bool adding {get; private set;} = false;
  public bool firstAdd = true;
  public async void AddModel(ModelTexture modelTexture, ARModel replace = null, int depth = 0) {
    if (modelTexture == null || adding) {
      return;
    }
    adding = true;

    //Select loader tool and show loading
    ARToolPanel.Mode = ARTool.Loader;
    showLoading();

    while(App.moving) await Task.Yield();
    ARView.LockIcons(true);
    ARSession.matchFrameRate = true;

    if (!PlaneIcon.planeSelected && !PlaneIcon.On){
      PlaneIcon.On = true;
    }

    //get model
    Assets.OnProgress = (f) => {ARLoader.Progress = (int) Mathf.Round(f * 100);};
    ARModel model = await Assets.GetModel(modelTexture);

    //error occured display error
    if (model == null) {

      //memory at capacity
      if (Assets.memoryLimitFlag) {

        //show promt for 4 seconds
        showMemoryLimit(depth);
        await Task.Delay(3500);

        //model to be deleted, or back navigation
        int count = ModelsInScene.Count;

        //Hide tools to allow delete
        if (count != 0) ARToolPanel.Mode = ARTool.Hidden;

        while (count == ModelsInScene.Count && App.cPage == ARView.gameObject && adding)
          await Task.Yield();

        if (!adding) return;

        // we are still in ar view then add the model again
        if (App.cPage == ARView.gameObject) {
          adding = false;
          AddModel(modelTexture, replace, depth + 1);
          return;
        }

      //loading error
      } else {
        showError();
      }
      adding = false;
      return;
    }

    //Wait for plane selection
    await planeSelector();

    // place model, and hide tool panel and unlock icons
    PlaceModel(model, replace);
    adding = false;

    //Hide loader
    if (firstAdd) {
      ARToolPanel.Mode = ARTool.Help;
      firstAdd = false;
    } else {
      ARToolPanel.Mode = ARTool.Hidden;
    }
    CIcon.Mode = CenterIcon.Screenshot;
    ARToolPanel.AlignBottom = false;

    //unlock icons
    ARView.LockIcons(false);
  }

  private void showLoading(){
    if (PlaneIcon.planeSelected)
      ARLoader.Mode = ARLoaderMode.LoadingPS;
    else
      ARLoader.Mode = ARLoaderMode.Loading;
    ARLoader.Progress = 0;
  }

  private void showError(){
    ARView.LockIcons(true);
    ARToolPanel.Mode = ARTool.Loader;
    ARLoader.Mode = ARLoaderMode.Error;
    ARToolPanel.AlignBottom = false;
    unlockBack();
  }

  private void showMemoryLimit(int depth){
    ARView.LockIcons(true);
    ARToolPanel.Mode = ARTool.Loader;
    if (depth == 0) {
      ARLoader.Mode = ARLoaderMode.MemoryLimit;
    }else {
      ARLoader.Mode = ARLoaderMode.MemoryLimitAgain;
    }
    ARToolPanel.AlignBottom = false;
    ARView.Reset.Locked = false;
    unlockBack();
  }

  private async Task planeSelector(){

    //wait for user to select plane
    if (!PlaneIcon.planeSelected) {
      int si = 0;
      while (!PlaneIcon.planeSelected) {
        //No planes turn icon on
        if (PlaneIcon.On) {
          if (PlaneIcon.isPlane){
            showSelect();
          } else {
            si+=1;
            if (si > lightingModeTime) {
              if (si > 2*lightingModeTime) si = 0;
              showScanLight();
            }else{
              showScan();
            }
          }
        } else {
          PlaneIcon.On = true;
        }

        await Task.Yield();
      }
    }
  }

  private void showSelected(){
    ARLoader.Mode = ARLoaderMode.PlaneSelected;
    CIcon.Mode = CenterIcon.Screenshot;
    ARToolPanel.AlignBottom = false;
  }

  private void showSelect(){
    ARLoader.Mode = ARLoaderMode.Select;
    CIcon.Mode = CenterIcon.Hidden;
    ARToolPanel.AlignBottom = true;
  }

  private void showScan(){
    ARLoader.Mode = ARLoaderMode.Loaded;
    CIcon.Mode = CenterIcon.Screenshot;
    ARToolPanel.AlignBottom = false;
  }

  private void showScanLight(){
    ARLoader.Mode = ARLoaderMode.ScanLight;
    CIcon.Mode = CenterIcon.Screenshot;
    ARToolPanel.AlignBottom = false;
  }

  private void unlockBack(){
    ARView.BackButton.Locked = false;
    ARView.HomeButton.Locked = false;
  }

  public void Clear(){
    while (ModelsInScene.Count > 0) {
      Remove(ModelsInScene[0]);
    }
  }

  /* Reset ar scene */
  public async void Reset(){
    Clear();
    ARToolPanel.Mode = ARTool.Loader;
    adding = false;
    SelectedModel = null;
    ARSession.Reset();
    PlaneIcon.Reset();
    PlaneIcon.On = true;
    ARView.LockIcons(true);
    await planeSelector();
    showSelected();
    unlockBack();
  }
}
