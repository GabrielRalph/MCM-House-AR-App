using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using System.Collections;


public class FlexCarouselDots : FlexElement{
  public GameObject DotPrefab;
  public float dotSizeVW;
  public float DotSpacingVW;


  public float dotSize_px {get {return dotSizeVW * Screen.width / 100;}}
  public float dotSpacing_px {get {return DotSpacingVW * Screen.width / 100;}}

  private List<Image> dots = new List<Image>();


  public void Clear(){
    foreach(Image dot in dots) {
      Destroy(dot.gameObject);
    }
    dots.Clear();
    _count = 0;
    _selected = 0;
  }

  private int _count;
  public int Count{
    get {return _count;}
    set {
      if (DotPrefab == null) return;
      if (value <= 0) return;
      if (value == Count) return;

      float width = value * dotSize_px + (value - 1) * dotSpacing_px;
      if (width > Width) return;

      Clear();
      float x = -width / 2;
      for (int i = 0; i < value; i++) {
        GameObject dot = Instantiate(DotPrefab);
        FlexElement fdot = dot.GetComponent<FlexElement>();
        Image idot = dot.GetComponent<Image>();
        if (fdot != null && idot != null) {
          dot.transform.SetParent(transform);
          fdot.Width = dotSize_px;
          fdot.Pos = new Vector2(x + dotSize_px/2, 0);

          SetDot(idot, false);
          dots.Add(idot);

          x += dotSize_px + dotSpacing_px;
        }else{
          Destroy(dot);
        }
      }
      _count = dots.Count;

      Selected = 0;
    }
  }

  private int _selected = 0;
  public int Selected {
    get {return _selected;}
    set {
      if (value < 0 || value >= Count) return;
      SetDot(dots[Selected], false);
      _selected = value;
      SetDot(dots[Selected], true);
    }
  }

  public static void SetDot(Image image, bool isSelected) {
    Color c = image.color;
    c.a = isSelected ? 1 : 0.5f;
    image.color = c;
  }

  public override float HeightFromWidth(float width) {
    return dotSize_px;
  }
}
