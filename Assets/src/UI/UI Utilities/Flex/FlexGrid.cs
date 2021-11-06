using UnityEngine;
using System;
using System.Collections.Generic;
using UnityEngine.UI;

public class FlexGrid : FlexElement{
  /* GridSpacing given in viewport width elements
     where 1vw = Screen.width / 100
  */
  public Vector2 GridSpacing;
  public int Columns = 1;

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

  public int Count{
    get {return Elements.Count;}
  }

  /* Clear, removes all elements from grid.
  */
  public void Clear(){
    List<FlexElement> elements = Elements;
    foreach(FlexElement element in elements) {
      Destroy(element.gameObject);
    }
  }

  /* SetElements, clears grid and adds all elements in the given list.

    @param elements, a list of gameObject's
  */
  public void SetElements(List<GameObject> elements){
    Clear();
    foreach (GameObject element in elements) {
      AddElement(element);
    }
  }

  /* AddElement, adds an element to the grid

    @param element, the gameObject to add (must have a FlexElement component)
  */
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

  /* GetList, returns a list of a given type of components from the
     current elements in the grid.

    @return a list of objects of a given type
  */
  public List<T> GetList<T>(){
    List<T> list = new List<T>();
    foreach (FlexElement flex in Elements) {

      T item = flex.gameObject.GetComponent<T>();
      if (item != null){
        list.Add(item);
      }
    }
    return list;
  }

  /* UpdateHeightFromWidth, given a width postions all elements in the grid
     and returns the height of the grid.

     @param width, a given width to constrain the grid

     @return height, the resulting height of the grid
  */
  public override float HeightFromWidth(float width){
    if (width <= 0 || Columns <= 0 && Columns > 20) return 0;
    List<FlexElement> elements = ActiveElements;
    int n = elements.Count;

    //Center grid anchor and pivots whilst positioning elements
    DefaultAnchors();
    DefaultPivot();

    //Convert spacing from vw to pixels
    Vector2 space = Screen.width * GridSpacing / 100;

    float fullHeight = 0;
    int cols = Columns;
    int i = 0;

    while (i < n){

      //Fill row of elements
      int colCount = 0;
      float x = - width/2;
      float rowHeight = 0;
      while (colCount < cols && i < n){
        FlexElement flex = elements[i];
        flex.gameObject.SetActive(true);
        //Center anchors and pivot before positioning
        flex.DefaultAnchors();
        flex.DefaultPivot();

        //Calculate width for grid element and set it
        flex.Width = (width - (cols - 1) * space.x) / cols;

        //If element is the heigher than the row update the row height
        if (flex.Height > rowHeight) rowHeight = flex.Height;

        //Set position of grid element
        float y = -1 * (fullHeight + flex.Height / 2);
        flex.Pos = new Vector2(x + flex.Width/2, y);

        //Set anchor to top middle of grid and reset pivot
        flex.SetAnchors(new Vector2(0.5f, 1), new Vector2(0.5f, 1));
        flex.ResetPivot();


        x += flex.Width + space.x;
        i++;
        colCount++;
      }

      fullHeight += (i == n ? 0 : space.y)  + rowHeight;
    }

    //Restore anchors and pivot of grid
    ResetAnchors();
    ResetPivot();
    return fullHeight;
  }

  /* Ignored, Grid can only be set using width
  */
  public override float WidthFromHeight(float height){
    return -1;
  }
}
