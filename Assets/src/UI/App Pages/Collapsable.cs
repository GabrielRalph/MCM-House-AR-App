using UnityEngine;
using System;
using UnityEngine.UI;


public class Collapsable : FlexElement{
  public FlexElement Element;
  public bool Hidden = true;
  public float TransitionSpeed = 0.02f;
  public float Phi = 0;
  private float theta = 0;

  public override float HeightFromWidth(float width) {
    if (Hidden) {
      if (theta > 0) {
        theta -= TransitionSpeed;
      } else {
        theta = 0;
        if (Element.Active){
          Element.Active = false;
        }
      }

    } else {
      if (!Element.Active) {
        Element.Active = true;
      }
      if (theta < 1) {
        theta += TransitionSpeed;
      } else {
        theta = 1;
      }
    }

    float height = 0;
    if (theta > 0){
      float yMult = 1;
      if (theta < 1) {
        yMult = (float)(1 - Math.Cos(Math.PI * (double)theta))/2;
      }
      Phi = yMult;
      Element.Width = width;
      height = Element.Height * yMult;
    }

    Element.Pos = new Vector2(0,0);

    return height;
  }
}
