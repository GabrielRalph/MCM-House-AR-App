using UnityEngine;
using System;
using UnityEngine.UI;

[Serializable]
public class Padding{
  public Padding(float _left, float _top, float _right, float _bottom){
    left = _left;
    top = _top;
    right = _right;
    bottom = _bottom;
  }
  public float left;
  public float top;
  public float right;
  public float bottom;

  public float x{
    get {
      return left + right;
    }
    set{
      left = value;
      right = value;
    }
  }

  public float y{
    get {
      return top + bottom;
    }
    set {
      top = value;
      right = value;
    }
  }

  public Padding Mul(float scale){
    return new Padding(left*scale, top*scale, right*scale, bottom*scale);
  }
}

/* FlexElement, a flex element is a gameObject who's width and height
   can be set individual. UpdateHeightFromWidth and UpdateWidthFromHeight
   methods can be overriden in order to define flex behaviour.
*/
public class FlexElement : UIElement{

  /* Padding, given in viewport width units
     where 1vw = Screen.width / 100
  */
  public Padding PaddingVW;

  private bool setting = false;
  private float _height = 0;
  private float _width = 0;
  private Vector2 _pos;


  public Vector2 Pos{
    get {return _pos;}

    /* Pos set, sets Pos and the local position to Pos with any offset
       from the padding.
    */
    set {
        //Calculate offset due to padding
        Padding pad = PaddingVW.Mul(Screen.width / 100);
        float offX = (pad.left - pad.right) / 2;
        float offY = (pad.bottom - pad.top) / 2;

        //Set localPosition
        transform.localPosition = new Vector3(value.x + offX, value.y + offY, 0);
        RunEvent("onmove");
        _pos = value;
    }
  }
  public float Width{
    get {return _width;}

    /* Width set, sets sizeDelta to the computed size without padding
        add sets Width and Height to size with padding.
        Height is computed using HeightFromWidth().

        set will return immediately if already setting.

        width will be set to -1 if no sizeDelta exists or if any
        negative size values are computed.

       @see HeightFromWidth()
    */
    set{
      if (setting) return;
      setting = true;

      _width = -1;
      RectTransform rect = GetComponent<RectTransform>();
      if (rect == null || value < 0) {
        setting = false;
        return;
      }


      //Get height from width without padding
      Padding pad = PaddingVW.Mul(Screen.width / 100);

      float width = value - pad.left - pad.right;
      if (width < 0) {
        setting = false;
        return;
      }

      //Get height from width
      float height = HeightFromWidth(width);
      if (height < 0) {
        setting = false;
        return;
      }

      //Set private width and height to size with padding
      _width = value;
      _height = height + pad.top + pad.bottom;

      //Set size to the height and width without padding
      rect.sizeDelta = new Vector2(width, height);
      setting = false;
      RunEvent("onresize");
    }
  }
  public float Height{
    get {return _height;}

    /*  Height set, sets sizeDelta to the computed size without padding
        add sets Height and Width to size with padding.
        Width is computed using WidthFromHeight().

        set will return immediately if already setting.

        width will be set to -1 if no sizeDelta exists or if any
        negative size values are computed.

       @see WidthFromHeight()
    */
    set{
      if (setting) return;
      setting = true;

      _height = -1;
      RectTransform rect = GetComponent<RectTransform>();
      if (rect == null || value < 0) {
        setting = false;
        return;
      }


      //Get height from width without padding
      Padding pad = PaddingVW.Mul(Screen.width / 100);

      float height = value - pad.top - pad.bottom;
      if (height < 0) {
        setting = false;
        return;
      }

      //Get height from width
      float width = WidthFromHeight(height);
      if (width < 0) {
        setting = false;
        return;
      }

      //Set private width and height to size with padding
      _height = value;
      _width = width + pad.left + pad.right;

      //Set size to the height and width without padding
      rect.sizeDelta = new Vector2(width, height);
      setting = false;
      RunEvent("onresize");
    }
  }

  /* HeightFromWidth, is called during the Width set method
     in order to get the height of the element given its width.

     @param width, the width to calculate the height from

     @return height, the height as a function of width

     @notes this method can be overriden in order to set the correct
            height of the element.

            This method can be used to set the width/height of
            child flex elements.
  */
  public virtual float HeightFromWidth(float width) {
    float height = width;
    return height;
  }

  /* WidthFromHeight, is called during the SetHeight method
     in order to get the width of the element given its height.

     @param height, the height to calculate the width from

     @return height, the height given the width

     @notes this method can be overriden in order to set the correct
            width of the element. DO NOT call SetHeight within
            this method to avoid an infinite recurstion.

            This method can be used to set the width/height of
            child flex elements.
  */
  public virtual float WidthFromHeight(float height) {
    float width = height;
    return width;
  }

}
