using UnityEngine;
using System;
using UnityEngine.UI;
using System.Collections.Generic;


public class Hamburger : FlexElement{
  public FlexGrid GridElement;
  public GameObject ListIconPrefab;
  public ClickBox Toggle;
  public App App;
  public bool Hidden = true;
  public float TransitionSpeed = 0.01f;
  private float theta = 0;

  void Awake(){
    App.AddEventListener("beforeshow", () => {
      Hidden = true;
    });
    Toggle.OnClick = () => {
      Hidden = !Hidden;
    };
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

  public override float HeightFromWidth(float width) {
    if (Hidden) {
      if (theta > 0) {
        theta -= TransitionSpeed;
      } else {
        theta = 0;
        if (GridElement.gameObject.activeSelf){
          GridElement.gameObject.SetActive(false);
        }
      }

    } else {
      if (!GridElement.gameObject.activeSelf) {
        GridElement.gameObject.SetActive(true);
      }
      if (theta < 1) {
        theta += TransitionSpeed;
      } else {
        theta = 1;
      }
    }

    float height = 0;
    if (theta > 0){
      float yMult = 1;
      if (theta < 1) {
        yMult = (float)(1 - Math.Cos(Math.PI * (double)theta))/2;
      }
      GridElement.Width = width;
      height = GridElement.Height * yMult;
    }

    return height;
  }
}
