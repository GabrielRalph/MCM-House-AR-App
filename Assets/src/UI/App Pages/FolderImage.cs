using UnityEngine;
using System;
using UnityEngine.UI;
using System.Threading.Tasks;
using System.Threading;


/* Handles async loading of folder thumbnail
*/
public class FolderImage : FlexImage{
  public Folder Folder {get; private set;}
  public string Name {get {
    if (Folder != null) return Folder.Name;
    else return "no folder";
    }}

  public Thumbnail DefaultThumbnail(Folder folder){
    if (folder.Thumbnail.isValid) return folder.Thumbnail;
    else return folder.GetDefaultThumbnail();
  }

  public async Task LoadThumbnail(Folder folder) {
    Active = false;
    Folder = folder;
    Thumbnail thumbnail = DefaultThumbnail(folder);
    await thumbnail.LoadTexture();
    Texture = thumbnail.Texture;
    Active = true;
  }

  public async void LoadThumbnailAsync(Folder folder){LoadThumbnailAsync(folder, null);}
  public async void LoadThumbnailAsync(Folder folder, Action action) {
    Active = false;
    Folder = folder;
    Thumbnail thumbnail = DefaultThumbnail(folder);
    // Debug.Log("loading " + thumbnail);
    if (thumbnail.Texture == null) {
      await thumbnail.LoadTexture();
    }
    // Debug.Log("loaded " + thumbnail);
    Texture = thumbnail.Texture;
    Active = true;
    if (action != null) action();
  }
}
