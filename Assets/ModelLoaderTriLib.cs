using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using UnityEngine.Networking;
using TriLibCore;
using TriLibCore.General;
using TriLibCore.Interfaces;

public class ModelLoaderTriLib : MonoBehaviour
{
    private GameObject model;

    public GameObject loadPanel;
    public Text progressText;
    // Start is called before the first frame update
    void Start()
    {
         // Creates an AssetLoaderOptions instance.
         // AssetLoaderOptions is a class used to configure many aspects of the loading process.
         // We won't change the default settings this time, so we can use the instance as it is.
         var assetLoaderOptions = AssetLoader.CreateDefaultLoaderOptions();

         // Creates the web-request.
         // The web-request contains information on how to download the model.
         // Let's download a model from the TriLib website.
         var webRequest = AssetDownloader.CreateWebRequest("https://firebasestorage.googleapis.com/v0/b/mcmhousear.appspot.com/o/contents%2FSofas%2FElio%2FElio%20Sofa%203%20Seater%20Chaise%2FElio.glb?alt=media&token=9b3c19f8-6ac8-463f-83a9-9490ca5bd5e5");

         // Begins the model downloading.
         Debug.Log("INIT");
         AssetDownloader.LoadModelFromUri(webRequest, OnLoad, OnMaterialsLoad, OnProgress, OnError, null, assetLoaderOptions, null, "glb");
         Debug.Log("start_download");
   }

   // This event is called when the model loading progress changes.
   // You can use this event to update a loading progress-bar, for instance.
   // The "progress" value comes as a normalized float (goes from 0 to 1).
   // Platforms like UWP and WebGL don't call this method at this moment, since they don't use threads.
   private void OnProgress(AssetLoaderContext assetLoaderContext, float progress)
   {
     if (progressText == null) {
       Debug.Log($"{progress * 100}%");
       return;
     }
     progressText.text = $"{Mathf.Round(progress*100)}%";
   }

   // This event is called when there is any critical error loading your model.
   // You can use this to show a message to the user.
   private void OnError(IContextualizedError contextualizedError)
   {
     Debug.Log(contextualizedError);
   }


   // This event is called when all model GameObjects and Meshes have been loaded.
   // There may still Materials and Textures processing at this stage.
   private void OnLoad(AssetLoaderContext assetLoaderContext)
   {
       // The root loaded GameObject is assigned to the "assetLoaderContext.RootGameObject" field.
       // If you want to make sure the GameObject will be visible only when all Materials and Textures have been loaded, you can disable it at this step.
       GameObject root = assetLoaderContext.RootGameObject;

       model = root;//Instantiate(GetModelFromRoot(root));
       model.SetActive(false);

       model.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
       model.transform.SetParent(transform);

       Debug.Log("loaded");


   }

   public GameObject getModel(){
     return model;
   }

   // This event is called after OnLoad when all Materials and Textures have been loaded.
   // This event is also called after a critical loading error, so you can clean up any resource you want to.
   private void OnMaterialsLoad(AssetLoaderContext assetLoaderContext)
   {
     Debug.Log(loadPanel == null);
     if (loadPanel == null){ return; }
     // var canvas = loadPanel.GetComponent<Panel>();
     loadPanel.SetActive(false);

   }
}
