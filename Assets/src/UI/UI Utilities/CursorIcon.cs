using UnityEngine;
using UnityEngine.UI;
using System;
using Unity.VectorGraphics;
using static Unity.VectorGraphics.VectorUtils;
using System.Collections.Generic;

public class CursorIcon : UIElement{
  public Image image;


  private float opacity {
    get {return image.color.a;}
    set {
      if (value < 0) value = 0;
      if (value > 1) value = 1;
      Color c = image.color;
      c.a = value;
      image.color = c;
    }
  }
  private Vector3 position {
    set {
      transform.position = value;
    }
    get {
      return transform.position;
    }
  }
  private float radius {
    set {
      if (value < 0)
        value = 50;
      transform.localScale = new Vector3(value/50, value/50, value/50);
    }
    get {
      return transform.localScale.x*50;
    }
  }

  private Touch Touch {
    set {
      radius = value.radius;
      position = value.position;
    }
  }




  void Update(){
    if(Input.touchCount > 0){
      Touch touch = Input.GetTouch(0);
      switch (touch.phase){
        // Record initial touch position.
        case TouchPhase.Began:
        opacity = 0.3f;
        Touch = touch;
        break;

        // Determine direction by comparing the current touch position with the initial one.
        case TouchPhase.Moved:
          opacity += 0.05f;
          Touch = touch;
        break;

      }
    }else if (Input.GetMouseButtonDown(0)){
      opacity = 0.3f;
      position = Input.mousePosition;
      radius = -1;
    }else if (Input.GetMouseButton(0)) {
      opacity += 0.05f;
      position = Input.mousePosition;
      radius = -1;
    }else{
      opacity -= 0.1f;
      radius -= 1;
    }

    // updatePath();
    // render();
  }
}
