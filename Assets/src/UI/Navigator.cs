using UnityEngine;
using System;
using UnityEngine.UI;
using System.Collections.Generic;

[Serializable]
public class NavIcon {
  public GameObject page;
  public FlexSVG icon;
  public FlexText text;
  public GameObject hline;

  public float iconX {
    get {return icon == null ? 0 : icon.transform.position.x;}
    set {
      if (icon != null) {
        Vector3 pos = icon.transform.position;
        pos.x = value;
        icon.transform.position = pos;
      }
    }
  }
  public float iconY {
    get {return icon == null ? 0 : icon.transform.localPosition.y;}
    set {
      if (icon != null) {
        Vector3 pos = icon.transform.localPosition;
        pos.y = value;
        icon.transform.localPosition = pos;
      }
    }
  }
  public float textX {
    get {return text == null ? 0 : text.transform.position.x;}
    set {
      if (text != null) {
        Vector3 pos = text.transform.position;
        pos.x = value;
        text.transform.position = pos;
      }
    }
  }
  public float textY {
    get {return text == null ? 0 : text.transform.localPosition.y;}
    set {
      if (text != null) {
        Vector3 pos = text.transform.localPosition;
        pos.y = value;
        text.transform.localPosition = pos;
      }
    }
  }
  public float hlineX {
    get {return hline == null ? 0 : hline.transform.position.x;}
    set {
      if (hline != null) {
        Vector3 pos = hline.transform.position;
        pos.x = value;
        hline.transform.position = pos;
      }
    }
  }
}

public class Navigator : FlexElement {
  public App App;
  public List<ClickBox> Home = new List<ClickBox>();
  public List<NavIcon> Icons = new List<NavIcon>();
  public ClickBox MainClickBox;

  public float iconOffset = 0.2f;
  public float textOffset = 0.15f;
  public float iconScale = 0.2f;
  public float HeightVW = 18;
  public int n {get {return Icons.Count;}}
  public bool hide = false;

  void Awake(){
    // add home button click boxes
    foreach (ClickBox home in Home) {
      home.AddEventListener("onclick", () => {
        App.MoveToCollections(true);
      });
    }

    // hide if in arview otherwise show
    App.AddEventListener("beforeshow", () => {
      if (App.nPage == App.ARView.gameObject) {
        hide = true;
      }else{
        if (App.nPage == Icons[0].page) {
          selectPage(Icons[0]);
        }
        hide = false;
      }
    });

    if (MainClickBox == null) {
      MainClickBox = GetComponent<ClickBox>();
    }
    if (MainClickBox != null) {
      MainClickBox.OnClick = onClicked;
    }

    selectPage(Icons[0]);
  }

  public float height_px {get {return HeightVW * Screen.width / 100;}}
  private float yRatio = 0;
  public float yPos {get {
    if (yRatio > 1) yRatio = 1;
    if (yRatio < 0) yRatio = 0;
    return - height_px * yRatio;
  }}

  public override float HeightFromWidth(float width) {
    return height_px;
  }

  private void updateElements(){
    Width = Screen.width;
    DefaultPivot();
    DefaultAnchors();
    Pos = new Vector2(0,yPos);
    SetPivot(0.5f, 0);
    SetAnchors(0.5f, 0);

    float inc = Screen.width / (2*n);
    float x = 0;
    foreach (NavIcon icon in Icons) {
      x += inc;

      if (icon.icon != null) {
        icon.iconX = x;
        icon.iconY = (0.5f + iconOffset) * height_px;
        icon.icon.Height = height_px * iconScale;
      }

      icon.textX = x;
      icon.textY = (0.5f - textOffset) * height_px;
      icon.text.Width = inc*2;

      x += inc;
      icon.hlineX = x;
    }
  }

  private void updateYPos(){
    if (hide && yRatio < 1) yRatio += 0.1f;
    if (!hide && yRatio > 0) yRatio -= 0.1f;
  }

  private bool inDiv(Vector2 t, int d) {
    return  t.y < height_px + yPos &&
            t.x >= d*Screen.width/n &&
            t.x < (d + 1)*Screen.width/n;
  }

  private NavIcon lastIcon;
  private void selectPage(NavIcon icon){
    if (lastIcon != null) {
      lastIcon.text.Text.fontStyle = FontStyle.Normal;
    }
    icon.text.Text.fontStyle = FontStyle.Bold;
    lastIcon = icon;
  }

  private void onClicked(){
    Vector2 start = MainClickBox.StartPos;
    Vector2 end = MainClickBox.EndPos;

    for (int i = 0; i < n; i++) {
      if (inDiv(start, i) && inDiv(end, i))  {
        App.MoveTo(Icons[i].page);
        VelocityScroll scroll = Icons[i].page.GetComponent<VelocityScroll>();
        if (scroll != null){
          scroll.SetScrollPosition(0);
        }
        selectPage(Icons[i]);
        break;
      }
    }
  }

  void Update(){
    updateYPos();
    updateElements();
  }
}
