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
  public float ClickMoveLimit = 5;
  public Action OnClick = null;

  public float minY = 0;

  // private properties
  private Vector2 clickStartPos;
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


  /* Update, if the icon is touched and released without moving more than the
     click move limit and both the initial and final touch positions
     exist within the icon's clickbox geometry, call the OnClick Action
  */
  private int i = 0;
  void Update(){
    if (Locked) return;
    bool clickEnd = false;
    Vector2 clickEndPos = Vector2.zero;

    //Touch input
    if(Input.touchCount == 1){
      Touch touch = Input.GetTouch(0);
      switch (touch.phase){
          // Record initial touch position.
          case TouchPhase.Began:
              clickStartPos = touch.position;
              break;

          // Check to see user has not moved more than limit
          case TouchPhase.Ended:
              clickEndPos = touch.position;
              clickEnd = true;
              break;
      }

    //Mouse input
    }else{
      if (Input.GetMouseButtonDown(0)){
        clickStartPos = Input.mousePosition;
      }else if (Input.GetMouseButtonUp(0)){
        clickEndPos = Input.mousePosition;
        clickEnd = true;
      }
    }

    if (clickEnd) {
      if (clickStartPos.y > minY && clickEndPos.y > minY) {
        if (Vector2.Distance(clickEndPos, clickStartPos) < ClickMoveLimit) {
          if (ContainsPoint(clickEndPos) && ContainsPoint(clickStartPos) && i == 0) {
            i = 10;
            Debug.Log($"{gameObject.name}'s clickbox clicked.");
            NativeAid.HapticEvent(HEvent.Click);
            RunEvent("onclick");
            if (OnClick != null) OnClick();
          }
        }
      }
    }
    if (i > 0)i--;
  }
}
