using System;
using UnityEngine;
using UnityEngine.UI;

public enum IconPosition{
  Left,
  Right,
  Hidden
}

public class UIHeader : FlexElement {
  public FlexElement Header;
  public FlexSVG Icon;
  public IconPosition IconPosition;

  public override float HeightFromWidth(float width){
    Header.Width = width;
    Header.Pos = new Vector2(0,0);

    if (Icon != null) {
      Icon.Height = Header.Height;
      switch(IconPosition) {
        case IconPosition.Left:
          Icon.SetAnchors(new Vector2(0, 0.5f));
          Icon.SetPivot(new Vector2(0, 0.5f));
          break;

        case IconPosition.Right:
          Icon.SetAnchors(new Vector2(1, 0.5f));
          Icon.SetPivot(new Vector2(1, 0.5f));
          break;

        case IconPosition.Hidden:
          Icon.Active = false;
          break;
      }
    }
    return Header.Height;
  }
}
