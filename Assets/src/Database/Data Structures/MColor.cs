using System;
using System.Text.RegularExpressions;
using UnityEngine;


public class MColor{
  public string HexColor {get; private set ;}
  public string Name {get ; private set ; }
  public bool isValid {get ; private set ; }

  /* MColor, constructs a Model Color given the texture
     name in the format "colorName(HEXCOL)"

     e.g. "BabyBlue(b3bcc9)"
  */
  public MColor(string name){
    Regex regex = new Regex(@"\((([a-g]|[A-G]|\d){6})\)");
    Match match = regex.Match(name);
    GroupCollection groups = match.Groups;

    if (groups.Count == 3){
      HexColor = $"{groups[1]}";
      Name = name.Replace($"({HexColor})", "");
      isValid = true;
    }else{
      isValid = false;
    }
  }

  /* Get the Model Color as a unity Color object

      @return color, Unity Color object
  */
  public Color GetColor(){
    Color color = new Color();
    ColorUtility.TryParseHtmlString("#" + HexColor, out color);
    return color;
  }
  public Color Color{get {return GetColor();}}

  public override int GetHashCode(){
    return Tuple.Create(Name, HexColor).GetHashCode();
  }

  /* Compare, compares to given colors. If colors are not equal
     the color closest to white is larger color.

      @param a, the color to be compared to
      @param b. the color to compare

      @return 0: a == b
      @return 1: a > b
      @return -1: a < b
  */
  public static int Compare(MColor a, MColor b) {
    if (a is null && b is null) return 0;

    //A non null color is greater than a null color
    if (b is null) return 1;

    //A null color is not greater than non null color
    if (a is null) return -1;

    if (a.Name == b.Name && a.HexColor == b.HexColor) return 0;

    Color ca = a.GetColor();
    Color cb = b.GetColor();

    float total = 0;
    total += ca.r - cb.r;
    total += ca.g - cb.g;
    total += ca.b - cb.b;

    return total > 0 ? 1 : (total == 0 ? 0 : -1);
  }

  //bool operator overrides
  public static bool operator >(MColor a, MColor b) {
    return Compare(a, b) > 0;
  }
  public static bool operator >=(MColor a, MColor b) {
    return Compare(a, b) != -1;
  }
  public static bool operator <(MColor a, MColor b) {
    return Compare(a, b) < 0;
  }
  public static bool operator <=(MColor a, MColor b) {
    return Compare(a, b) <= 0;
  }
  public static bool operator ==(MColor a, MColor b) {
    return Compare(a, b) == 0;
  }
  public static bool operator !=(MColor a, MColor b) {
    return Compare(a, b) != 0;
  }
}
