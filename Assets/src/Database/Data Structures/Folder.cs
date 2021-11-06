using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine.Networking;
using System.Threading.Tasks;

public class Folder{

  public string Name {get; set; } = "";
  public bool Visited {get; set; } = false;
  public Folder Parent {get; private set; } = null;

  private Thumbnail _thumbnail = new Thumbnail();
  public Thumbnail Thumbnail {
    get {
      return _thumbnail;
    }

    set {

      if (value == null) return;
      if (value.isValid) {
        _thumbnail = value;
      }
    }
  }

  private Dictionary<string, Folder> folders = new Dictionary<string, Folder>();
  public int foldersCount {get {return folders.Count;}}

  /* Add, adds a child folder into this folder

      @param folder, the child folder to add

      @return true if successfuly added
  */
  public bool Add(Folder folder){
    if (folder.isValid){
      folder.Parent = this;
      folders.Add(folder.Name, folder);
      return true;
    }
    return false;
  }

  /* Children, returns a list of children of a given type

      @return children, all children of given type
  */
  public List<T> Children<T>(){
    List<T> children = new List<T>();
    foreach ( KeyValuePair<string, Folder> child in folders) {
      if (child.Value.GetType() == typeof(T)){
        children.Add((T)(object) child.Value);
      }
    }
    return children;
  }

  public List<Folder> Children(){
    List<Folder> children = new List<Folder>();
    foreach ( KeyValuePair<string, Folder> child in folders) {
      children.Add(child.Value);
    }
    return children;
  }

  /* DescendantsBFS, returns a list of all descendats of a given type.
     Ordered accourding to a Bredth First Shearch.

      @return descendants a list of all descendants of type T
  */
  public List<T> DescendantsBFS<T>(){
    List<T> descendants = new List<T>();
    List<Folder> folders = new List<Folder>();
    Queue<Folder> Q = new Queue<Folder>();

    Q.Enqueue(this);
    Visited = true;

    while (Q.Count > 0) {
      Folder folder = Q.Dequeue();
      foreach (Folder subFolder in folder.Children()){
        if ( !subFolder.Visited ) {
          Q.Enqueue(subFolder);
          folders.Add(subFolder);
          if (subFolder.GetType() == typeof(T)) {
            descendants.Add((T)(object) subFolder);
          }
          subFolder.Visited = true;
        }
      }
    }

    foreach(Folder folder in folders) {
      folder.Visited = false;
    }
    Visited = false;


    return descendants;
  }
  public List<T> BFS<T>(bool inclusive){
    List<T> bfs = DescendantsBFS<T>();
    if (inclusive && typeof(T) == this.GetType()) bfs.Insert(0, (T)(object) this);
    return bfs;
  }
  public List<T> BFS<T>(){
    return BFS<T>(false);
  }


  /* GetFirstChild, returns the first child of a given type

      @return child, the first child of type T
  */
  public T GetFirstChild<T>(){
    foreach(T child in Children<T>()){
      return child;
    }

    return default(T);
  }

  /* isValid, returns true if the folder is not empty.
  */
  public virtual bool isValid{
    get{
      return folders.Count > 0;
    }
  }

  /* GetParent, returns the parent of this folder as a given type.
     If no parent exists or is not of the given type, null is returned.

      @return Parent of given type
  */
  public T GetParent<T>(){
    if (Parent == null) return default(T);

    if (Parent.GetType() == typeof(T)) {
      return (T) (object) Parent;
    }else {
      return Parent.GetParent<T>();
    }
  }

  /* DefaultThumbnail, if the thumbnail of this folder is invalid,
     the thumbnail is set to its first childs DefaultThumbnail
  */
  public void SetDefaultThumbnail(){
    if (Thumbnail == null) {
      Thumbnail = GetDefaultThumbnail();
    }
  }

  public virtual Thumbnail GetDefaultThumbnail(){
    if (Thumbnail == null) {
      Folder child = GetFirstChild<Folder>();
      return child.GetDefaultThumbnail();
    } else {
      return Thumbnail;
    }
  }

  /* GetColors, returns a set of all the texture color's of every
     modelTexture contained within this collection.

      @return colors a HashSet of all colors
  */
  public HashSet<MColor> GetColors(){
    HashSet<MColor> colors = new HashSet<MColor>();
    foreach(ModelTexture texture in DescendantsBFS<ModelTexture>()){
      colors.Add(texture.Color);
    }
    return colors;
  }


  public static async Task LoadThumbnails(List<Folder> folders) {
    if (folders == null || folders.Count == 0) return;

    foreach(Folder folder in folders) {
      await folder.Thumbnail.GetTexture();
    }
  }
}