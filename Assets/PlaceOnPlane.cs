using UnityEngine;
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class PlaceOnPlane : MonoBehaviour
{
    private ARSessionOrigin sessionOrigin;
    private ARRaycastManager raycastManager;
    private List<ARRaycastHit> hits;

    public GameObject model;
    private GameObject gameModel;

    private bool mouseDown;
    private Vector3 lastPos;


    // Start is called before the first frame update
    void Start(){

      sessionOrigin = GetComponent<ARSessionOrigin>();
      raycastManager = GetComponent<ARRaycastManager>();
      hits = new List<ARRaycastHit>();

    }

    public GameObject GetModelFromRoot(GameObject root){
      foreach(Transform childT in root.transform){
        GameObject child = childT.gameObject;
        Renderer renderer = child.GetComponent<Renderer>();
        if (renderer == null){
          return GetModelFromRoot(child);
        }else{
          return child;
        }
      }
      return null;
    }

    void UpdateRotation(){
      if (Input.GetMouseButtonDown(0)){
        mouseDown = true;
        lastPos = Input.mousePosition;
      }else if(Input.GetMouseButtonUp(0)){
        mouseDown = false;
      }

      var dx = lastPos.x - Input.mousePosition.x;
      if (mouseDown) {
        var dr = new Vector3(0, dx, 0);
        dr /= 3;
        gameModel.transform.Rotate(dr);
      }
      lastPos = Input.mousePosition;
    }

    void UpdateModelPlace(){
      if ( Input.touchCount > 0 ){
        Touch touch = Input.GetTouch(0);
        Debug.Log("touches registered");
        if ( touch.phase == TouchPhase.Began ){
          Debug.Log("Touch began");
          if ( raycastManager.Raycast(touch.position, hits, TrackableType.PlaneWithinPolygon) ){
            Pose pose = hits[0].pose;
            Debug.Log($"Raycast Found at {pose.position.x}, {pose.position.y}, {pose.position.z}");

            if (gameModel == null){
              var modelLoader = model.GetComponent<ModelLoaderTriLib>();
              if (modelLoader != null){
                var rootModel = modelLoader.getModel();
                gameModel = Instantiate(GetModelFromRoot(rootModel), pose.position, pose.rotation);
                Debug.Log(gameModel.GetComponent<Renderer>());
                gameModel.SetActive(true);
              }

            }else{
              gameModel.transform.position = pose.position;
              gameModel.transform.rotation = pose.rotation;
            }
          }
        }
      }
    }


    // Update is called once per frame
    void Update(){
      UpdateModelPlace();
      UpdateRotation();
    }

}
