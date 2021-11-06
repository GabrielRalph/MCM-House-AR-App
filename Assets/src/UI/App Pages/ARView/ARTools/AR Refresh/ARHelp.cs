using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;


public class ARHelp : FlexGrid{
  void Update(){
    if (Count != 3) {
      foreach(Transform child in transform) {
        AddElement(child.gameObject);
      }
      Debug.Log(Count);
    }
  }
}
