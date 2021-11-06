using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Firebase.Database;


public class Collection : Folder{
  /* Collection, constructs a collection given a firebase data snapshot

      @param collectionData DataSnapshot from firebase
  */
  public Collection(DataSnapshot collectionData){
    if (collectionData == null) return;
    if (!collectionData.HasChildren) return;

    Name = (string) collectionData.Key;

    foreach ( DataSnapshot child in collectionData.Children ) {
      if(child.Key == "thumbnail" && !child.HasChildren){
        Thumbnail = new Thumbnail((string) child.Value);
      }else if (child.HasChildren){
        Model model = new Model(child);
        if (!Add(model)) {
          Collection collection = new Collection(child);
          Add(collection);
        }
      }
    }
  }


  /* GetFeatured returns a list of model Variants whos parent models
     are featured i.e. model.Featured == True

      @return list of all featured variants.
  */
  public List<T> GetFeatured<T>(){
      if (typeof(T) == typeof(Variant)) {
        return (List<T>) (object)GetFeaturedVariants();
      }else if (typeof(T) == typeof(Model)) {
        return (List<T>) (object)GetFeaturedModels();
      }else if (typeof(T) == typeof(Collection)) {
        return (List<T>) (object)GetFeaturedCollecions();
      }
      return new List<T>();
  }
  public List<Variant> GetFeaturedVariants(){
    List<Variant> featured = new List<Variant>();
    List<Variant> variants = DescendantsBFS<Variant>();
    foreach(Variant variant in variants) {
      if (variant.isFeatured) {
        featured.Add(variant);
      }
    }
    return featured;
  }
  public List<Model> GetFeaturedModels(){
    List<Model> featured = new List<Model>();
    List<Model> models = DescendantsBFS<Model>();
    foreach(Model model in models) {
      if (model.Featured) {
        featured.Add(model);
      }
    }
    return featured;
  }
  public List<Collection> GetFeaturedCollecions(){
    List<Collection> featured = new List<Collection>();
    List<Model> models = GetFeaturedModels();
    foreach(Model model in models) {
      Collection parent = model.GetParent<Collection>();
      if (!featured.Contains(parent)) {
        featured.Add(parent);
      }
    }
    return featured;
  }



  /* ToString, used for debuging.
  */
  public string ToString(){
    string t = "x";
    if (!Thumbnail.isValid) {
      t = "d";
    }
    string str = string.Format("\n{0} {1}:", Name, t);
    List<Model> models = Children<Model>();
    foreach(Model model in models) {
      str += model.ToString().Replace("\n", "\n\t");
    }

    List<Collection> collections = Children<Collection>();
    foreach(Collection collection in collections) {
      str += collection.ToString().Replace("\n", "\n\t");
    }
    return str;
  }
}
