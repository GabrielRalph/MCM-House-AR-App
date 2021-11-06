using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class Contact : VelocityScroll {
  public FolderCarousel carousel;
  public ClickBox Facebook;
  public ClickBox Instagram;
  public string instagramAccountName = "mcmhouse";
  public string facebookPageId = "135020629967404";

  public float minY{set{
    Facebook.minY = value;
    Instagram.minY = value;
  }}

  public void Build(Collection assets) {
    Instagram.AddEventListener("onclick", () => {
      Application.OpenURL($"instagram://user?username={instagramAccountName}");
    });
    Facebook.AddEventListener("onclick", () => {
      #if UNITY_IOS
        Application.OpenURL($"fb://profile/{facebookPageId}");
      #elif UNITY_ANDROID
        Application.OpenURL($"fb://page/{facebookPageId}");
      #endif
    });
    List<Collection> cols = assets.Children<Collection>();
    List<Collection> imcols = new List<Collection>();
    foreach (Collection col in cols) {
      if (col.Thumbnail.Texture != null) {
        imcols.Add(col);
      }
    }
    carousel.Build<Collection>(imcols);
  }
}
