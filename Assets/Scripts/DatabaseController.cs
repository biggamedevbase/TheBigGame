//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using Firebase;
//using Firebase.Database;
//using UnityEngine.UI;
//using System;


//// Handle initialization of the necessary firebase modules:


//public class DatabaseController : MonoBehaviour
//{
//    public InputField Name;
//    public InputField Password;
//    Firebase.Auth.FirebaseAuth auth;
//    Firebase.Auth.FirebaseUser user;
//    private string userID;
//    private DatabaseReference dbReference;

//    private void Awake()
//    {
//        InitializeFirebase();
//    }

//    void InitializeFirebase()
//    {
//        Debug.Log("Setting up Firebase Auth");
//        auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
//        auth.StateChanged += AuthStateChanged;
//        AuthStateChanged(this, null);
//    }

//    public void AuthStateChanged(object sender, System.EventArgs eventArgs)
//    {
//        if (auth.CurrentUser != user)
//        {
//            bool signedIn = user != auth.CurrentUser && auth.CurrentUser != null;
//            if (!signedIn && user != null)
//            {
//                Debug.Log("Signed out " + user.UserId);
//            }
//            user = auth.CurrentUser;
//            if (signedIn)
//            {
//                Debug.Log("Signed in " + user.UserId);
//            }
//        }
//    }
//    void OnDestroy()
//    {
//        auth.StateChanged -= AuthStateChanged;
//        auth = null;
//    }




//    // Start is called before the first frame update
//    void Start()
//    {
//        userID = SystemInfo.deviceUniqueIdentifier;
//        dbReference = FirebaseDatabase.DefaultInstance.RootReference;

//    }

//    public void CreateUser()
//    {
//        User user = new User(Name.text, Password.text);
//        string json = JsonUtility.ToJson(user);

//        dbReference.Child("users").Child(userID).SetRawJsonValueAsync(json);

//    }
//}
