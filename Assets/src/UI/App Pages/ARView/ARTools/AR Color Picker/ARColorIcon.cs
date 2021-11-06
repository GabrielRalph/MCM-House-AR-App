using System;
using UnityEngine;
using UnityEngine.UI;

public class ARColorIcon : FlexElement {
  public FlexText Text;
  public ColorIcon ColorIcon;
  public ClickBox ClickBox;

  private ModelTexture _modeltexture;
  public ModelTexture modeltexture{
    set {
      if (value == null) return;
      _modeltexture = value;
      color = value.Color;
      name = value.Color.Name;
    }
  }

  public string name{
    set {
      Text.text = value;
    }
  }
  public object color{
    set {
      ColorIcon.Color = value;
    }
  }

  public override float HeightFromWidth(float width){
    Text.Width = width;
    ColorIcon.Height = Text.Height;
    Text.Pos = new Vector2(ColorIcon.Width,0);
    ColorIcon.SetAnchors(new Vector2(0, 0.5f));
    ColorIcon.SetPivot(new Vector2(0, 0.5f));
    return Text.Height;
  }
}
