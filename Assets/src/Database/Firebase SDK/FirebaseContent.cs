using System;
using System.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;

using UnityEngine.Networking;
using UnityEngine;

using System.Linq;
using Firebase;
using Firebase.Database;

public class FirebaseContent{

    private FirebaseApp app;
    private string url;


    public async Task<Collection> GetCollection(){
      FirebaseDatabase database = await GetDatabase();
      while (database == null) database = await GetDatabase();

      database.SetPersistenceEnabled(false);

      DataSnapshot sc = await GetDatabaseAssets(database);
      while (sc == null) sc = await GetDatabaseAssets(database);

      Collection Assets = new Collection(sc);
      Debug.Log(Assets.ToString());
      return Assets;
    }

    async Task<DataSnapshot> GetDatabaseAssets(FirebaseDatabase database){
      bool done = false;
      DataSnapshot sc = null;
      database.GetReference("Assets/Furniture").GetValueAsync().ContinueWith(task => {
        if (task.IsCompleted) {
          sc = task.Result;
        }else{
          Debug.Log("Could not get assets");
        }

        done = true;
      });

      while ( !done ){
        await Task.Yield();
      }

      return sc;
    }

    async Task<FirebaseDatabase> GetDatabase(){
      bool done = false;
      FirebaseDatabase database = null;
      Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
        var dependencyStatus = task.Result;
        if (dependencyStatus == Firebase.DependencyStatus.Available) {
          // Create and hold a reference to your FirebaseApp,
          // where app is a Firebase.FirebaseApp property of your application class.

             database = FirebaseDatabase.DefaultInstance;


          // Set a flag here to indicate whether Firebase is ready to use by your app.
        } else {
          UnityEngine.Debug.LogError(System.String.Format(
            "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
          // Firebase Unity SDK is not safe to use here.
        }

        done = true;
      });

      while ( !done ){
        await Task.Yield();
      }

      return database;
    }
}
