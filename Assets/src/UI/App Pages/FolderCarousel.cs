using System;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using System.Threading;
using System.Collections;
using System.Threading.Tasks;
using System.Collections.Generic;


public class FolderCarouselException : Exception{
  public FolderCarouselException(){}
  public FolderCarouselException(string message) : base("\n\tFolder carousel:\n\t\t" + message){}
  public FolderCarouselException(string message, Exception inner) : base("\n\tVariant carousel info:\n\t\t" + message, inner){}
}


/* Displays a list of folders using their thumbnails to create a carousel
*/
public class FolderCarousel : FlexCarousel{
  public GameObject ImagePrefab;

  public void OnValidate(){
    if (ImagePrefab is null)
      throw new FolderCarouselException("null image prefab.");
    if (ImagePrefab.GetComponent<FolderImage>() == null)
      throw new FolderCarouselException("image prefab does not contain a FolderImage component.");
  }


  public FolderImage MakeFolderImage(){
    GameObject ImageGO = Instantiate(ImagePrefab);
    FolderImage image = ImageGO.GetComponent<FolderImage>();
    return image;
  }


  public virtual void Build<T>(List<T> folders) {
    if (typeof(T).IsSubclassOf(typeof(Folder))) {
      Build(folders.Cast<Folder>().ToList());
    }
  }

  /* Build, builds carousel given a list of folders
  */
  public async void Build(List<Folder> folders) {
    if (folders == null) return;
    Active = false;
    Clear();

    int n = folders.Count;
    foreach(Folder folder in folders){
      //Set texture.
      FolderImage image = MakeFolderImage();
      image.LoadThumbnailAsync(folder, () => {
        n--;
        if (n == 0) {
          Active = true;
          RunEvent("onload");
        }
      });

      //Add element.
      AddElement(image);
    }
  }
}
