using UnityEngine;
using System;
using UnityEngine.UI;

[Serializable]
public class ScrollConstants{
  public float Decay = 0.94f;
  public float BounceLength = 400;
  public float BounceReturnSpeed = 25;
  public float SnapDelta = 1;
}

public class VelocityScroll : UIElement{

/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ Public Variabls ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */
  // Scroll elements
  public FlexElement HeaderElement;
  public FlexElement BodyElement;

  // Scroll properties
  public float Decay = 0.9f;            // Decay, 0-100%
  public float BounceLength = 300;      // BounceLength, px
  public float BounceReturnSpeed = 25;  // BounceReturnSpeed, px/frame
  public float SnapDelta = 1;           // SnapDelta, px


/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ Public Read Only Variabls ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */

  public float ContentHeight {get; private set;} = -1;
  public float ViewHeight {get; private set;}
  public float ViewWidth {get; private set;}


/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ Private Variabls ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */

  // Scroll motion limits
  private float minChange = 1;// px
  private float minVel = 0.5f;// px/frame

  // Scroll motion variables
  private float sVel = 0;
  private float sPos = 0;
  private float _sPos = 0;

  // User event variables
  private bool isScrolling = false;
  private Vector2 startPos;
  private float lastY;

  private int lastHierarchyCount;

/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ Public Methods ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */


  //Abs, wrapper
  public float Abs(float x) {
    return Mathf.Abs(x);
  }

  /* IsScrollable, returns true if content larger than viewport.

     @return true if content height greater than viewport height
  */
  public bool IsScrollable(){
    return ContentHeight > ViewHeight;
  }

  public void SetScrollPosition(float scrollPos) {
    if (scrollPos > sMax() + BounceLength) scrollPos = sMax();
    if (scrollPos < sMin() - BounceLength) scrollPos = sMin();
    sPos = scrollPos;
    sVel = 0;
    UpdateElements();
  }

  public void SetScrollPosition(string location) {
    switch (location) {
      case "top":
        sPos = sMax();
        break;

      case "bottom":
        sPos = sMin();
        break;

      case "middle":
        sPos = (sMin() + sMax()) / 2;
        break;
    }
    sVel = 0;
    UpdateElements();
  }

  public void SetScrollVel(float vel) {
    sVel = vel;
    UpdateElements();
  }

  public void SetScrollConstants(ScrollConstants c) {
    Decay = c.Decay;
    BounceLength = c.BounceLength;
    BounceReturnSpeed = c.BounceReturnSpeed;
    SnapDelta = c.SnapDelta;
  }

/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */
/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ Private Calculated Variables ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */
/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */

  /* bounceDelta, returns the difference from the scroll position
     and the boundary scroll position. If the scroll position is
     within boundary range 0 is returned.

     @return  sPos - closestBoundaryPos
              0
  */
  private float bounceDelta(){
    if (isMax()) return sPos - sMax();
    if (isMin()) return sPos - sMin();
    return 0f;
  }

  /* sMax, returns the maximum scroll position.

     @return 0, scroll max is always 0
  */
  private float sMax(){
    return 0;
  }

  /* sMin, returns the minimum scroll position.

     @return minimum scroll pos
  */
  private float sMin(){
    return ViewHeight - ContentHeight;
  }

  /* isMax, returns true if the scroll postion has exceeded
     the maximum scroll postion.

     @return true if scroll position above max scroll position
  */
  private bool isMax(){
    return sPos > sMax();
  }

  /* isMin, returns true if the scroll position is bellow
     the minimum scroll postion.

     @return true if scroll position bello min scroll position
  */
  private bool isMin(){
    return sPos < sMin();
  }

/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */
/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ Private Update Methods ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */
/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */

  /* UpdateSize, updates the viewport dimensions if they have changed.
  */
  private void UpdateSize(){
    RectTransform rect = GetComponent<RectTransform>();
    if (rect == null) return;

    Vector3[] corners = new Vector3[4];
    rect.GetLocalCorners(corners);

    //Get width and height from corner coordinates
    float width = corners[2].x - corners[0].x;
    float height = corners[2].y - corners[0].y;

    ViewHeight = height;
    ViewWidth = width;
  }

  /* UpdateElements, repositions elements with respect to the scroll position.
  */
  public void UpdateElements() {
    float width = ViewWidth;
    float height = 0;

    // If HeaderElement is given
    if (HeaderElement != null){
      //Header anchors and pivot to center
      HeaderElement.DefaultAnchors();
      HeaderElement.DefaultPivot();

      //Resize and position header
      HeaderElement.Width = width;
      //Header will not bounce at top
      if (sPos > 0){
        HeaderElement.Pos = new Vector2(0, -1*(HeaderElement.Height/2));
      }else{
        HeaderElement.Pos = new Vector2(0, -1*(sPos + HeaderElement.Height/2));
      }

      //Set header anchor to middle top and restore pivot
      HeaderElement.SetAnchors(new Vector2(0.5f, 1), new Vector2(0.5f, 1));
      HeaderElement.ResetPivot();

      height += HeaderElement.Height;
    }

    //If BodyElement is given
    if (BodyElement != null) {
      //Header anchors and pivot to center
      BodyElement.DefaultAnchors();
      BodyElement.DefaultPivot();

      //Resize and position header
      BodyElement.Width = width;
      BodyElement.Pos = new Vector2(0, -1*(sPos + height + BodyElement.Height/2));

      //Set body anchor to middle top and restore pivot
      BodyElement.SetAnchors(new Vector2(0.5f, 1), new Vector2(0.5f, 1));
      BodyElement.ResetPivot();

      height += BodyElement.Height;
    }

    //Update content height
    ContentHeight = height > ViewHeight ? height : ViewHeight;
  }

  /* UpdateScroll, calculates the next scroll position. If next sPos
     has changed more than the minChange the elements are updated.
  */
  private void UpdateScroll() {
    float delta = bounceDelta();
    float bVel = BounceReturnSpeed;

    /* Scroll position is not out of bounds */
    if (delta == 0) {

      //Decay velocity once user stops scrolling
      if (!isScrolling) sVel *= Decay;

    /* Scroll position is out of bounds */
    }else {

      /*Calculate delta as a percentage of the bounce length
        delta = 0   then  dp = 100%
        delta = bl  then  dp = 0%
      */
      float dp = (1 - Abs(delta) / BounceLength);
      dp = dp > 0 ? dp : 0;

      /* Scrolling up */
      if (sVel > 0) {

        /* Scrolling past scroll maximum */
        if (isMax()) {
          //Decay velocity proportianly to delta percent
          sVel *= dp;

        /* Returning to scroll minimum */
        } else if (!isScrolling) {
          //Snap to scroll minimum if delta is less than SnapDelta
          if (Abs(delta) < SnapDelta) {
            sVel = 0;
            sPos = sMin();

          //Velocity set proportional to delta percent
          }else{
            sVel = (1 - dp)*bVel;
          }
        }

      /* Scrolling down */
      } else if (sVel < 0) {

        /* Scrolling past scroll minimum */
        if (isMin()){
          //Decay velocity proportianly to delta percent
          sVel *= dp;

        /* Returning to scroll maximum */
        }else if (!isScrolling){
          //Snap to scroll maximum if delta is less than SnapDelta
          if (Abs(delta) < SnapDelta) {
            sVel = 0;
            sPos = sMax();

          //Velocity set proportional to delta percent
          }else{
            sVel = (dp - 1)*bVel;
          }
        }

      /* Scrolling stopped */
      }else if (!isScrolling){
        //Snap to scroll min or max if delta is less than SnapDelta
        if (Abs(delta) < SnapDelta) {
          sVel = 0;
          sPos = isMax() ? sMax() : sMin();

        //Velocity set proportional to delta percent
        }else{
          sVel = (isMax() ? (dp - 1) : (1 - dp) )*bVel;
        }
      }
    }

    //If velocity less than minimum set it to 0
    if (Abs(sVel) < minVel) {
      sVel = 0;
    }

    //Update position
    sPos += sVel;

    //Update elements if the change in position is greater than minChange
    if (Abs(sPos - _sPos) > minChange) {
      _sPos = sPos;
      UpdateElements();
    }
  }

/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */
/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ Main Update Method ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */
/* ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ ☆ */

  /* Update, updates size, listens to user interactions and updates scroll
  */
  void Update(){

    UpdateSize();
    UpdateElements();

    if (!Locked) {
      if(Input.touchCount > 0){
        Touch touch = Input.GetTouch(0);
        switch (touch.phase){
          // Record initial touch position.
          case TouchPhase.Began:
          if (Mathf.Abs(sVel) > 0) {
            sVel = 0;
          }
          startPos = touch.position;
          isScrolling = true;
          break;

          // Determine direction by comparing the current touch position with the initial one.
          case TouchPhase.Moved:
          if (isScrolling) {
            Vector2 point = touch.position;
            Vector2 dif = startPos - point;
            if (dif.y != 0) {
              if (Mathf.Abs(dif.y) > Mathf.Abs(dif.x)) {
                sVel = dif.y;
                startPos = point;
              }else{
                isScrolling = false;
              }
            }
          }
          break;

          // Repoxrt that a direction has been chosen when the finger is lifted.
          case TouchPhase.Ended:
          isScrolling = false;
          break;
        }
      }else{
        if (Input.GetMouseButtonDown(0)){
          isScrolling = true;
          startPos = Input.mousePosition;
          if (Mathf.Abs(sVel) > 0) {
            sVel = 0;
          }
        }else if (Input.GetMouseButton(0)) {
          if (isScrolling) {
            Vector2 point = Input.mousePosition;
            Vector2 dif = startPos - point;
            if (dif.y != 0){
              if (Mathf.Abs(dif.y) > Mathf.Abs(dif.x)) {
                sVel = dif.y;
                startPos = point;
              }else{
                isScrolling = false;
              }
            }
          }
        }else if (Input.GetMouseButtonUp(0)){
          isScrolling = false;
        }
      }
    }

    UpdateScroll();
    UpdateElements();
  }
}
