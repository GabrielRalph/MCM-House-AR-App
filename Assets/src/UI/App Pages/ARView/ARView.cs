using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

using System.Threading;
using System.Threading.Tasks;


public class ARView : UIElement{
  public App App;

  // public FlexBox Head;
  public ARScene ARScene;
  public ARToolPanel ARToolPanel;
  public ARCenterIcon CenterIcon;

  public ClickBox CenterButton;
  public ClickBox BackButton;
  public ClickBox HomeButton;
  public ClickBox Info;
  public ClickBox Color;
  public ClickBox Reset;
  public ClickBox Help;
  public ClickBox AddButton;


  //Main icons
  public List<ClickBox> MainIcons{
    get {
      List<ClickBox> mainIcons = new List<ClickBox>();
      mainIcons.Add(CenterButton);
      mainIcons.Add(BackButton);
      mainIcons.Add(HomeButton);
      mainIcons.Add(Info);
      mainIcons.Add(Color);
      mainIcons.Add(Reset);
      mainIcons.Add(Help);
      mainIcons.Add(AddButton);
      return mainIcons;
    }
  }

  public void LockIcons(bool locked){
    foreach (ClickBox icon in MainIcons) {
      icon.Locked = locked;
    }
  }

  //Add event listeners to buttons
  void Awake(){
    if (BackButton != null) {
      BackButton.AddEventListener("onclick", () => {
        App.MoveTo(App.ProductPage);
        ARScene.Clear();
      });
    }
    if (HomeButton != null) {
      HomeButton.AddEventListener("onclick", () => {
        App.MoveToCollections(true);
        ARScene.Clear();
      });
    }
    AddButton.AddEventListener("onclick", () => {
      App.MoveToCollections(true);
    });

    Reset.AddEventListener("onclick", () => {
      ARScene.Reset();
    });

    Info.AddEventListener("onclick", () => {
      ARToolPanel.ARProductInfo.Build(ARScene.ModelTexturesInScene);
      ARToolPanel.ARProductInfo.SetScrollPosition("top");
      ARToolPanel.ARProductInfo.OnSelect = (model) => {
        Variant v = model.GetParent<Variant>();
        ARToolPanel.Mode = ARTool.Hidden;
        App.MoveToInfo(v);
      };
      ARToolPanel.Mode = ARTool.ProductInfo;
    });

    Help.AddEventListener("onclick", () => {
      ARToolPanel.Mode = ARTool.Help;
    });

    Color.AddEventListener("onclick", () => {
      ARModel toReplace = ARScene.SelectedModel;
      ARToolPanel.ARColorPicker.Build(ARScene.SelectedModelTexture);
      ARToolPanel.ARColorPicker.SetScrollPosition("top");
      ARToolPanel.ARColorPicker.OnSelect = (model) => {
        ARScene.AddModel(model, toReplace);
      };
      ARToolPanel.Mode = ARTool.ColorPicker;
    });
  }

  //Size UI
  void Update(){
    ARToolPanel.Width = Screen.width;
  }
}
