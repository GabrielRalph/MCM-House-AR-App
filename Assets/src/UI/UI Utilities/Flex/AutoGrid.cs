using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using System.Collections;


public class AutoGrid : FlexGrid{

  public bool SizeToActualWidth = false;

  public float ActualWidth{
    get{
      RectTransform rect = GetComponent<RectTransform>();
      if (rect == null) return -1;

      Vector3[] corners = new Vector3[4];
      rect.GetLocalCorners(corners);

      //Get width and height from corner coordinates
      float width = corners[2].x - corners[0].x;
      float height = corners[2].y - corners[0].y;

      return width;
    }
  }

  public void Awake(){
    foreach(Transform child in transform){
      AddElement(child.gameObject);
    }
  }


  private float lastWidth = -1;
  public virtual void Update(){

    if (SizeToActualWidth){
      float width = ActualWidth;

      //Width has changed
      if (width != lastWidth) {
        RectTransform rect = GetComponent<RectTransform>();
        if (rect != null) {
          Vector2 size = rect.sizeDelta;
          Width = ActualWidth;
          rect.sizeDelta = size;
        }
      }

      lastWidth = width;
    }
  }
}
