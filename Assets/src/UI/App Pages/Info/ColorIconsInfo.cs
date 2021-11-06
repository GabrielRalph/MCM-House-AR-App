using System;
using UnityEngine;
using UnityEngine.UI;

public class ColorIconsInfo : FlexGrid{
  public GameObject ColorIconPrefab;

  public ColorIcon SelectedIcon {get; private set;}

  public ModelTexture SelectedModelTexture {
    get {
      if (SelectedIcon == null) return null;
      return SelectedIcon.ModelTexture;
    }
  }

  /* Selected, selected color icon
      set: can be set to a modelTexture or ColorIcon
  */
  public object Selected {
    set {
      if (value == null) return;

      ColorIcon next = null;
      if (value.GetType() == typeof(ModelTexture)) {
        ModelTexture model = (ModelTexture) value;
        foreach (ColorIcon icon in GetList<ColorIcon>()){
          if (model == icon.ModelTexture) {
            next = icon;
            break;
          }
        }
        if (next == null) return;
      }else if (value.GetType() == typeof(ColorIcon)) {
        next = (ColorIcon) value;
      }else{
        return;
      }

      if (SelectedIcon != null) {
        SelectedIcon.Selected = false;
      }
      SelectedIcon = next;
      SelectedIcon.Selected = true;
    }
  }

  public void OnValidate(){
    if (ColorIconPrefab == null)
      throw new Exception("Color icons info:\n\tnull color icon prefab.");
    if (ColorIconPrefab.GetComponent<ColorIcon>() == null)
      throw new Exception("Color icons info:\n\tcolor icon prefab does not contain color icon component.");
  }

  /* AddIcon, makes an icon to represent a given modelTexture and adds it
     to the grid of icons.

      @param modelTexture
      @param selected, whether the icon should be selected or not
  */
  public void AddIcon(ModelTexture modelTexture, bool selected) {
    //Build Icon Prefab
    GameObject IconGO = Instantiate(ColorIconPrefab);
    AddElement(IconGO);

    //Setup Icon
    ColorIcon icon = IconGO.GetComponent<ColorIcon>();
    icon.Selected = false;
    icon.ModelTexture = modelTexture;
    if (icon.ClickBox != null) {
      icon.ClickBox.AddEventListener("onclick", () => {
        Selected = icon;
        RunEvent("onselect");
      });
    }
  }

  /* Build, given a variant builds a grid with every color of its
     children modelTexture's. The default modelTexture will be selected.
  */
  public void Build(Variant variant) {
    if (variant == null) return;

    Clear();


    ModelTexture def = variant.GetDefaultModelTexture();
    foreach (ModelTexture modelTexture in variant.Children<ModelTexture>()) {
      AddIcon(modelTexture, def == modelTexture);
    }
  }
}
