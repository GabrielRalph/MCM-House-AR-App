using UnityEngine;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine.UI;

/* Pages is a compoenent that manages the position and active
   status of its children gameObjects.
*/
public class Pages : UIElement{

  public float TransitionDuration = 0.7f;

  /* cPage, current gameObject currently displayed */
  public GameObject cPage {get; private set;}
  /* nPage, the next gameObject to be displayed */
  public GameObject nPage {get; private set;}

  /* Splash, splash screen */
  public Splash Splash;

  private Stack<GameObject> History = new Stack<GameObject>();

  //Transistion variables
  private bool init = true;
  public bool moving {get; private set;}= false;
  private bool dir = false;
  private float dt;
  private float t = -1;

  /* Cx, current displayed gameObject's x coordinate */
  public float Cx{
    get{
      if (cPage == null) {
        return 0;
      }else {
        return cPage.transform.localPosition.x;
      }
    }
    set{
      if (cPage == null) return;
      Vector3 cp = cPage.transform.localPosition;
      cp.x = value;
      cPage.transform.localPosition = cp;
    }
  }

  /* Nx, next gameObject to be displayeds x coordinate */
  public float Nx{
    get{
      if (nPage == null) {
        return 0;
      }else {
        return nPage.transform.localPosition.x;
      }
    }
    set{
      if (nPage == null) return;
      Vector3 np = nPage.transform.localPosition;
      np.x = value;
      nPage.transform.localPosition = np;
    }
  }

  /* Contains, checks if a given gameObject is a child */
  public bool Contains(GameObject page){
    return page != null && page.transform.parent == transform;
  }

  /* HideAll, hides all gameObject pages except Splash*/
  public void HideAll(){
    init = false;
    foreach (Transform child in transform) {
      if (child.gameObject != Splash.gameObject) {
        child.gameObject.SetActive(false);
        child.localPosition = new Vector3(Screen.width*1.5f, 0, 0);
      }
    }
  }

  /* Hide, hides the gameObject with sibling index i */
  public void Hide(int i) {
    Hide(transform.GetChild(i).gameObject);
  }
  /* Hide, hides given gameObject */
  public void Hide(GameObject page) {
    if (init) HideAll();

    if (Contains(page)) {
      page.SetActive(false);
    }
  }

  /* Show, shows and sets the current page to the gameObject
     with sibling index i */
  public void Show(int i) {
    Show(transform.GetChild(i).gameObject);
  }
  public void Show(MonoBehaviour obj) {
    Show(obj.gameObject);
  }
  /* Show, shows and sets the current page to the given gameObject*/
  public void Show(GameObject page) {
    if (init) HideAll();

    if (Contains(page)) {
      if (cPage != null) {
        Hide(cPage);
        Cx = Screen.width*1.5f; //move away
      }
      RunEvent("beforeshow");
      page.SetActive(true);
      cPage = page;
      Cx = 0;
    }
  }

  /* X(t) given a time t returns an x coordinate
     where 0 <= t <= TransitionDuration
     and   0 <= X(t) <= Screen.width

     note: wavey babey
  */
  public float X(float t) {
    return Screen.width * (1 - Mathf.Cos(Mathf.PI * t / TransitionDuration)) / 2;
  }

  /* wait till window has stopped moving */
  public async Task AwaitMove(GameObject page){
    while(moving){
      Task.Yield();
    }
  }

  public void ResetScrollPos(MonoBehaviour obj) {
    ResetScrollPos(obj.gameObject);
  }
  /* ResetScroll, resets scroll of a given gameObject, if one exists */
  public void ResetScrollPos(GameObject obj) {
    Component[] comps = obj.GetComponentsInChildren(typeof(VelocityScroll), false);
    foreach (VelocityScroll vscroll in comps) {
      vscroll.SetScrollPosition(0);
    }
  }

  /* MoveTo, move with transistion to gameObject with given sibling index */
  public void MoveTo(int i) {
    MoveTo(transform.GetChild(i).gameObject);
  }
  public void MoveTo(MonoBehaviour element) {
    MoveTo(element.gameObject);
  }
  /* MoveTo, move with transistion to given gameObject */
  public void MoveTo(GameObject page){
    if (!Contains(page) || cPage == page || nPage == page) return;
    if (t == 0 || moving) return;
    moving = true;
    t = 0;

    dir = true;
    if (cPage != null) {
      int ni = page.transform.GetSiblingIndex();
      int ci = cPage.transform.GetSiblingIndex();
      dir = ni < ci;
      LockAll(cPage, true);
    }
    LockAll(page, true);

    dt = Time.smoothDeltaTime;
    nPage = page;

    RunEvent("beforeshow");

    moving = true;
  }

  /* MoveBack, move to the last current page */
  public void MoveBack(){
    MoveTo(History.Pop());
  }

  /* Manages transistion's */
  public void Update(){
    // Debug.Log("x");
    if (moving) {
      if (t > TransitionDuration){
        t = TransitionDuration;
        moving = false;
      }

      float x = X(t);
      Cx = dir ? x : -x;
      Nx = dir ? x - Screen.width : Screen.width - x;

      if (t == 0){
        if (nPage != null) nPage.SetActive(true);
      }

      if (moving) {
        t += dt;
      }else{
        if(cPage != null) {
          cPage.SetActive(false);
          Cx = Screen.width * 1.5f;
          History.Push(cPage);
        }
        cPage = nPage;
        nPage = null;
        LockAll(cPage, false);
      }
    }
  }
}
