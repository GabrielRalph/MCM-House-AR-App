using System;
using System.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;
using UnityEngine.Networking;
using UnityEngine;


public class Thumbnail{

  public Texture2D Texture {get; private set;} = null;

  public bool isValid {get; private set;} = false;

  /* URL set and get */
  private string _url;
  public string URL{
    /* return private url string */
    get{return _url;}

    /* if url is valid set url, update isValid status*/
    set{
      if (isURL(value)) {
        _url = value;
        isValid = true;
      }else{
        isValid = false;
      }
    }
  }


  public string RootPath {get{return Application.persistentDataPath + "/";}}
  /* local name generated from url */
  public string LocalName{
    get {
      //Get last directory of url
      string[] temp = URL.Split('/');
      if (temp.Length < 2) return "";
      string full = temp[temp.Length - 1];

      //Get file name
      temp = full.Split('?');
      if (temp.Length != 2) return "";
      string name = temp[0];
      string token = temp[1];

      //Get token
      string[] tokenDel = {"token="};
      temp = token.Split(tokenDel, System.StringSplitOptions.RemoveEmptyEntries);
      if (temp.Length != 2) return "";
      token = temp[1];

      //Replace thumbnail with token, change jpg to png
      name = name.Replace("thumbnail", "token=" + token);
      name = name.Replace("jpg", "png").Replace("jpeg", "png");

      return name;
    }
  }
  /* local path to save thumbnail */
  public string LocalPath {get{return RootPath + LocalName;}}



  /* Thumbnail constructors */
  public Thumbnail(){}
  public Thumbnail(string url) {
    URL = url;
  }

  /* GetTexture, if the thumbnail is valid its Texture2D
     will be retrieved and returned as per the following modes:
      1: If a texture exists it is returned.
    ` 2: If no texture exists the texture is Opened from local storage.
     `3: If no local texture exists the texture is downloaded from the url
         and saved locally.
     `4: If a thumbnail exists locally but does not have the same url token
         as the current url token then the thumbnail is deleted and the
         texture is `retrieved as per mode 3.
   */
  public async Task<Texture2D> GetTexture(){
    LoadTexture();
    return Texture;
  }

  private bool loading = false;
  private System.Random r = new System.Random();
  public async Task LoadTexture(){
    //Invalid thumbnail return
    if (!isValid) return;

    //if texture is already being loaded wait till its loaded
    while (loading) await Task.Yield();
    loading = true;

    //texture already loaded
    if (Texture != null){
      loading = false;
      return;
    }

    if (isLocal()) {
      Texture = Open(LocalPath);
      // await Task.Delay(r.Next(500, 3000));
    }else{
      Texture = await Load(URL);
      SaveTexture();
    }

    loading = false;
  }



  /* SaveTexture, saves the current thumbnail texture into local storage
     as a png, if a texture exists.
  */
  public async void SaveTexture(){
    if (Texture == null) return;
    byte[] bytes = Texture.EncodeToPNG();
    File.WriteAllBytes(LocalPath, bytes);
  }

  /* isLocal, returns true if there exists a thumbnail image
     in local storage with the same url token. If a thumbnail
     exists with a different token, then that thumbnail image
     is deleted and false is returned.

      @return true, if there exists a concurrent thumbnail image
                    in local storage
  */
  public bool isLocal(){
    //Get the local name of the thumbnail
    string name = LocalName;
    if (name == "") return false;

    //Remove token from local name
    string[] temp = {"token="};
    temp = name.Split(temp, System.StringSplitOptions.RemoveEmptyEntries);
    if (temp.Length != 2) return false;
    string prefix = temp[0];
    prefix += "token=*";

    //Search root for files with same name (excluding token)
    try{
      string[] fileNames = Directory.GetFiles(RootPath, prefix);
      if (fileNames.Length == 0) return false;
      string localName = fileNames[0];

      if (localName == RootPath + name) {
        return true;
      }else{
        Debug.Log("deleting old version");
        File.Delete(localName);
        return false;
      }
    }catch(Exception e) {
      Debug.Log(e);
      return false;
    }
  }

  /* isURL, returns true if the url is a valid MCM firebase storage url

      @param url, url to validate

      @return true, if valid firebasestorage url
  */
  static public bool isURL(string url){
    Regex regex = new Regex(@"^https://firebasestorage.googleapis.com/v0/b/mcm-ar.appspot.com");
    bool res = regex.IsMatch(url);
    return res;
  }

  /* Open, opens the local image texture

      @param filePath, the path of the image to open

      @return texture, the Texture2D of the image (null if none)
  */
  static public Texture2D Open(string filePath) {
    Texture2D texture = null;
    byte[] fileData;

    if (File.Exists(filePath))     {
       fileData = File.ReadAllBytes(filePath);
       texture = new Texture2D(2, 2);
       texture.LoadImage(fileData);
    }

    return texture;
  }

  /* Load, loads an image Texture2D from a url address.

      @param url, the url to download the image from

      @return texture, the downloaded Texture2D (null if none)
  */
  static public async Task<Texture2D> Load(string url){

    //Send web request to download image
    UnityWebRequest www = UnityWebRequestTexture.GetTexture(url);
    var op = www.SendWebRequest();

    //Wait until downloaded
    while( op.isDone == false ) {
      await Task.Yield();
    }

    //Check if an error occured
    if(www.isNetworkError || www.isHttpError ) {
        return null;

    //Return downloaded texture
    }else {
        Texture2D tex = ((DownloadHandlerTexture)www.downloadHandler).texture;
        return tex;
    }
  }
}
