using UnityEngine;
using System;
using UnityEngine.UI;

public class FlexText : FlexElement{
  public Text Text;

  /* Font size in width percent units (wv)
     where 1wv = width / 100
  */
  public float FontSizeVW;
  public int fontSize_px {get { return (int)(FontSizeVW * Screen.width / 100);}}


  public Vector2 TextBBox(Vector2 restrain){
    if (Text == null) return new Vector2(-1, -1);

    TextGenerationSettings settings = new TextGenerationSettings();
    settings.textAnchor = Text.alignment;
    settings.color = Text.color;
    settings.generationExtents = restrain;
    settings.pivot = Vector2.zero;
    settings.richText = Text.supportRichText;
    settings.font = Text.font;
    settings.fontSize = fontSize_px;
    settings.verticalOverflow = VerticalWrapMode.Overflow;
    settings.horizontalOverflow = HorizontalWrapMode.Wrap;
    settings.lineSpacing = Text.lineSpacing;
    settings.generateOutOfBounds = true;
    settings.resizeTextForBestFit = false;
    settings.scaleFactor = 1f;

    TextGenerator generator = new TextGenerator();
    return new Vector2(generator.GetPreferredWidth(Text.text, settings),
    generator.GetPreferredHeight(Text.text, settings));
  }

  /* UpdateHeightFromWidth, given a width returns the height
     calculated from the RelativeFontSize. Text font uses best
     fit to scale to height of element.

     @param width, desired width of text

     @return height, RelativeFontSize * width / 100
  */
  public override float HeightFromWidth(float width) {
    if (Text == null){
      Text = GetComponent<Text>();
      if (Text == null) return -1;
    }

    Vector2 size = TextBBox(new Vector2(width, 1000));


    //Calculate height from relative font size
    float height = size.y;
    Text.fontSize = fontSize_px;

    return height;
  }

  /* Ignored, FlexText can only be set using width
  */
  public override float WidthFromHeight(float height) {
    return -1;
  }

  /* SetText, sets text content.

    @param text, text to set
  */
  public string text{set {SetText(value);} get{return Text.text;}}
  public void SetText(string text) {
    //Get image component if none exists
    if (Text == null){
      Text = GetComponent<Text>();
      if (Text == null) return;
    }

    Text.text = text;
    Width = Width;
  }
}
