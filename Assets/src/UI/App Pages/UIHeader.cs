using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

// public enum IconPosition{
//   Left,
//   Right,
//   Hidden
// }

public class UIHeader : FlexElement {
  public FlexElement Header;
  public List<FlexElement> LeftIcons;
  public List<FlexElement> RightIcons;
  // public IconPosition IconPosition;

  public override float HeightFromWidth(float width){
    Header.Width = width;
    Header.Pos = new Vector2(0,0);


    if (LeftIcons != null) {
      float xOff = 0;
      foreach (FlexElement icon in LeftIcons) {
        if (icon != null && icon.Active) {
          icon.Height = Header.Height;
          icon.DefaultAnchors();
          icon.DefaultPivot();
          icon.Pos = new Vector2(xOff, 0);
          icon.SetAnchors(new Vector2(0, 0.5f));
          icon.SetPivot(new Vector2(0, 0.5f));
          xOff += icon.Width;
        }
      }
    }

    if (RightIcons != null) {
      float xOff = 0;
      foreach (FlexElement icon in RightIcons) {
        if (icon != null && icon.Active) {
          icon.Height = Header.Height;
          icon.DefaultAnchors();
          icon.DefaultPivot();
          icon.Pos = new Vector2(xOff, 0);
          icon.SetAnchors(new Vector2(1, 0.5f));
          icon.SetPivot(new Vector2(1, 0.5f));
          xOff -= icon.Width;
        }
      }
    }

    return Header.Height;
  }
}
