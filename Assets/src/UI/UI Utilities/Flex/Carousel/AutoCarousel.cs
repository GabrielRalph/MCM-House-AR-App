using UnityEngine;
using System;
using System.Collections.Generic;
using UnityEngine.UI;

public class AutoCarousel : FlexCarousel {
  public void Awake(){
    if (transform.childCount != Count) {
      Clear();
      foreach(Transform child in transform){
          AddElement(child.gameObject);
      }
    }
  }
}
