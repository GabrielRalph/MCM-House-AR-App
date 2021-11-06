using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

[Serializable]
public class TestColor{
  public Color color;
  public string name;
}

public class ARColorPicker : VelocityScroll {
  public GameObject ColorIconPrefab;
  public GameObject HLine;
  public FlexGrid Grid;

  public Action<ModelTexture> OnSelect;

  private ARColorIcon MakeIcon(){
    GameObject iconGO = Instantiate(ColorIconPrefab);
    ARColorIcon icon = iconGO.GetComponent<ARColorIcon>();

    if (icon == null) {
      Destroy(iconGO);
      return null;
    }
    return icon;
  }
  public void Build(ModelTexture mtex){
    if (mtex == null) return;
    Grid.Clear();
    Grid.AddElement(Instantiate(HLine));
    Variant variant = mtex.GetParent<Variant>();
    foreach (ModelTexture sibling in variant.Children<ModelTexture>()) {
      if (sibling != mtex) {
        ARColorIcon icon = MakeIcon();
        icon.modeltexture = sibling;
        icon.ColorIcon.Selected = sibling == mtex;
        icon.ClickBox.AddEventListener("onclick", () => {
          if (OnSelect != null) OnSelect(sibling);
          });
          Grid.AddElement(icon);
          Grid.AddElement(Instantiate(HLine));
      }
    }
  }
}
