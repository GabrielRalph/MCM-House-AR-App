using UnityEngine;
using System;
using UnityEngine.UI;
using System.Threading.Tasks;
using System.Threading;
using System.Collections;
using System.Collections.Generic;


public class CollectionIcon : FlexGrid{
  public FolderImage Image;
  public ClickBox ClickBox;
  public Text Title;

  /* Build, builds icon from a collection's thumbnail and name

            @param collection, the collection who's thumbnail and name
                               will be used.

            @event onload runs once all thumbnail has loaded.
                   Active set false on call and set true before
                   onload is called.
  */
  public async void Build(Collection collection){
    Active = false;
    if (Title != null) Title.text = collection.Name + " >";
    if (Image != null) await Image.LoadThumbnail(collection);
    Active = true;
    RunEvent("onload");
  }
}
