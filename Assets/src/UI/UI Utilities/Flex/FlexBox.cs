using UnityEngine;
using System;
using UnityEngine.UI;

public class FlexBox : FlexElement{
  public float FixedRatio = 0;
  public float FixedHeight = 0;
  public FlexElement Element {get {
    foreach (Transform child in transform) {
      FlexElement element = child.gameObject.GetComponent<FlexElement>();
      if (element != null && element.Active) {
        if (element.GetType() == typeof(AutoGrid)) {
          AutoGrid grid = (AutoGrid) (object) element;
          if (grid.SizeToActualWidth) continue;
        }
        return element;
      }
    }
    return null;
  }}


  public override float HeightFromWidth(float width) {
    FlexElement element = Element;
    if (FixedHeight > 0){
      float height = FixedHeight;
      if (element != null) {
        element.Width = width;
        if (element.Height > height) {
          element.Height = height;
        }
        element.Pos = new Vector2(0,0);
      }
      return height;
    }else if (FixedRatio > 0) {
      float height = width * FixedRatio;
      if (element != null) {
        element.Width = width;
        if (element.Height > height) {
          element.Height = height;
        }
      }
      return height;
    }else if (element != null) {
      element.Width = width;
      element.Pos = new Vector2(0,0);
      return element.Height;
    }
    return -1;
  }

  public override float WidthFromHeight(float height) {
    if (FixedRatio > 0) {
      float width = height / FixedRatio;
      if (Element != null) {
        Element.Height = height;
        if (Element.Width > width) {
          Element.Width = width;
        }
      }
      return width;
    }else if (Element != null) {
      Element.Height = height;
      return Element.Width;
    }
    return -1;
  }
}
