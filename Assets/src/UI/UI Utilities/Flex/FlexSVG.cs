using UnityEngine;
using System;
using UnityEngine.UI;
using Unity.VectorGraphics;
using System.Collections.Generic;
using System.Reflection;

public class FlexSVG : FlexElement{

  private SVGImage _svg;
  public SVGImage SVG {
    get {
      if (_svg == null) {
        _svg = GetComponent<SVGImage>();
      }

      return _svg;
    }
  }


  public Sprite sprite{
    get {
      if (SVG == null) return null;
      return SVG.sprite;
    }
    set {
      if (SVG == null) return;
      SVG.sprite = value;
    }
  }



  /* HeightFromWidth, given a desired width returns the height
     that will preserve the image aspect ratio.

     @param width, desired width

     @return height, height that preserves aspect ratio
  */
  public override float HeightFromWidth(float width) {

    //Get image component if none exists
    if (SVG == null) return 0;

    if (SVG.sprite.bounds == null) return 0;

    SVG.preserveAspect = true;
    Vector3 size = SVG.sprite.bounds.max - SVG.sprite.bounds.min;
    size *= width/size.x;


    //Calculate height from aspect ratio of image
    return size.y;
  }

  /* WidthFromHeight, given a desired height returns the width
     that will preserve the image aspect ratio.

     @param height, desired height

     @return width, eidth that preserves aspect ratio
  */
  public override float WidthFromHeight(float height) {

    //Get image component if none exists
    if (SVG == null) return 0;

    if (SVG.sprite == null || SVG.sprite.bounds == null) return 0;

    SVG.preserveAspect = true;
    Vector3 size = SVG.sprite.bounds.max - SVG.sprite.bounds.min;
    size *= height/size.y;


    //Calculate width from aspect ratio of image
    return size.x;
  }
}
