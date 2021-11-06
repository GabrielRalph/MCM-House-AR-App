using UnityEngine;
using Firebase.Database;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;
using System.Threading.Tasks;

public class ModelTexture : Folder{

  private string glbURL;
  public MColor Color {get; private set; }=null;
  public bool HasGLB {get; private set; }=false;

  //Set ar model texture, get returns an inactive instantiated clone
  public ARModel ARModel;
  public GameObject Root;
  public bool HasARModel {get {return ARModel != null;}}

  public void AssignARModel(GameObject obj){
    ARModel model = obj.AddComponent<ARModel>();
    model.ModelTexture = this;
    ARModel = model;
  }

  public ModelTexture(DataSnapshot textureData){
    if (textureData == null) return;
    if (!textureData.HasChildren) return;

    Name = textureData.Key;
    Color = new MColor(textureData.Key);

    if (!Color.isValid) return;

    foreach ( DataSnapshot child in textureData.Children ) {
      if (!child.HasChildren){
        if (child.Key == "glb"){
          SetGLB((string) child.Value);
        }else if (child.Key == "thumbnail") {
          Thumbnail = new Thumbnail((string) child.Value);
        }
      }
    }
  }

  public string GLB{
    get {return glbURL;}
    private set {
      SetGLB(value);
    }
  }
  private void SetGLB(string url){
    if (Thumbnail.isURL(url)) {
      glbURL = url;
      HasGLB = true;
    }else{
      HasGLB = false;
    }
  }

  public string GetGLB(){
    return glbURL;
  }

  public string GetColorName(){
    return Color.Name;
  }

  public string GetColorHex(){
    return Color.HexColor;
  }

  public Color GetColor(){
    return Color.GetColor();
  }

  public override bool isValid{
    get{
      return HasGLB && Thumbnail.isValid && Color.isValid;
    }
  }

  public string ToString(){
    string t = "t";
    string g = "g";
    if (!Thumbnail.isValid) {
      t = "x";
    }
    if (!HasGLB) {
      g = "x";
    }
    return string.Format("\n{0} {1} {2}", Name, t, g);
  }
}
