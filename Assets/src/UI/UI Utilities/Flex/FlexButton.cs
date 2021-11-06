using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;


public class FlexButton : FlexElement{
  public Text Text;
  public Font Font;
  public string Title;
  public float FontSizeVW;

  public RectTransform ButtonBackground;
  public Vector2 ButtonPaddingVW;

  public int fontSize_px {get { return (int)(FontSizeVW * Screen.width / 100);}}
  public Vector2 buttonPadding_px {get {return ButtonPaddingVW * Screen.width / 100;}}

  private ClickBox clickBox = null;

  public Vector2 TextBBox{
    get {
      TextGenerationSettings settings = new TextGenerationSettings();
      settings.textAnchor = TextAnchor.MiddleCenter;
      settings.color = Color.red;
      settings.generationExtents = new Vector2(500.0F, 200.0F);
      settings.pivot = Vector2.zero;
      settings.richText = true;
      settings.font = Font;
      settings.fontSize = fontSize_px;
      settings.verticalOverflow = VerticalWrapMode.Overflow;
      settings.horizontalOverflow = HorizontalWrapMode.Wrap;
      settings.lineSpacing = 1;
      settings.generateOutOfBounds = true;
      settings.resizeTextForBestFit = false;
      settings.scaleFactor = 1f;
      TextGenerator generator = new TextGenerator();
      return new Vector2(generator.GetPreferredWidth(Title, settings),
      generator.GetPreferredHeight(Title, settings));
    }
  }

  public Vector2 SetBoxSize(){
    Vector2 size = new Vector2(-1, -1);
    if (Text == null) return size;

    //Get text bounding box and text rect transform
    RectTransform rect = Text.gameObject.GetComponent<RectTransform>();
    if (rect == null) return size;
    size = TextBBox;

    //Set text title, font size a rect size
    Text.text = Title;
    Text.fontSize = fontSize_px;
    Text.font = Font;
    rect.sizeDelta = size;

    if (ButtonBackground == null) return size;
    if (clickBox == null) {
      clickBox = ButtonBackground.gameObject.GetComponent<ClickBox>();
      if (clickBox != null) {
        clickBox.AddEventListener("onclick", () => {RunEvent("onclick");});
      }
    }
    size += 2 * buttonPadding_px;
    ButtonBackground.sizeDelta = size;
    return size;
  }

  public override float HeightFromWidth(float width) {
    Vector2 size = SetBoxSize();
    return size.y;
  }

  public override float WidthFromHeight(float height) {
    return -1;
  }
}
