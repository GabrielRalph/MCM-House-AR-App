using UnityEngine;
using System;
using UnityEngine.UI;

public class FlexImage : FlexElement{
  public Image Image;
  public float AspectRatio = 0;

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
      
      if (AspectRatio > 0) {
        texture = CropTexture(AspectRatio, texture);
      }

      Image.sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0, 0));
  }

  public Texture2D Texture{
    set {
      SetTexture(value);
    }
  }

  public static Texture2D CropTexture(float r, Texture2D source) {
    float w = source.width;
    float h = source.height;

    float x0 = 0;
    float y0 = 0;

    float real_r = w / h;

    //to tall
    if (r > real_r) {
      float nh = w / r;
      y0 = (h - nh) / 2;
      h = nh;

    //to wide
    } else {
      float nw = h * r;
      x0 = (w - nw) / 2;
      w = nw;
    }

    Texture2D output = new Texture2D((int)w, (int)h);
    Color[] pixels = source.GetPixels((int)x0, (int)y0, (int)w, (int)h);
    output.SetPixels(pixels);
    output.Apply();
    return output;
  }
}
