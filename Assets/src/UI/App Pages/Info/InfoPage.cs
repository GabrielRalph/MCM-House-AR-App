using System;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using System.Threading;
using System.Collections;
using System.Threading.Tasks;
using System.Collections.Generic;


public class InfoPage : AppPage{
  public FlexText Title;
  public FlexText Price;
  public FlexText Size;
  public FlexText Description;
  public FolderCarousel Carousel;
  public ColorIconsInfo Colors;

  public ClickBox BackButton;
  public ClickBox HomeButton;

  public ClickBox Link;
  public ClickBox ViewInHome;

  public string PriceValue{
    set {
      if (value == ""){
        Price.Active = false;
      }else{
        Price.text = "$" + value;
      }
    }
  }

  public Model Model {get; private set;}
  public List<ModelTexture> Textures {get; private set;}
  public ModelTexture DefaultTexture {get; private set;}
  public ModelTexture CurrentTexture {get; private set;}
  public int DefaultTextureIndex {get; private set;}
  private Variant _variant;
  public Variant Variant {
    get {
      return _variant;
    }
    set {
      if (value != null) {
        _variant = value;
        Size.text = Variant.Name;
        PriceValue = Variant.Price;

        Model = Variant.GetParent<Model>();
        if (Model != null) {
          Title.text = Model.Name;
          Description.text = Model.Description;

        }

        Colors.Build(Variant);

        Textures = Variant.BFS<ModelTexture>();
        DefaultTexture = Variant.GetDefaultModelTexture();
        DefaultTextureIndex = Textures.IndexOf(DefaultTexture);
        CurrentTexture = DefaultTexture;
      }else {
        Textures = null;
        DefaultTexture = null;
        DefaultTextureIndex = 0;
        Model = null;
      }
    }
  }

  public void SelectDefault(){
    if (Variant == null) return;
    Carousel.Selected = DefaultTextureIndex;
    Colors.Selected = DefaultTexture;
  }

  private bool init = false;
  void Initialize(){
    if (init) return;
    init = true;
    //Navigation button event handlers
    if (BackButton != null) {
      BackButton.AddEventListener("onclick", () => {
        App.MoveBack();
      });
    }
    if (HomeButton != null) {
      HomeButton.AddEventListener("onclick", () => {
        App.MoveToCollections(true);
      });
    }

    //Carousel events
    Carousel.AddEventListener("onload", () => {
      SelectDefault();
      isReady = true;
      ItemLoaded();
    });

    Carousel.AddEventListener("onselect", () => {
      if (Textures == null) return;
      Colors.Selected = Textures[Carousel.Selected];
      CurrentTexture = Textures[Carousel.Selected];
    });

    //Color icon select event
    Colors.AddEventListener("onselect", () => {
      if (Textures == null) return;
      Carousel.Selected = Textures.IndexOf(Colors.SelectedModelTexture);
      CurrentTexture = Colors.SelectedModelTexture;
    });

    Link.minY = App.Navigator.height_px;
    Link.AddEventListener("onclick", () => {
      if (Model != null)
        Application.OpenURL(Model.Link);
    });
    ViewInHome.minY = App.Navigator.height_px;
    ViewInHome.AddEventListener("onclick", () => {
      if (CurrentTexture != null)
        App.MoveToARView(CurrentTexture);
    });
  }

  public void Build(Variant variant) {
    Initialize();
    if (variant == null) return;
    if (!StartBuild()) return;

    AddLoadingItem();

    Variant = variant;

    AddLoadingItem();
    Carousel.Build<ModelTexture>(Textures);


    ItemLoaded();
  }
}
