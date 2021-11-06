using UnityEngine;
using System;
using System.Collections.Generic;
using UnityEngine.UI;

public class FlexCarousel : FlexElement {

  // ~*~*~*~ Public variables ~*~*~*~
  public FlexCarouselDots Dots;
  //   Styling
  public float Spacing;
  public float OverflowPadding;
  //   Scroll motion constants
  public float Decay = 0.18f;
  public float SnapSpeed = 0.16f;

  // ~*~*~*~ Private variables ~*~*~*~
  public List<FlexElement> Elements{
    get {
      List<FlexElement> elements = new List<FlexElement>();
      foreach (Transform child in transform) {
        FlexElement element = child.gameObject.GetComponent<FlexElement>();
        if (element != null) {
          elements.Add(element);
        }
      }
      return elements;
    }
  }
  public List<FlexElement> ActiveElements{
    get {
      List<FlexElement> activeElements = new List<FlexElement>();
      foreach (Transform child in transform) {
        FlexElement element = child.gameObject.GetComponent<FlexElement>();
        if (element != null && element.Active) {
          activeElements.Add(element);
        }
      }

      return activeElements;
    }
  }

  private float minHeight = 0;
  //   Motion flags
  private bool isMoving = false;
  //   User motion
  private float xVel;
  private Vector2 lastPos;

  // ~*~*~*~ Public properties ~*~*~*~
  // Next xOffset motion equations
  public float nextOffset{
    get {
      int n = Count;
      // Select the element in the direction of movement
      if (xOffset > 0 && xVel > 0) {
        Selected = Li(Selected, n);
        RunEvent("onselect");
      }else if (xOffset < 0 && xVel < 0) {
        Selected = Ri(Selected, n);
        RunEvent("onselect");
      }

      // No user interaction
      if (!isMoving) {

        // Decay velocity above snap velocity trigger
        if (Mathf.Abs(xVel) > Mathf.Abs(SnapSpeed * xOffset)) {
          xVel *= Decay;
          return xOffset + xVel;

        // Snap to selected
        }else{
          xVel = 0;
          if (Mathf.Abs(xOffset) < 0.1) return 0;
          return xOffset - SnapSpeed * xOffset;
        }

      }else{
        return xOffset + xVel;
      }
    }
  }

  //   Style px dimensions
  public float spacing_px {get {return Spacing * Screen.width / 100;}}
  public float overflowPadding_px {get {return OverflowPadding * Screen.width / 100;}}

  public int Count {get {return ActiveElements.Count;}}

  // Set and get xOffset
  private float _xoffset;
  public float xOffset{
    get {return _xoffset;}
    set {
      // No change
      if (_xoffset == value) return;

      // Max delta x offset snap back to zero
      if (Mathf.Abs(value) > 2 * Width) {
        value = 0;
      }

      _xoffset = value;
    }
  }

  // Set and get Selected element index
  private int _selected = 0;
  public int Selected;

  public GameObject SelectedObject {
    get {
      List<FlexElement> elements = ActiveElements;
      if (elements.Count == 0) return null;
      int i = Ci(Selected, elements.Count);

      return elements[i].gameObject;
    }
  }

  // Positions elements acording to xOffset
  private void PositionElements(){
    List<FlexElement> elements = ActiveElements;
    int n = elements.Count;
    if (n < 1 || minHeight == 0) return;

    int selected = Ci(Selected, n);
    if (selected != _selected) {
      xOffset = elements[selected].Pos.x;
    }
    _selected = selected;

    float x = xOffset;

    FlexElement cur = elements[selected];
    // Set width, height and pos acording to the x offset of selected element
    cur.Height = minHeight;
    float scale = Mathf.Abs(x / cur.Width);
    scale = scale > 1 ? 1 : scale;
    cur.Width -= (2 * spacing_px) * scale;
    cur.Pos = new Vector2(x, 0);

    // Left and right x positions
    float lx = x - cur.Width / 2 - spacing_px;
    float rx = x + cur.Width / 2 + spacing_px;

    // Left and right circular indexs of selected element
    int li = Li(selected, n);
    int ri = Ri(selected, n);

    // For the remaining elements to the left
    // and the right of the selected element
    int count = n - 1;
    while (count > 0) {
      FlexElement left = elements[li];
      FlexElement right = elements[ri];

      if (n != 2 || selected != 0) {

        // Set height, width and pos of the current left element
        // acording to the x offset of the selected element
        left.Height = minHeight;
        scale = Mathf.Abs((lx - left.Width/2) / left.Width);
        scale = scale > 1 ? 1 : scale;
        left.Width -= (2 * spacing_px) * scale;
        if (float.IsNaN(lx - left.Width)) {
          Debug.Log($"lx: {lx}, left width: {left.Width}");
        }else{
          left.Pos = new Vector2(lx - left.Width/2, 0);
          left.gameObject.SetActive(true);
        }

        // move left x position
        lx -= left.Width + spacing_px;

        // no right element
        count --;
        if (count <= 0) break;
      }

      // Set height, width and pos of the current right element
      // acording to the x offset of the selected element
      right.Height = minHeight;
      scale = Mathf.Abs((rx + right.Width/2) / right.Width);
      scale = scale > 1 ? 1 : scale;
      right.Width -= (2 * spacing_px) * scale;
      right.Pos = new Vector2(rx + right.Width/2, 0);
      right.gameObject.SetActive(true);

      rx += right.Width + spacing_px;

      //Move left index left and right index right
      ri = Ri(ri, n);
      li = Li(li, n);

      count --;
    }

    //Update icons
    if (Dots != null) {
      if (n < 3) {
        Dots.Active = false;
      }else{
        if (!Dots.Active) Dots.Active = true;
        Dots.Count = n;
        Dots.Selected = selected;
      }
    }
  }

  // Height set to element with smallest height with respect to its width
  // reposition elements acordingly
  public override float HeightFromWidth(float width) {

    width -= 2 * overflowPadding_px;

    List<FlexElement> elements = ActiveElements;
    int n = elements.Count;
    //Find the element with the smallest height
    if (n == 0) {
      minHeight = 0;

    //Less than three display first only
    }else{
      foreach(FlexElement element in elements) {
        element.Width = width;
        if (minHeight == 0 || element.Height < minHeight){
          minHeight = element.Height;
        }
      }
    }

    return minHeight;
  }

  public void Clear(){
    foreach(FlexElement element in Elements) {
      Destroy(element.gameObject);
    }
  }

  public void AddElement(GameObject element) {
    if (element == null) return;

    FlexElement flex = element.GetComponent<FlexElement>();
    if (flex != null) {
      element.transform.SetParent(transform);
    }
  }
  public void AddElement(FlexElement element) {
    if (element == null) return;
    element.transform.SetParent(transform);
  }

  public bool ContainsPoint(Vector2 point) {
    Vector2 cbox = new Vector2(Width, minHeight) / 2;
    Vector2 pos = new Vector2(transform.position.x, transform.position.y);

    Vector2 diff = pos - point;
    diff.x = Mathf.Abs(diff.x);
    diff.y = Mathf.Abs(diff.y);
    return diff.x < cbox.x && diff.y < cbox.y;
  }

  void LateUpdate(){
    // If not locked get user input
    if (!Locked && Count > 2) {
      // Touch screen
      if(Input.touchCount > 0){
        Touch touch = Input.GetTouch(0);
        Vector2 point = touch.position;

        switch (touch.phase){

          // Record initial touch position.
          case TouchPhase.Began:
          if (ContainsPoint(point)) {
            lastPos = point;
            isMoving = true;
          }
          break;

          // Determine direction by comparing the current touch position with the initial one.
          case TouchPhase.Moved:
          if (isMoving) {
            // Only update if motion is up or down
            Vector2 dif = point - lastPos;
            if (dif.x != 0) {
              if (Mathf.Abs(dif.x) > Mathf.Abs(dif.y)) {
                xVel = dif.x;
                lastPos = point;
              }else{
                isMoving = false;
              }
            }
          }
          break;

          // Repoxrt that a direction has been chosen when the finger is lifted.
          case TouchPhase.Ended:
          if (isMoving) {
            isMoving = false;
          }
          break;
        }

        // Mouse
      }else{
        Vector2 point = Input.mousePosition;
        if (Input.GetMouseButtonDown(0)){
          if (ContainsPoint(point)) {
            lastPos = point;
            isMoving = true;
          }
        }else if (Input.GetMouseButton(0)) {
          if (isMoving) {
            // Only update if motion is up or down
            Vector2 dif = point - lastPos;
            if (dif.x != 0) {
              if (Mathf.Abs(dif.x) > Mathf.Abs(dif.y)) {
                xVel = dif.x;
                lastPos = point;
              }else{
                isMoving = false;
              }
            }
          }
        }else if (Input.GetMouseButtonUp(0)){
          if (isMoving) {
            isMoving = false;
          }
        }
      }
    }

    // Update xOffset
    xOffset = nextOffset;
    PositionElements();
  }

  //Circular index
  public int Ci(int i) {return Ci(i, Count);}
  public static int Ci(int i, int n) {
    if (i == 0) return 0;
    // Rotate negative values
    if (i < 0) {
      int dn = 1 - i / n;
      i += dn * n;
    }
    return  i % n;
  }

  //Left circular index
  public int Li(int i) {return Li(i, Count);}
  public static int Li(int i, int n){
    return (Ci(i, n) + n - 1) % n;
  }

  //Right circular index
  public int Ri(int i) {return Ri(i, Count);}
  public static int Ri(int i, int n) {
    return (Ci(i, n) + 1) % n;
  }
}
// }
