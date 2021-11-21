using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

class BackToAR : UIElement {
  public App App;
  void Awake(){
    if (App != null) {
      App.AddEventListener("beforeshow", UpdateToggle);
    }

    ClickBox cb = GetComponent<ClickBox>();
    if (cb != null) {
      cb.OnClick = App.MoveToARView;
    }

    UpdateToggle();
  }

  void UpdateToggle(){
    if (App.ARScene.ModelsCount > 0 && !Active) {
      Active = true;
    } else if (App.ARScene.ModelsCount == 0 && Active){
      Active = false;
    }
  }


  void Update(){
    UpdateToggle();
  }
}
