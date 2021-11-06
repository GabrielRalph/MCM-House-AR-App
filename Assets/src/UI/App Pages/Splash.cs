using UnityEngine;
using System;
using UnityEngine.UI;

public class Splash : UIElement {
  public Text Text;
  public Image Background;
  public CanvasGroup Canvas;

  public float FadeSpeed = 0.2f;
  public float WaveSpeed = 0.1f;
  public float WaveMin = 0.6f;
  public float WaveMax = 1;

  public bool Show = true;

  public float MappedSin(float theta, float min, float max) {
    return min + (max - min)*(Mathf.Sin(theta) + 1)/2;
  }

  public float MappedCos(float theta, float min, float max) {
    return min + (max - min)*(Mathf.Cos(theta) + 1)/2;
  }

  public float bOpacity {
    get {return Background.color.a;}
    set {
      if (value < 0) value = 0;
      if (value > 1) value = 1;

      Color c = Background.color;
      c.a = value;
      Background.color = c;
    }
  }
  public float tOpacity {
    get {return Text.color.a;}
    set {
      if (value < 0) value = 0;
      if (value > 1) value = 1;

      Color c = Text.color;
      c.a = value;
      Text.color = c;
    }
  }
  public float cOpacity {
    get {return Canvas.alpha;}
    set {
      if (value < 0) value = 0;
      if (value > 1) value = 1;
      Canvas.alpha = value;
    }
  }

  private float theta = 0;
  private float phi = -1;
  private bool lastShow = true;
  public void Update() {
    if (lastShow) {
      if (phi < 0) {
        cOpacity = 1;
        if (!Show) phi = 0;
      } else {
        cOpacity = MappedCos(phi, 0, 1);
        phi += FadeSpeed;
        if (phi > Mathf.PI) {
          cOpacity = 0;
          phi = -1;
          theta = 0;
          lastShow = false;
        }
      }
    }else {
      if (phi < 0) {
        cOpacity = 0;
        if (Show) phi = 0;
      } else {
        cOpacity = MappedCos(phi, 1, 0);
        phi += FadeSpeed;
        if (phi > Mathf.PI) {
          cOpacity = 1;
          phi = -1;
          lastShow = true;
        }
      }
    }

    if (cOpacity > 0) {
      tOpacity = MappedSin(theta, WaveMin, WaveMax);
      theta += WaveSpeed;
    }
  }
}
