using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Firebase.Database;


public class Variant : Folder{

  public string Price {get; private set; }
  public bool isFeatured{
    get{
      Model model = GetParent<Model>();
      if (model == null) return false;
      return model.Featured;
    }
  }

  public Variant(DataSnapshot variantData){
    if (variantData == null) return;
    if (!variantData.HasChildren) return;

    Name = (string) variantData.Key;

    foreach ( DataSnapshot child in variantData.Children ) {
      if (child.Key == "info"){
        ParseInfo(child);
      }else if (child.HasChildren){
        ModelTexture modelTexture = new ModelTexture(child);
        Add(modelTexture);
      }
    }
  }

  private void ParseInfo(DataSnapshot info){
    foreach ( DataSnapshot child in info.Children ) {
      if ( !child.HasChildren && child.Key == "price") {
        Price = (string) child.Value;
      }
    }
  }

  //DefaultThumbnail is the texture closest to white FFFFFF
  public override Thumbnail GetDefaultThumbnail(){
    ModelTexture res = GetDefaultModelTexture();

    if (res == null) return null;

    return res.Thumbnail;
  }

  public ModelTexture GetDefaultModelTexture(){
    List<ModelTexture> textures = Children<ModelTexture>();
    ModelTexture res = null;

    foreach (ModelTexture texture in textures){
      if (res == null || (texture.Color > res.Color)) {
        res = texture;
      }
    }

    return res;
  }


  public string ToString(){
    string t = "t";
    if (!Thumbnail.isValid) {
      t = "x";
    }
    string str = string.Format("\n{0} {1}:", Name, t);
    str += string.Format("\n\tPrice: {0}", Price);
    List<ModelTexture> textures = Children<ModelTexture>();
    foreach(ModelTexture texture in textures) {
      str += texture.ToString().Replace("\n", "\n\t");
    }
    return str;
  }
}
