using UnityEngine;
using System;
using UnityEngine.UI;
using System.Collections.Generic;


public class HeaderFader : MonoBehaviour {
  public List<Collapsable> cols;
  public Color hidden;
  public Color shown;

  void Update(){
    float phi = 0;
    foreach(Collapsable c in cols) phi += c.Phi;
    if (phi > 0.9999) phi = 1;
    if (phi < 0.0001) phi = 0;
    Image image = GetComponent<Image>();
    if (image != null) {
      Color c = image.color;
      c.r = hidden.r*(1-phi) + shown.r*phi;
      c.g = hidden.g*(1-phi) + shown.g*phi;
      c.b = hidden.b*(1-phi) + shown.b*phi;
      c.a = hidden.a*(1-phi) + shown.a*phi;
      image.color = c;
    }
  }
}
