using UnityEngine;
using System;
using UnityEngine.UI;
using System.Collections.Generic;


public class Hamburger : Collapsable{
  public GameObject ListIconPrefab;
  public ClickBox ToggleButton;
  public App App;
  public Search Search;

  public FlexGrid GridElement {
    get {
      if (Element.GetType() == typeof(FlexGrid)) {
        return (FlexGrid) Element;
      }else {
        return null;
      }
    }
  }

  public void Hide(){
    Hidden = true;
  }
  public void Show() {
    if (Search != null && !Search.Hidden) {
      Search.Hide();
    }
    Hidden = false;
  }
  public void Toggle() {
    if (Hidden) Show();
    else Hide();
  }

  void Awake(){
    if (App != null) App.AddEventListener("beforeshow", Hide);
    if (ToggleButton != null) ToggleButton.OnClick = Toggle;
  }

  public void AddIcon(string text, List<Variant> products){
    GameObject IconGO = Instantiate(ListIconPrefab);
    Text textComp = IconGO.GetComponent<Text>();
    if (textComp != null) {
      textComp.text = text;
    }

    ClickBox cb = IconGO.GetComponent<ClickBox>();
    if (cb != null) {
      cb.OnClick = () => {
        App.MoveToProducts(text, products);
      };
    }

    GridElement.AddElement(IconGO);
  }

  public void Build(Collection collection) {
    AddIcon("All Furniture", collection.BFS<Variant>());
    foreach(Collection c in collection.Children<Collection>()) {
      AddIcon(c.Name, c.BFS<Variant>());
    }
  }
}
