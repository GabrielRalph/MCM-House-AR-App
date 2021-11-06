using UnityEngine;
using System;
using UnityEngine.UI;

public class ColorIcon : FlexElement{
  public Image ColorCircle;
  public Image Border;
  public ClickBox ClickBox;

  /* ModelTexture,
      get: modelTexture who's color is represented
      set: modelTexture to represent
  */
  private ModelTexture _modelTexture;
  public ModelTexture ModelTexture{
    get {return _modelTexture;}
    set {
      if (value == null) return;

      Color = value.Color;
      _modelTexture = value;
    }
  }

  /* Selected,
      get: whether the icon is selected
      set: select or unselect icon (hides/shows border)
  */
  private bool selected;
  public bool Selected{
    get {return selected;}
    set {
      Color oldc = Border.color;
      if (value) {
        oldc.a = 1;
      } else{
        oldc.a = 0;
      }
      selected = value;
      Border.color = oldc;
    }
  }

  /* Color,
      get: color of icon as an (object)
      set: can be set using a Color, MColor or a ModelTexture
  */
  public object Color{
    get{return ColorCircle.color;}
    set {
      if (value.GetType() == typeof(MColor)) {
        ColorCircle.color = ((MColor) value).Color;
      }else if (value.GetType() == typeof(Color)){
        Color c = (Color) value;
        c.a = 1;
        ColorCircle.color = c;
      }else if (value.GetType() == typeof(ModelTexture)) {
        ModelTexture = (ModelTexture) value;
      }
    }
  }
}
