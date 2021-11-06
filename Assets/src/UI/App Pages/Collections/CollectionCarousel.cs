using UnityEngine;
using System;
using UnityEngine.UI;
using System.Threading.Tasks;
using System.Threading;
using System.Collections;
using System.Collections.Generic;

public class CollectionCarousel : FlexGrid{
  public ClickBox ClickBox;
  public FlexButton FlexButton;
  public FolderCarousel FolderCarousel;
  public ClickBox ImageClickBox;

  public Collection SelectedCollection {get; private set;}

  void Awake(){
    if (ImageClickBox == null) return;
    ImageClickBox.AddEventListener("onclick", () => {
      if (FolderCarousel == null) return;

      GameObject obj = FolderCarousel.SelectedObject;
      if (obj == null) return;

      FolderImage image = obj.GetComponent<FolderImage>();
      if (image == null) return;

      Folder folder = image.Folder;
      if (folder == null) return;

      if (folder.GetType() == typeof(Collection)) {
        SelectedCollection = (Collection)(object) folder;
        RunEvent("oncollection");
      }
    });
  }

  /* Build, builds a carousel from a collection and it's decendant
            collections' thumbnails, sets button text, if given, to
            the name of the collection.

            @param collection, the collection and its decendant collections
                               thumbnails will be used in the carousel.
            @param *featured,  if set true, only collections that contain
                               a featured model will be used.

            @event onload runs once all images have loaded.
                   Active set false on call and set true before
                   onload is called.
  */
  public async void Build(Collection collection, bool featured = false) {
    if (collection == null) return;
    Active = false;
    List<Collection> collections;
    if (featured){
      collections = collection.GetFeatured<Collection>();
    }else{
      collections = collection.BFS<Collection>(true);
    }

    FolderCarousel.Build<Collection>(collections);
    if (FlexButton != null) FlexButton.Title = collection.Name + " range >";

    await FolderCarousel.WaitActive();
    Active = true;
    RunEvent("onload");
  }
}
