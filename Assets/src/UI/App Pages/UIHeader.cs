using System;
using UnityEngine;
using UnityEngine.UI;

// public enum IconPosition{
//   Left,
//   Right,
//   Hidden
// }

public class UIHeader : FlexElement {
  public FlexElement Header;
  public FlexSVG LeftIcon;
  public FlexSVG RightIcon;
  // public IconPosition IconPosition;

  public override float HeightFromWidth(float width){
    Header.Width = width;
    Header.Pos = new Vector2(0,0);

    if (LeftIcon != null) {
      LeftIcon.Height = Header.Height;
      LeftIcon.SetAnchors(new Vector2(0, 0.5f));
      LeftIcon.SetPivot(new Vector2(0, 0.5f));
    }

    if (RightIcon != null) {
      RightIcon.Height = Header.Height;
      RightIcon.SetAnchors(new Vector2(1, 0.5f));
      RightIcon.SetPivot(new Vector2(1, 0.5f));
    }
    return Header.Height;
  }
}
