using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
//using Firebase;
//using Firebase.Extensions;
//using Firebase.Storage;
using System;

public class ImageLoader : MonoBehaviour
{
    RawImage rawImage;
    //FirebaseStorage storage;
    //StorageReference storageReference;

    // Start is called before the first frame update

    IEnumerator LoadImage(string MediaUrl)
    {
        UnityWebRequest request = UnityWebRequestTexture.GetTexture(MediaUrl);
        yield return request.SendWebRequest();
        if (request.isNetworkError || request.isHttpError)
        {
            Debug.Log(request.error);
            yield return null;
        }
        else
        {
            rawImage.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
        }

    }
    void Start()
    {
        rawImage = gameObject.GetComponent<RawImage>();

        StartCoroutine(LoadImage("https://firebasestorage.googleapis.com/v0/b/big-game-872ed.appspot.com/o/intro-1614107130.jpg?alt=media&token=add65ae9-50e8-4be0-87e0-7e1fd7d963f5"));

        /* storage = FirebaseStorage.DefaultInstance;
        storageReference = storage.GetReferenceFromUrl("gs://big-game-872ed.appspot.com");

        StorageReference image = storageReference.Child("Shrek.png"); 

        Debug.Log(image.GetDownloadUrlAsync()); */

        /* image.GetDownloadUrlAsync().ContinueWithOnMainThread(async task =>
        {
            if (!task.IsFaulted || !task.IsCanceled)
            {
                StartCoroutine(LoadImage(Convert.ToString(task.Result)));
            }
            else
            {
                Debug.Log(task.Exception);
                
            }
        }); */
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
