using UnityEngine;
using System;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Threading.Tasks;
using System.Threading;

public class UIElement : MonoBehaviour{
  public bool Locked = false;
  public bool Active {
    get {
      if (gameObject != null) return gameObject.activeSelf;
      else return false;
    }
    set {
      if (gameObject != null) gameObject.SetActive(value);
    }
  }

  private Dictionary<string, List<Action>> events = new Dictionary<string, List<Action>>();

  private Vector2 lastAnchorMin;
  private Vector2 lastAnchorMax;
  private Vector2 lastPivot;


  public static bool Instanceof(Type typea, Type typeb){
    return typea.IsSubclassOf(typeb) || typea == typeb;
  }
  public static bool Instanceof(object obj, Type type){
    return Instanceof(obj.GetType(), type);
  }
  public bool IsInstanceof(Type type) {
    return Instanceof(this, type);
  }

  public void LockAll(GameObject obj, bool locked) {
    LockAll<UIElement>(obj, locked);
  }

  public void LockAll<T>(GameObject obj, bool locked) {
    UIElement[] elements = obj.GetComponentsInChildren<UIElement>(true);
    foreach (UIElement element in elements) {
      if (Instanceof(element, typeof(T))) {
        element.Locked = locked;
      }
    }
  }
  public void LockAll(bool locked) {
    LockAll<UIElement>(gameObject, locked);
  }

  public void LockAll<T>(bool locked){
    LockAll<T>(gameObject, locked);
  }

  public void RunEvent(string name) {
    if (events.ContainsKey(name)){
      foreach (Action action in events[name]) {
        action();
      }
    }
  }


  public void AddEventListener(string name, Action action) {
    if (action == null) return;

    if (events.ContainsKey(name)) {
      if (!events[name].Contains(action)){
        events[name].Add(action);
      }
    }else{
      List<Action> actions = new List<Action>();
      actions.Add(action);
      events.Add(name, actions);
    }
  }


  public void RemoveAction(Action action) {
    foreach (List<Action> actions in events.Values) {
      if (actions.Contains(action)) {
        actions.Remove(action);
      }
    }
  }


  /* SetAnchors, sets the min and max anchors of the RectTransform.
     Stores last anchors, for use with ResetAnchors.

    @param min, min anchor vector
    @param max, max anchor vector
  */
  public void SetAnchors(Vector2 min, Vector2 max) {
    RectTransform rect = GetComponent<RectTransform>();
    if (rect == null) return;
    lastAnchorMax = rect.anchorMax;
    lastAnchorMin = rect.anchorMin;
    rect.anchorMax = max;
    rect.anchorMin = min;
  }
  public void SetAnchors(Vector2 same) {SetAnchors(same, same);}
  public void SetAnchors(float x, float y) {SetAnchors(new Vector2(x, y));}


  /* ResetAnchors, restores anchors to the min and max before SetAnchors
     was called.
  */
  public void ResetAnchors(){
    SetAnchors(lastAnchorMin, lastAnchorMax);
  }

  /* DefaultAnchors, sets both anchors to center.
  */
  public void DefaultAnchors(){
    SetAnchors(new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f));
  }

  /* SetPivot, sets pivot of the RectTransform. Stores last pivot,
     for use with ResetPivot.

     @param pivot, pivot vector
  */
  public void SetPivot(Vector2 pivot) {
    RectTransform rect = GetComponent<RectTransform>();
    if (rect == null) return;
    lastPivot = rect.pivot;
    rect.pivot = pivot;
  }
  public void SetPivot(float x, float y) {SetPivot(new Vector2(x, y));}


  /* ResetPivot, restores pivot to the pivot before SetPivot
  was called.
  */
  public void ResetPivot(){
    SetPivot(lastPivot);
  }

  /* DefaultPivot, sets pivot to center.
  */
  public void DefaultPivot(){
    SetPivot(new Vector2(0.5f, 0.5f));
  }

  public async Task WaitActive(){
    if (Active) return;
    while (!Active) await Task.Yield();
  }

  public async Task WaitFor(UIElement element) {
    while (element != null && element.gameObject != null && !element.Active)
      await Task.Yield();
  }

  public static long GetMillis(){
    return DateTime.Now.Ticks / TimeSpan.TicksPerMillisecond;
  }
}
