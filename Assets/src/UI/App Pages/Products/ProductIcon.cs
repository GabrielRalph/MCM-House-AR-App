using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using System.Collections;


public class ProductIcon : AutoGrid{

  public FolderImage Image;
  public FlexText Title;
  public FlexText Size;
  public ClickBox ClickBox;

  public void Awake(){
    foreach(Transform child in transform){
      AddElement(child.gameObject);
    }
  }

  public void Build(Variant variant){
    if (variant == null) return;
    Active = false;
    Model model = variant.GetParent<Model>();
    Title.text = model.Name;
    Size.text = variant.Name;
    Image.LoadThumbnailAsync(variant, () => {
      Active = true;
      RunEvent("onload");
    });
  }
}
