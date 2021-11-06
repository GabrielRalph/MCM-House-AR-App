using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using static Unity.VectorGraphics.VectorUtils;


public enum CenterIcon {
  Bin,
  Screenshot,
  Hidden,
}

public class ARCenterIcon : FlexElement{
  public FlexSVG Icon;

  public float imageScale = 1;
  public float WaterMarkOpacity = 0.5f;
  public Sprite WaterMark;
  public Flash Flash;

  public Camera camera;

  public Sprite Bin;
  public Sprite Screenshot;

  public ClickBox IconClickBox;

  public CenterIcon Mode = CenterIcon.Screenshot;

  public float IconSizeVW = 12;
  public float IconSize_px {get {return IconSizeVW * Screen.width / 100;}}
  public float MoveSpeed = 0.15f;
  public Vector2 IconPosition {get {
    return new Vector2(Icon.transform.position.x, Icon.transform.position.y);
    }
  }

  void Awake(){
    if (IconClickBox != null) {
      IconClickBox.AddEventListener("onclick", () => {
        if (Mode == CenterIcon.Screenshot) {
          Flash.hold = true;
          Flash.Start();
          NativeAid.SavePhoto(capture);
          NativeAid.HapticEvent(HEvent.Success);
          Flash.hold = false;
        }
      });
    }
  }

  public override float HeightFromWidth(float width) {
    DefaultPivot();
    DefaultAnchors();

    float height = IconSize_px;

    //Set logo to width of header
    Icon.Height = height;
    Icon.Pos = new Vector2(0,0);

    Pos = new Vector2(0,0);

    SetAnchors(0.5f, 0);
    SetPivot(0.5f, 0);

    //Total height, the height of the logo
    return height;
  }

  //Set width screen width
  public CenterIcon last_mode = CenterIcon.Hidden;
  private float theta = -1;
  void Update(){
    Width = Screen.width;

    if (theta < 0) {
      if (last_mode != Mode) {
        theta = 0;
      }
    } else {
      if (theta < Mathf.PI) {
        theta += MoveSpeed;
        if (theta >= Mathf.PI) {
          last_mode = Mode;
        }
      } else if (theta < Mathf.PI*2) {
        theta += MoveSpeed;
        if (theta >= Mathf.PI*2) {
          theta = -1;
        }
      }
    }

    if (last_mode == CenterIcon.Hidden || Mode == CenterIcon.Hidden) {
      Vector3 pos = transform.position;
      pos.y -= (pos.y + Height) * (1 - Mathf.Cos(theta == -1 ? 0 : theta))/2;
      transform.position = pos;
    } else {
      Color c = Icon.SVG.color;
      c.a = (Mathf.Cos(theta == -1 ? 0 : theta) + 1)/2;
      Icon.SVG.color = c;
    }

    if (last_mode == CenterIcon.Hidden) {
      Icon.gameObject.SetActive(false);
    }else{
      Icon.gameObject.SetActive(true);
      if (last_mode == CenterIcon.Bin) {
        Icon.sprite = Bin;
      } else if (last_mode == CenterIcon.Screenshot){
        Icon.sprite = Screenshot;
      }
    }


  }

  public Texture2D MakeWaterMark(int w) {
    if (w < 5) return null;

    Vector3 size = WaterMark.bounds.max - WaterMark.bounds.min;
    int h = (int)(size.y * ((float) w) / size.x);
    if (h < 5) return null;

    Material mat = new Material(Shader.Find("Unlit/Vector"));
    if (mat == null) return null;

    return RenderSpriteToTexture2D(WaterMark, w, h, mat);
  }

  public void AddWaterMark(Texture2D tex) {
    if (tex == null) return;

    //Resize texture to 40% of screenshot width (preserve aspect ratio)
    int wmw = (4 * tex.width) / 10;

    //Create water mark texture
    Texture2D watermark = MakeWaterMark(wmw);

    if (watermark == null) {
      Debug.Log("null water mark created");
      return;
    }


    //Start x and y pixels for water mark on screenshot
    int wstartx = (tex.width - wmw)/2;
    //start at top of photo    15% width padding
    int wstarty = tex.height - 15 * tex.width / 100 - watermark.height;

    //Add water mark to screenshot
    for (int x = 0; x < wmw; x++) {
      for (int y = 0; y < watermark.height; y++){
        Color wmp = watermark.GetPixel(x, y);

        //Water mark pixel more than 50% opaque add 50% of it to screenshot
        if (wmp.a > 0.5f) {
          Color scp = tex.GetPixel(x + wstartx, y + wstarty);
          scp = scp*(1-WaterMarkOpacity) + wmp*WaterMarkOpacity;
          scp.a = 1;
          tex.SetPixel(x + wstartx, y + wstarty, scp);
        }
      }
    }
    tex.Apply();
  }

  public Texture2D capture{
    get {
      int w = (int)((float) Screen.width*imageScale);
      int h = (int)((float) Screen.height*imageScale);

      Rect rect = new Rect(0, 0, w, h);
      RenderTexture renderTexture = new RenderTexture(w, h, 24);
      Texture2D screenshot = new Texture2D(w, h, TextureFormat.RGBA32, true);

      if (camera == null) return screenshot;

      camera.targetTexture = renderTexture;
      camera.Render();

      RenderTexture.active = renderTexture;
      screenshot.ReadPixels(rect, 0, 0);

      camera.targetTexture = null;
      RenderTexture.active = null;

      Destroy(renderTexture);
      renderTexture = null;

      AddWaterMark(screenshot);

      return screenshot;
    }
  }

}
