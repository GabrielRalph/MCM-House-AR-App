using UnityEngine;
using System.Collections;
using System.Collections.Generic;

//ARModel, used by the mesh model
public class ARModel : MonoBehaviour {
  public ModelTexture ModelTexture;

  public bool Held;
  public float chaserInc = 0.05f;

  void Awake(){
    SetGlossMapScale(0);
    updateScale();
    position = transform.position;
  }

  public Vector3 origin {get; private set;}
  public Pose Pose {
    get{
      return new Pose(transform.position, transform.rotation);
    }
    set{
      if (value == null) return;
      origin = value.position;
      transform.position = value.position;
      transform.rotation = value.rotation;
    }
  }

  //Setters and getters for scale vectors
  private Vector3 _baseScale = new Vector3(0.01f, 0.01f, 0.01f);
  public Vector3 baseScale {
    get {return new Vector3(_baseScale.x, _baseScale.y, _baseScale.z);}
    set {
      _baseScale = value;
    }
  }
  private Vector3 _scale = new Vector3(1,1,1);
  public Vector3 scale{
    get {return new Vector3(_scale.x, _scale.y, _scale.z);}
    set {
      _scale = value;
    }
  }

  private float bp = 0;
  public float binPercent {
    get {return bp;}
    set {
      bp = value > 1 ? 1 : value < 0 ? 0 : value;
      goal_bp = bp;
    }
  }

  private float goal_bp = 0;
  public float goalBinPercent {
    get {return goal_bp;}
    set {
      goal_bp = value > 1 ? 1 : value < 0 ? 0 : value;
    }
  }

  private float _size = 1;
  public float sizeMin = 0.07f;
  public float size {
    get {return _size;}
    set {
      if (value < 0) value = 0;
      if (value > 1) value = 1;
      _size = value;
      float s = sizeMin + size * (1 - sizeMin);
      scale = new Vector3(s, s, s);
    }
  }

  private float _yRotation;
  public float yRotation {
    get {return _yRotation;}
    set {
      _yRotation = value;
      transform.Rotate(new Vector3(0, yRotation, 0));
    }
  }

  private Vector3 pos;
  public Vector3 position{
    get {return new Vector3(pos.x, pos.y, pos.z);}
    set {pos = value;}
  }

  private void updatePosition(){
    //Fall
    if (!Held) {
      Vector3 pos = position;
      float o_y = origin.y;
      if (pos.y > o_y) {
        pos.y -= chaserInc;
        if (pos.y < o_y) pos.y = o_y;
      }else if (pos.y < o_y) {
        pos.y += chaserInc;
        if (pos.y > o_y) pos.y = o_y;
      }
      position = pos;
    }
    transform.position = position;
  }

  private void updateScale(){
    size = 1 - bp;
    Vector3 s = new Vector3(scale.x*baseScale.x, scale.y*baseScale.y, scale.z*baseScale.z);
    transform.localScale = s;
  }

  //GetMeshses, recursively searches a gameObject's children to find a
  //descendant who contains the component MeshRenderer
  public MeshRenderer[] Meshes{
    get {return gameObject.GetComponentsInChildren<MeshRenderer>();}
  }

  public void SetGlossMapScale(float scale = 0f){
    foreach(MeshRenderer mesh in Meshes){
      foreach (Material material in mesh.materials){
        material.SetFloat("_Roughness", scale);
        material.SetFloat("_MetallicGlossMap", scale);

      }
    }
  }

  public void AddColliders(){
    foreach (MeshRenderer meshRenderer in Meshes){
      Mesh mesh = meshRenderer.GetComponent<Mesh>();
      MeshCollider collider = meshRenderer.gameObject.AddComponent<MeshCollider>();
      collider.sharedMesh = mesh;
    }
  }

  void Update(){
    if (bp > goal_bp) {
      bp -= chaserInc;
      if (bp < goal_bp) bp = goal_bp;
    } else if (bp < goal_bp){
      bp += chaserInc;
      if (bp > goal_bp) bp = goal_bp;
    }

    updatePosition();
    updateScale();
  }
}
