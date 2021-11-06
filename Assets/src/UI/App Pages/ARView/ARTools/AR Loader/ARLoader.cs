using System;
using UnityEngine;
using UnityEngine.UI;

public enum ARLoaderMode{
  Select,
  Loading,
  LoadingPS,
  PlaneSelected,
  Loaded,
  Error,
  MemoryLimit,
  MemoryLimitAgain,
  ScanLight,
}

[Serializable]
public class ARLoaderModeContents {
  public string Message;
  public string Note;
  public float MessageFontSizeVW;
  public float NoteFontSizeVW;
  public Sprite Icon;
  public bool BackButton;

  public void Set(ARLoader loader) {
    loader.TextTop.text = Message.Replace("~", "\n");
    loader.TextTop.FontSizeVW = MessageFontSizeVW;

    loader.TextBottom.text = Note.Replace("~", "\n");
    loader.TextBottom.FontSizeVW = NoteFontSizeVW;

    loader.Icon.sprite = Icon;

    ClickBox cb = loader.GetComponent<ClickBox>();
    if (cb != null) {
      if (BackButton) {
        cb.OnClick = () => {
          loader.ARScene.App.MoveToCollections();
        };
      }else {
        cb.OnClick = null;
      }
    }
  }
}

public class ARLoader : FlexElement{
  public FlexText TextTop;
  public FlexText TextBottom;
  public FlexSVG Icon;

  public CanvasGroup Canvas;
  public float TransistionSpeed;

  public ARLoaderModeContents SelectContents;
  public ARLoaderModeContents LoadingContents;
  public ARLoaderModeContents LoadingContentsPS;
  public ARLoaderModeContents LoadedContents;
  public ARLoaderModeContents ErrorContents;
  public ARLoaderModeContents PlaneSelected;
  public ARLoaderModeContents MemoryLimit;
  public ARLoaderModeContents MemoryLimitAgain;
  public ARLoaderModeContents ScanLight;

  public int Progress;
  public ARLoaderMode Mode;

  private ARLoaderMode lastMode;
  private float theta = -1;

  public ARScene ARScene;


  void TransistionUpdate(){
    if (ARScene != null &&
        ARScene.Mode == ARSceneMode.PlaneSelected &&
        Mode == ARLoaderMode.Loading) {
        Mode = ARLoaderMode.LoadingPS;
    }

    if (theta < 0) {
      if (lastMode != Mode){
        theta = 0;
      }
    }else{
      float a = 1 - Mathf.Sin(theta);
      theta += TransistionSpeed;

      if (theta > Mathf.PI/2 && lastMode != Mode) {
        lastMode = Mode;
      }

      if (theta > Mathf.PI) {
        a = 1;
        theta = -1;
      }

      Canvas.alpha = a;
    }

    switch(lastMode) {
      case ARLoaderMode.LoadingPS:
        LoadingContentsPS.Set(this);
        TextBottom.text = Progress + "%";
        break;

      case ARLoaderMode.PlaneSelected:
        PlaneSelected.Set(this);
        break;

      case ARLoaderMode.Loading:
        LoadingContents.Set(this);
        TextBottom.text = Progress + "%";
        break;
      case ARLoaderMode.Loaded:
        LoadedContents.Set(this);
        break;
      case ARLoaderMode.Select:
        SelectContents.Set(this);
        break;
      case ARLoaderMode.Error:
        ErrorContents.Set(this);
        break;

      case ARLoaderMode.MemoryLimit:
        MemoryLimit.Set(this);
        break;

      case ARLoaderMode.MemoryLimitAgain:
        MemoryLimitAgain.Set(this);
        break;

      case ARLoaderMode.ScanLight:
        ScanLight.Set(this);
        break;
    }
  }

  public override float HeightFromWidth(float width){
    TransistionUpdate();
    TextTop.DefaultPivot();
    TextBottom.DefaultPivot();
    Icon.DefaultPivot();
    TextTop.DefaultAnchors();
    TextBottom.DefaultAnchors();
    Icon.DefaultAnchors();

    TextTop.Width = width;
    float y = 0;
    TextTop.Pos = new Vector2(0, y - TextTop.Height/2);
    y = -TextTop.Height;

    TextBottom.Width = width;
    float iconHeight = width - TextTop.Height - TextBottom.Height;

    Icon.Height = iconHeight;
    Icon.Pos = new Vector2(0, y - iconHeight/2);
    y -= iconHeight;

    TextBottom.Pos = new Vector2(0, y - TextBottom.Height/2);

    TextTop.SetAnchors(new Vector2(0.5f, 1));
    TextBottom.SetAnchors(new Vector2(0.5f, 1));
    Icon.SetAnchors(new Vector2(0.5f, 1));


    return width;
  }
}
