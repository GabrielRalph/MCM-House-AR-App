// using System;
// using System.IO;
// using System.Collections;
// using UnityEngine;
// using UnityEngine.Networking;
// // using Siccity.GLTFUtility;
// using System.Threading.Tasks;
// using System.Collections.Generic;
//
// public class ModelLoader : MonoBehaviour
// {
//     // GameObject wrapper;
//     GameObject model;
//     string filePath;
//     Vector3 lastPos;
//     Boolean mouseDown;
//     Vector3 rotation;
//
//     private void Start()
//     {
//         filePath = $"{Application.persistentDataPath}/Files/";
//         DownloadFile("https://firebasestorage.googleapis.com/v0/b/mcmhousear.appspot.com/o/contents%2FDining%20Tables%2FGlobal%2FGlobal%20circular%20dining%20table%201200%2FGlobal.glb?alt=media&token=a91ccea2-1d50-48e7-9952-e26df399da7e");
//     }
//
//     public void DownloadFile(string url)
//     {
//         string path = GetFilePath();
//         if (File.Exists(path))
//         {
//             Debug.Log("Found file locally, loading...");
//             LoadModel(path);
//             return;
//         }
//
//         StartCoroutine(GetFileRequest(url, (UnityWebRequest req) =>
//         {
//             if (req.isNetworkError || req.isHttpError)
//             {
//                 // Log any errors that may happen
//                 Debug.Log($"{req.error} : {req.downloadHandler.text}");
//             } else
//             {
//                 // Save the model into a new wrapper
//                 LoadModel(path);
//             }
//         }));
//     }
//
//     string GetFilePath()
//     {
//         string filename = "test3.glb";
//
//         return $"{filePath}{filename}";
//     }
//
//     // void LoadModel(string path){
//     //     Importer.ImportGLTFAsync(path, new ImportSettings(), (gameObject, b) => {
//     //       onLoad(gameObject);
//     //       });
//     //     ResetWrapper();
//     // }
//     //
//     // void onLoad(GameObject model){
//     //   ResetWrapper();
//     //   model.transform.SetParent(transform);
//     // }
//     //
//     // IEnumerator GetFileRequest(string url, Action<UnityWebRequest> callback){
//     //     using(UnityWebRequest req = UnityWebRequest.Get(url))
//     //     {
//     //         req.downloadHandler = new DownloadHandlerFile(GetFilePath());
//     //         yield return req.SendWebRequest();
//     //         callback(req);
//     //     }
//     // }
//
//     void Update(){
//       if (Input.GetMouseButtonDown(0)){
//         mouseDown = true;
//         lastPos = Input.mousePosition;
//       }else if(Input.GetMouseButtonUp(0)){
//         mouseDown = false;
//       }
//       var dx = lastPos.x - Input.mousePosition.x;
//       if (mouseDown) {
//         Debug.Log(dx);
//         var dr = new Vector3(0, dx, 0);
//         dr /= 3;
//         model.transform.Rotate(dr);
//       }
//     }
//
//     void LateUpdate(){
//       lastPos = Input.mousePosition;
//     }
//
//     void ResetWrapper()
//     {
//       foreach(Transform trans in transform)
//       {
//           Destroy(trans.gameObject);
//       }
//     }
// }
