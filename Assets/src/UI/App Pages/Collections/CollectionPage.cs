using UnityEngine;
using System;
using UnityEngine.UI;
using System.Threading.Tasks;
using System.Threading;
using System.Linq;
using System.Collections;
using System.Collections.Generic;


public class CollectionPage : AppPage{
  public GameObject GridPrefab;
  public FlexGrid Grid;
  public GameObject FeaturedPrefab;
  public GameObject CarouselPrefab;
  public GameObject IconPrefab;
  public ClickBox AllFurniture;

  public float navY{get {return App.Navigator.height_px;}}
  // public App App;

  public VelocityScroll Scroll;

  private bool invalid = false;


  void OnValidate(){
    bool inv = FeaturedPrefab == null ||
               CarouselPrefab == null ||
               GridPrefab == null ||
               IconPrefab == null;

      invalid = inv;
      if (inv) {
        Debug.Log("CP err: Null Prefab.");
        return;
      }


    inv = GridPrefab.GetComponent<FlexGrid>() == null;
      if (inv) Debug.Log("CP err: No Flex Grid in Grid Prefab");
      invalid |= inv;

    inv = CarouselPrefab.GetComponent<CollectionCarousel>() == null;
      if (inv) Debug.Log("CP err: No Flex Element in Carousel Prefab.");
      invalid |= inv;

    inv = FeaturedPrefab.GetComponent<CollectionCarousel>() == null;
      if (inv) Debug.Log("CP err: No Flex Element in Featured Prefab.");
      invalid |= inv;

    inv = IconPrefab.GetComponent<CollectionIcon>() == null;
      if (inv) Debug.Log("CP err: No Flex Element in Icon Prefab.");
      invalid |= inv;
  }

  /* MakeFeatured, makes an instance of the FeaturedPrefab and builds
                   its CollectionCarousel with the given collection
                   and the featured flag set true

                   @param collection, to build collection carousel

                   @return the new featured's gameObject
  */
  GameObject MakeFeatured(Collection collection) {

    GameObject featuredGO = Instantiate(FeaturedPrefab);
    featuredGO.SetActive(false);

    CollectionCarousel carousel = featuredGO.GetComponent<CollectionCarousel>();
    Debug.Log("\n\n-- making featured --\n\n");
    carousel.AddEventListener("onload", () => {
      Debug.Log("\n\n-- featured built --\n\n");
      isReady = true;
      ItemLoaded();
    });
    AddLoadingItem();
    carousel.Build(collection, true);

    carousel.ClickBox.AddEventListener("onclick", () => {
      App.MoveToProducts();
    });

    return featuredGO;
  }

  /* MakeFeatured, makes an instance of the CarouselPrefab and builds
                   its CollectionCarousel with the given collection

                   @param collection, to build collection carousel

                   @return the new carousel's gameObject
  */
  GameObject MakeCarousel(Collection collection) {
    GameObject carouselGO = Instantiate(CarouselPrefab);
    carouselGO.SetActive(false);
    carouselGO.name = collection.Name;

    CollectionCarousel carousel = carouselGO.GetComponent<CollectionCarousel>();
    Debug.Log("\n\n-- making carousel --\n\n");
    carousel.AddEventListener("onload", () => {
      ItemLoaded();
      Debug.Log("\n\n-- carousel built --\n\n");

    });
    AddLoadingItem();
    carousel.Build(collection);

    carousel.ClickBox.AddEventListener("onclick", () => {
      App.MoveToProducts(collection);
    });

    carousel.AddEventListener("oncollection", () => {
      App.MoveToProducts(carousel.SelectedCollection);
    });

    return carouselGO;
  }

  /* MakeIcon, makes an instance of the IconPrefab and builds
               it with the given collection

               @param collection, to build icon

               @return the new icon's gameObject
  */
  GameObject MakeIcon(Collection collection){
    GameObject IconGO = Instantiate(IconPrefab);
    IconGO.SetActive(false);
    IconGO.name = collection.Name;

    Debug.Log("\n\n-- making icon --\n\n");
    CollectionIcon icon = IconGO.GetComponentInChildren<CollectionIcon>();
    icon.AddEventListener("onload", () => {
      ItemLoaded();
      Debug.Log("\n\n-- icon built --\n\n");

    });
    AddLoadingItem();
    icon.Build(collection);

    icon.ClickBox.AddEventListener("onclick", () => {
      App.MoveToProducts(collection);
    });
    return IconGO;
  }




  /* MakeGrid, makes an instance of the GridPrefab and fills
               it with icons made from the given list of collections

               @param collections, to make icons.

               @return the new grid's gameObject
  */
  GameObject MakeGrid(List<Collection> collections) {
    if (collections == null) return null;

    // Load first icon
    GameObject GridGO = Instantiate(GridPrefab);
    FlexGrid grid = GridGO.GetComponent<FlexGrid>();

    foreach(Collection collection in collections) {
      grid.AddElement(MakeIcon(collection));
    }
    return GridGO;
  }

  /* MakeGrid, optional parameters

               @param collection, and its decendant's used to
                      make icons

               @param inclusive, if set false the given collection's
                                 icon will not be included
  */
  GameObject MakeGrid(Collection collection, bool inclusive) {
    GameObject grid = MakeGrid(collection.BFS<Collection>(inclusive));
    grid.name = collection.Name;
    return grid;
  }

  /* Buld, build's the collection page from a given root collection.
           The Featured carousel is firstly made from root collection.
           The following steps are then repeated:
           1. the first unused child collection with an odd number of
              decendant collections is used to make a grid (inclusive
              of that child).
           2. the first unused child collection with an even number of
              decendant collections will be used to make a carousel
              (inclusive of the child) and a grid (not including the
              child). Unless collection has no decendant's.
           3. 1 and 2 are repeated until not possible then the remaining
              unused child collections are used to make a grid.

           @param collection, root collection

           once loaded isLoaded set true
  */
  public void BuildOld(Collection collection){
    collection.test();
    if (invalid){
      Debug.Log("Invalid collection page.");
      return;
    }else if (Grid == null) {
      Debug.Log($"Null grid");
      return;
    }else if (!StartBuild()){
      Debug.Log("Items already being loaded.");
      return;
    }
    AddLoadingItem();

    Grid.Clear();
    Grid.AddElement(MakeFeatured(collection));

    //Get size of each child collection
    List<Collection> children = collection.Children<Collection>();
    List<int> sizes = new List<int>();
    foreach(Collection child in children) {
      sizes.Add(child.BFS<Collection>(true).Count);
    }

    bool add = true;
    while (add) {
      add = false;
      for (int i = 0; i < sizes.Count; i++) {
        if (sizes[i] % 2 == 0) {
          Collection child = children[i];
          Grid.AddElement(MakeGrid(child, true));

          sizes.RemoveAt(i);
          children.RemoveAt(i);
          add = true;
          break;
        }
      }

      for (int i = 0; i < sizes.Count; i++) {
        if (sizes[i] % 2 == 1 && sizes[i] > 2) {
          Collection child = children[i];

          Grid.AddElement(MakeCarousel(child));

          Grid.AddElement(MakeGrid(child, false));

          sizes.RemoveAt(i);
          children.RemoveAt(i);
          add = true;
          break;
        }
      }
    }
    Grid.AddElement(MakeGrid(children));
    ItemLoaded();
  }

  public void Build(Collection collection) {
    if (invalid){
      Debug.Log("Invalid collection page.");
      return;
    }else if (Grid == null || collection == null) {
      Debug.Log("Null objects");
      return;
    }else if (!StartBuild()){
      Debug.Log("Items already being loaded.");
      return;
    }
    collection.test();

    if (AllFurniture != null) {
      Debug.Log("sett callback");
      AllFurniture.OnClick = () => {
        Debug.Log("app move to collections");
        App.MoveToProducts(collection);
      };
    }
    Grid.Clear();

    Grid.AddElement(MakeGrid(collection.BFS<Collection>(false)));
  }
}
