using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.Networking;
using System.Threading;
using System.Threading.Tasks;
using Siccity.GLTFUtility;
using UnityEngine.Profiling;

// using static UnityEngine.Networking.UnityWebRequest;
public class AssetManager : MonoBehaviour {
  private Dictionary<ModelTexture, GameObject> library = new Dictionary<ModelTexture, GameObject>();
  private Dictionary<Variant, int> model_sizes = new Dictionary<Variant, int>();
  private List<ModelTexture> queue = new List<ModelTexture>();
  public Action<float> OnProgress = null;
  public int MemoryLimitMb = 1000;
  public int ModelMemoryScale = 10;

  public bool loading {get; private set;} = false;

  public bool Contains(ModelTexture mtex) {return library.ContainsKey(mtex);}
  public int mem {get {return (int) Profiler.GetTotalAllocatedMemoryLong()/1000000;}}

  public int Count {get {return queue.Count;}}
  // async get AR Model fetches a model textures glb ar model object
  public async Task<ARModel> GetModel(ModelTexture mtex) {
    if (!Contains(mtex))
      if (!(await LoadModel(mtex)))
        return null;

    return newModel(mtex);
  }

  public void RemoveModel(ModelTexture mtex) {
    if (Contains(mtex)) {
      GameObject model = library[mtex];
      library.Remove(mtex);
      queue.Remove(mtex);
      Garbage(model);
    }
  }


  public static void Garbage(GameObject obj){
    foreach (Transform child in obj.transform)
      Garbage(child.gameObject);

    MeshRenderer meshr = obj.GetComponent<MeshRenderer>();
    if (meshr != null) {
      foreach (Material mat in meshr.materials) {
        foreach (string id in mat.GetTexturePropertyNames()) {
          Destroy(mat.GetTexture(id));
        }
      }
    }

    Mesh mesh = obj.GetComponent<Mesh>();
    if (mesh != null) mesh.Clear();

    Destroy(obj);
  }

  public bool exceedsLimit(ModelTexture mtex){
    Variant var = mtex.GetParent<Variant>();
    if (model_sizes.ContainsKey(var) && library.Count > 0) {
      return (mem + model_sizes[var] > MemoryLimitMb);
    }
    return false;
  }
  public void addModelSize(ModelTexture mtex, int size, bool overwrite = false) {
    Variant var = mtex.GetParent<Variant>();
    Debug.Log($"{var.Name} size: {size}Mb");
    if (model_sizes.ContainsKey(var)) {
      if (overwrite)
        model_sizes[var] = size;
    }else {
      model_sizes.Add(var, size);
    }
  }

  public bool memoryLimitFlag {get; private set;} = false;
  private async Task<bool> LoadModel(ModelTexture mtex) {
    if (mtex == null || !mtex.HasGLB || loading) return false;
    memoryLimitFlag = false;

    //Check that loading the model won't exceed the memory limit model
    //size estimated based on other model sizes of the same variant
    if (exceedsLimit(mtex)) {
      memoryLimitFlag = true;
      loading = false;
      return false;
    }

    //start loading model from web
    Debug.Log($"mem before: {mem}Mbs");
    loading = true;
    byte[] data = await getData(mtex.GLB);
    if (data == null) {
      loading = false;
      return false;
    }

    //update model size based on file size times the model memory scale
    addModelSize(mtex, ModelMemoryScale * data.Length / 1000000);

    //Check again to see if loading model will exceed ram
    if (exceedsLimit(mtex)) {
      memoryLimitFlag = true;
      loading = false;
      return false;
    }

    //generate glb model
    int start = mem;
    GameObject model = await makeModel(data);
    if (buffer != null) {
      buffer.Dispose();
      buffer = null;
    }
    //successful load
    if (model != null) {
      model.SetActive(false);
      model.transform.SetParent(transform);

      //Model is loaded successfully, add to queue and library
      //and update model size
      queue.Add(mtex);
      library.Add(mtex, model);
      addModelSize(mtex, mem - start, true);
    }


    Debug.Log($"mem after: {mem}Mbs");

    loading = false;
    return true;
  }


  //make a new model
  private ARModel newModel(ModelTexture mtex){
    if (Contains(mtex)) {
      GameObject obj = Instantiate(library[mtex]);
      ARModel model = obj.AddComponent<ARModel>();
      model.ModelTexture = mtex;

      Model parent = mtex.GetParent<Model>();
      model.baseScale = model.baseScale * parent.Scale;
      model.AddColliders();
      return model;
    }
    return null;
  }

  //udates progress and calls OnProgress callback
  public float progress {get; private set;}
  private void updateProgress(float p){
    progress = p;
    if (OnProgress != null) OnProgress(p);
  }

  //get data as byte array from url
  DownloadHandlerBuffer buffer = null;
  private async Task<byte[]> getData(string url) {

    //create web request
    UnityWebRequest www = new UnityWebRequest(url);
    buffer = new DownloadHandlerBuffer();
    www.downloadHandler = buffer;
    UnityWebRequestAsyncOperation wwwSync = www.SendWebRequest();

    //Wait till loaded
    while (!wwwSync.isDone) {
      updateProgress(wwwSync.progress * 0.7f);
      await Task.Yield();
    }

    if (www.isNetworkError || www.isHttpError) {
        Debug.Log(www.error);
    } else {

      // Or retrieve results as binary data
      byte[] results = buffer.data;
      Debug.Log($"downloaded {results.Length/1000000}Mbs");
      return results;

    }

    return null;
  }

  //make model from data byte array
  private async Task<GameObject> makeModel(byte[] data) {
    GameObject model = null;
    bool done = false;
    Importer.ImportGLBAsync(data, new ImportSettings(), (obj, clips) => {
      model = obj;
      done = true;
    }, (f) => {
      updateProgress(0.7f + 0.3f * f);
    });
    while (!done) await Task.Yield();
    return model;
  }
}
