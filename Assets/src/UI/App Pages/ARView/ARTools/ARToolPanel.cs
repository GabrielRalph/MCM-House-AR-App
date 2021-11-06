using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public enum ARTool{
  Hidden,
  Loader,
  ProductInfo,
  Help,
  ColorPicker,
}

public class ARToolPanel : FlexBox{
  public Image Background;
  public CanvasGroup Canvas;
  public ARTool Mode = ARTool.Loader;

  public ARLoader ARLoader;
  public ARProductInfo ARProductInfo;
  public GameObject ARHelp;
  public ARColorPicker ARColorPicker;

  public List<ClickBox> HideButtons = new List<ClickBox>();

  public float TransistionSpeed= 0.3f;
  public float MinOpacity = 0.5f;
  public float MaxOpacity = 0.95f;
  public bool AlignBottom = false;
  public float AlignSpeed = 0.1f;

  void Awake(){
    FixedRatio = 1;
    foreach(ClickBox cb in HideButtons) {
      cb.AddEventListener("onclick", () =>{
        Mode = ARTool.Hidden;
        RunEvent("onhide");
      });
    }
    // ARLoader.ToolPanel = this;
  }

  private float theta = -1;
  private float phi = 0;
  private ARTool lastMode = ARTool.Hidden;
  void LateUpdate(){
    if (theta < 0) {
      if (lastMode != Mode){
        if (lastMode == ARTool.Hidden) {
          theta = Mathf.PI/2;
        }else{
          theta = 0;
        }
      }
    }else{
      float a = 1 - Mathf.Sin(theta);
      theta += TransistionSpeed;

      if (theta > Mathf.PI/2 && lastMode != Mode) {
        lastMode = Mode;
        if (lastMode == ARTool.Hidden) {
          theta = -1;
          a = 0;
        }
      }

      if (theta > Mathf.PI) {
        a = 1;
        theta = -1;
      }

      Canvas.alpha = a;
    }

    if (AlignBottom) {
      if (phi < Mathf.PI) {
        phi += AlignSpeed;
        if (phi > Mathf.PI) phi = Mathf.PI;
      }
    }else {
      if (phi > 0) {
        phi -= AlignSpeed;
        if (phi < 0) phi = 0;
      }
    }
    Vector3 pos = transform.localPosition;
    float yBottom = (Height / 2) + (PaddingVW.left * Screen.width / 100) - (Screen.height / 2);
    pos.y = yBottom * (1 - Mathf.Cos(phi)) / 2;
    transform.localPosition = pos;

    Opacity = 1;
    GameObject current = null;
    switch(lastMode) {
      case ARTool.Loader:
        current = ARLoader.gameObject;
        Opacity = 1 - ((float)ARLoader.Progress)/100;
        break;
      case ARTool.ProductInfo:
        current = ARProductInfo.gameObject;
        break;
      case ARTool.Help:
        current = ARHelp;
        break;
      case ARTool.ColorPicker:
        current = ARColorPicker.gameObject;
        break;
      case ARTool.Hidden:
        Canvas.alpha = 0;
        break;
    }
    foreach(Transform child in transform) {
      child.gameObject.SetActive(child.gameObject == current);
    }
  }

  public float Opacity{
    get {
      return Background.color.a;
    }
    set {
      if (value < 0) value = 0;
      if (value > 1) value = 1;
      float mapped = value * (MaxOpacity - MinOpacity) + MinOpacity;
      Color c = Background.color;
      c.a = mapped;
      Background.color = c;
    }
  }
}
