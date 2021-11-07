using UnityEngine;
using System;
using UnityEngine.UI;
using System.Collections.Generic;


public class ClickBoxManager : UIElement{
  public float ClickMoveLimit = 5;
  public int ClickBounceTime = 200;

  private long lastClickTime = 0;
  private Vector2 clickStartPos;

  // ClickBoxes contained within this gameObject
  public List<ClickBox> ClickBoxes{
    get {
      return GetClickBoxesRecursive(gameObject);
    }
  }

  /* GetClickBoxesRecursive recursively searches for
     active and unlocked clickBoxes in accending hierachical order */
  public static List<ClickBox> GetClickBoxesRecursive(GameObject go){
    List<ClickBox> cbs = new List<ClickBox>();

    // Add click box of this object
    ClickBox cb = go.GetComponent<ClickBox>();
    if (cb != null && !cb.Locked) {
      cbs.Add(cb);
    }

    // add clickboxes from children objects recursively
    foreach(Transform child in go.transform) {
      if (child.gameObject.activeSelf) {
        cbs.AddRange(GetClickBoxesRecursive(child.gameObject));
      }
    }

    return cbs;
  }

  /* valid if movement less than limit for click and has not occured
     within the bounce time */
  private bool isValidClick(Vector2 start, Vector2 end){
    bool valid = Vector2.Distance(end, start) < ClickMoveLimit;
    long millis = GetMillis();
    valid &= millis - lastClickTime > ClickBounceTime;
    return valid;
  }

  /* finds first clickBox that Contains both the starting
     and ending click position, then runs it's event. */
  private void runClickEvent(Vector2 start, Vector2 end){
    List<ClickBox> cbs = ClickBoxes;
    ClickBox clickBox = null;

    // Search list of clickBoxes in decending hierachical order
    for (int i = cbs.Count - 1; i >= 0; i--) {
      ClickBox cb = cbs[i];
      // Debug.Log($"{cb.gameObject.name}'s clickbox clicked.");
      if (cb.ContainsPoint(start) && cb.ContainsPoint(end)) {
        clickBox = cb;
        break;
      }
    }

    if (clickBox != null) {
      clickBox.Click(start, end);
      lastClickTime = GetMillis();
    }
  }

  /* Update, if touch and released without moving more than the
     click move limit run click event
  */
  void Update(){
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

    if (clickEnd && isValidClick(clickStartPos, clickEndPos)) {
      runClickEvent(clickStartPos, clickEndPos);
    }
  }
}
