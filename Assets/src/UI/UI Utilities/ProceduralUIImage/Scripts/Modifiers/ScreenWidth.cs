using UnityEngine;
using UnityEngine.UI.ProceduralImage;
using System.Collections;

[ ModifierID ( "Screen Width" )]
public class ScreenWidth : ProceduralImageModifier {
  public float vw = 10;
  // #region implemented abstract members of ProceduralImageModifier
  public override Vector4 CalculateRadius ( Rect imageRect){
  //Do whatever math you want
  //Return some Vector4 with the border radiuses.
    float l = Screen.width*vw/100;
    return new Vector4(l,l,l,l);
  }
// #endregion
}
