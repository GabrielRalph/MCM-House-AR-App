using UnityEngine;
using System;
using UnityEngine.UI;
using System.Threading.Tasks;
using System.Threading;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Rendering;

public class App : Pages{
  public Collection Assets {get; private set;}
  public bool showSplash = true;


  public Hamburger Hamburger;
  public Contact Contact;
  public CollectionPage CollectionPage;
  public ProductPage ProductPage;
  public InfoPage InfoPage;
  public ARView ARView;
  public ARScene ARScene;
  public Navigator Navigator;


  public async void ResetCollection(){
    CollectionPage.Scroll.HeaderElement.Width = Screen.width;
    float h = -CollectionPage.Scroll.HeaderElement.Height;
    float theta = 0;
    while (theta < Mathf.PI + 0.05f) {
      theta += 0.05f;
      float c = h * (Mathf.Cos(theta) + 1)*0.5f;
      if (c > 0) c =0;
      CollectionPage.Scroll.SetScrollPosition(c);
      await Task.Yield();
    }
  }

  async void Awake(){
    HideAll();

    ARScene.On = false;
    Application.targetFrameRate = 300;

    FirebaseContent content = new FirebaseContent();
    Assets = await content.GetCollection();
    if (Assets == null) {
      return;
    }

    Hamburger.Build(Assets);
    Contact.Build(Assets);

    CollectionPage.Build(Assets);
    await CollectionPage.WaitTillLoaded();

    Show(CollectionPage);

    Debug.Log("Built.");
    Splash.Show = false;

    // while (Splash.cOpacity > 0.7f) await Task.Yield();
    ResetCollection();
  }

  /* Move to collections, resets scroll */
  public void MoveToCollections(bool resetScroll = false){
    if (resetScroll) ResetScrollPos(CollectionPage.gameObject);
    MoveTo(CollectionPage.gameObject);
  }

  /* Move and build products page */
  public void MoveToProducts(){
    MoveToProducts("Featured", Assets.GetFeatured<Variant>());
  }
  public void MoveToProducts(Collection collection) {
    MoveToProducts(collection.Name, collection.BFS<Variant>());
  }


  private bool mvg = false;
  public async void MoveToProducts(string name, List<Variant> variants) {
    if (mvg) return;
    mvg = true;

    ProductPage.gameObject.SetActive(false);
    ProductPage.Build(name, variants);
    LockAll(cPage, true);
    if (!ProductPage.isLoaded) {

      Debug.Log("Product Page Loading...");
      Splash.bOpacity = 0.8f;
      Splash.Show = true;
      await ProductPage.WaitTillLoaded();
      Debug.Log("Product Page Loaded.");
      Splash.Show = false;
    }

    Debug.Log("Moving to product page.");
    ResetScrollPos(ProductPage);
    MoveTo(ProductPage);

    mvg = false;
  }

  /* Move to ARView and add the given model to the scene */
  public async void MoveToARView(ModelTexture model){
    //Turn ar on
    if (!ARScene.On) {
      Splash.bOpacity = 0.8f;
      Splash.Show = true;
      ARScene.On = true;
      await Task.Delay(750);
      Splash.Show = false;
    }

    MoveTo(ARView);
    ARScene.AddModel(model);
  }

  /* Move and build info page */
  public async void MoveToInfo(Variant variant) {
    // InfoPage.transform.localPosition
    InfoPage.Build(variant);
    LockAll(cPage, true);
    if (!InfoPage.isLoaded) {
      Splash.bOpacity = 0.8f;
      Splash.Show = true;
      await InfoPage.WaitTillLoaded();
      Splash.Show = false;
    }
    MoveTo(InfoPage);
  }
}
