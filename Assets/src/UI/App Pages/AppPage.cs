using UnityEngine;
using System;
using UnityEngine.UI;
using System.Threading.Tasks;
using System.Threading;
using System.Collections;
using System.Collections.Generic;

public class AppPage : MonoBehaviour {
  public App App;
  public bool isLoaded {get; private set;} = false;
  public bool isReady {get; set;} = false;

  public int loadingCount {get; private set;} = 0;

  public void AddLoadingItem(){
    loadingCount++;
  }

  public void ItemLoaded(){
    loadingCount--;
    if (loadingCount == 0) isLoaded = true;
  }

  public bool StartBuild(){
    if (loadingCount == 0) {
      isLoaded = false;
      isReady = false;
      return true;
    }else{
      return false;
    }
  }

  public async Task WaitTillReady(){
    while (!isReady) await Task.Yield();
  }
  public async Task WaitTillLoaded(){
    while (!isLoaded) await Task.Yield();
  }
}
