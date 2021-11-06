using UnityEngine;
using System;
using UnityEngine.UI;

public class FlexImage : FlexElement{
  public Image Image;



  /* HeightFromWidth, given a desired width returns the height
     that will preserve the image aspect ratio.

     @param width, desired width

     @return height, height that preserves aspect ratio
  */
  public override float HeightFromWidth(float width) {
    //Get image component if none exists
    if (Image == null){
      Image = GetComponent<Image>();
      if (Image == null) return -1;
    }

    //Calculate height from aspect ratio of image
    return width * Image.preferredHeight / Image.preferredWidth;
  }

  /* WidthFromHeight, given a desired height returns the width
     that will preserve the image aspect ratio.

     @param height, desired height

     @return width, eidth that preserves aspect ratio
  */
  public override float WidthFromHeight(float height) {
    //Get image component is none exists
    if (Image == null){
      Image = GetComponent<Image>();
      if (Image == null) return -1;
    }

    //Calculate width from aspect ratio of image
    return height * Image.preferredWidth / Image.preferredHeight;
  }

  /* SetTexture, sets the image texture to a given texture.

     @param texture, 2D texture to apply to the image
  */
  public void SetTexture(Texture2D texture){
    if (texture == null) return;

      //Get image component if none exists
      if (Image == null){
        Image = GetComponent<Image>();
        if (Image == null) return;
      }

      Image.sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0, 0));
  }

  public Texture2D Texture{
    set {
      SetTexture(value);
    }
  }
}
