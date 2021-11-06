using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;


public class ARProductInfo : VelocityScroll{
  public FlexGrid Grid;
  public GameObject TextPrefab;
  public GameObject HLine;

  public Action<ModelTexture> OnSelect;

  private GameObject MakeText(string text) {
    GameObject textGO = Instantiate(TextPrefab);
    FlexText flextext = textGO.GetComponent<FlexText>();
    flextext.text = text;
    return textGO;
  }


  public void AddModel(ModelTexture modeltexture, string title){
    GameObject textGO = MakeText(title);

    ClickBox clickBox = textGO.GetComponent<ClickBox>();
    clickBox.AddEventListener("onclick", () => {
      if (OnSelect != null) OnSelect(modeltexture);
    });
    Grid.AddElement(textGO);
    Grid.AddElement(Instantiate(HLine));
  }

  public void Build(List<ModelTexture> models){
    Grid.Clear();
    List<Model> list = new List<Model>();
    Grid.AddElement(Instantiate(HLine));
    foreach(ModelTexture modeltexture in models){
      Model model = modeltexture.GetParent<Model>();
      if (model != null && !list.Contains(model)) {
        AddModel(modeltexture, model.Name + " >");
        list.Add(model);
      }
    }
  }
}
