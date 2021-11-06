using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using System.Collections;


public class ProductPage : AppPage{
  public FlexText Title;
  public ClickBox BackButton;
  public ClickBox HomeButton;
  public GameObject ProductIconPrefab;
  public FlexGrid Grid;
  public VelocityScroll Scroll;

  private GameObject grid;
  private bool invalid = false;


  public GameObject MakeIcon(Variant variant){
    GameObject IconGO = Instantiate(ProductIconPrefab);
    IconGO.SetActive(false);

    ProductIcon icon = IconGO.GetComponent<ProductIcon>();
    icon.AddEventListener("onload", () => { ItemLoaded(); });
    AddLoadingItem();
    icon.Build(variant);

    icon.ClickBox.minY = App.Navigator.height_px;
    icon.ClickBox.AddEventListener("onclick", () => {
      App.MoveToARView(variant.GetDefaultModelTexture());
    });

    return IconGO;
  }

  void OnValidate(){
    invalid = false;
    if (ProductIconPrefab == null || Grid == null || App == null) {
      Debug.Log("PP: null prefab.");
      invalid = true;
      return;
    }

    if (ProductIconPrefab.GetComponent<ProductIcon>() == null){
      Debug.Log("PP: icon prefab does not contain a product icon component.");
      invalid = true;
    }
  }

  void Awake(){
    BackButton.AddEventListener("onclick", () => {
      App.MoveToCollections();
    });
    HomeButton.AddEventListener("onclick", () => {
      App.MoveToCollections(true);
    });
  }

  public async void Build(string title, List<Variant> variants){
    if (invalid) return;
    if (!StartBuild()) return;
    AddLoadingItem();
    Grid.Clear();

    if (Title != null) Title.text = title;

    foreach (Variant variant in variants) {
      Grid.AddElement(MakeIcon(variant));
    }
    ItemLoaded();
  }
}
