using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using System.Collections;


public class TestAutoGrid : FlexGrid{

  public void Awake(){
    foreach(Transform child in transform){
      AddElement(child.gameObject);
    }
  }
  public void Update(){
    Width = Screen.width;
  }
  public void OnValidate(){
    Width = Screen.width;
  }
}
