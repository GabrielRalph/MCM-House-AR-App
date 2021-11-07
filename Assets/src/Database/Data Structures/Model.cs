using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Firebase.Database;
using System.Text.RegularExpressions;


public class Model : Folder{
  public string Description {get; private set; }
  public string Link {get; private set; }
  public bool Featured {get; private set; }
  public float Scale {get; private set; } = 1;
  public bool Hidden {get; private set; } = false;

  public override string Meta{
    get {
      return Name + " " + Description;
    }
  }

  /* Model, constructs a model folder given a firebase DataSnapshot.

      @param modelData, a firebase data snapshot
  */
  public Model(DataSnapshot modelData){
    if (modelData == null) return;
    if (!modelData.HasChildren) return;

    Name = (string) modelData.Key;

    foreach ( DataSnapshot child in modelData.Children ) {
      if (child.Key == "info"){
        ParseInfo(child);
      }else if(child.Key == "thumbnail" && !child.HasChildren){
        Thumbnail = new Thumbnail((string) child.Value);
      }else if (child.HasChildren){
        Variant variant = new Variant(child);
        Add(variant);
      }
    }
  }

  private void ParseInfo(DataSnapshot info){
    foreach ( DataSnapshot child in info.Children ) {
      if ( !child.HasChildren ){
        if (child.Key == "link") {
          Link = (string) child.Value;
        }else if(child.Key == "description"){
          Description = (string) child.Value;
        }else if(child.Key == "featured"){
          Featured = (bool) child.Value;
        }else if (child.Key == "scale") {
          try{
            Scale = float.Parse((string)child.Value);
            if (Scale == 0) {
              Scale = 1;
            }
          }catch{
            Scale = 1;
          }
        }else if (child.Key == "hidden") {
          Hidden = (bool) child.Value;
        }
      }
    }
  }

  public override bool isValid{
    get {
      return foldersCount > 0 && !Hidden;
    }
  }

  /* Used for debuging */
  public override string ToString(){
    string t = "x";
    if (!Thumbnail.isValid) {
      t = "d";
    }
    string str = string.Format("\n{0} {1}:", Name, t);
    str += string.Format("\n\tDescription: {0}", Description);
    str += string.Format("\n\tLink: {0}", Link);
    str += string.Format("\n\tFeatured: {0}", Featured);
    List<Variant> variants = Children<Variant>();
    foreach(Variant variant in variants) {
      str += variant.ToString().Replace("\n", "\n\t");
    }
    return str;
  }
}
