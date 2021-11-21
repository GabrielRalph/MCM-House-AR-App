using UnityEngine;
using System;
using UnityEngine.UI;

public enum ClickBoxModes{
  Rectangular,
  Circular,
};

public class ClickBox : UIElement{

  // public properties
  public ClickBoxModes ClickBoxMode;
  public Vector2 ClickBoxPaddingVW;
  public Action OnClick = null;
  public bool Haptic = true;

  public Vector2 StartPos {get; private set;}
  public Vector2 EndPos {get; private set;}

  // private properties
  private RectTransform rect = null;

  public Vector2 clickBoxPadding_px {get {return ClickBoxPaddingVW * Screen.width / 100;}}

  /* GetRect, returns RectTransform if it exists

     @return rect, RectTransform
  */
  public RectTransform GetRect() {
    if (rect == null) {
      rect = GetComponent<RectTransform>();
    }

    return rect;
  }

  /* GetSize, returns the size of the RectTransform.

     @return size, size vector
  */
  private Vector2 _size;
  private Vector2 _center;
  private void update_size_center(){
    RectTransform rect = GetRect();
    if (rect == null) return;

    Vector3[] corners = new Vector3[4];
    rect.GetWorldCorners(corners);

    //Get width and height from corner coordinates
    float width = corners[2].x - corners[0].x;
    float height = corners[2].y - corners[0].y;

    _size = corners[2] - corners[0];
    _center = (corners[2] + corners[0]) / 2;
  }

  public Vector2 Size{
    get {
      update_size_center();
      return _size;
    }
  }
  public Vector2 Center{
    get {
      update_size_center();
      return _center;
    }
  }


  /* ContainsPoint, returns true if a given point exists within the icons
     ClickBox geometry
  */
  public bool ContainsPoint(Vector2 point) {
    Vector2 pos = Center;
    Vector2 cbox = Size/2;
    if (cbox == Vector2.zero) return false;

    cbox += clickBoxPadding_px;

    switch (ClickBoxMode) {
      case ClickBoxModes.Circular:
        float radius = cbox.x > cbox.y ? cbox.x : cbox.y;
        return Vector2.Distance(pos, point) < radius;

      case ClickBoxModes.Rectangular:
        Vector2 diff = pos - point;
        diff.x = Mathf.Abs(diff.x);
        diff.y = Mathf.Abs(diff.y);
        return diff.x < cbox.x && diff.y < cbox.y;
    }

    return false;
  }

  public void Click(Vector2 start, Vector2 end) {
    StartPos = start;
    EndPos = end;

    Debug.Log($"{gameObject.name}'s clickbox clicked.");
    if (Haptic) NativeAid.HapticEvent(HEvent.Click);
    RunEvent("onclick");
    if (OnClick != null) OnClick();
  }
}
