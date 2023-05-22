using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using System;
using System.Text;
using FirebaseWebGL.Scripts.FirebaseBridge;
using UnityEngine.SceneManagement;
public class FirebaseUploader : MonoBehaviour
{
    [SerializeField] public string _filePath; // Path to the file to upload
    [SerializeField] private string _storagePath; // Path in Firebase Storage to upload the file to
    public GameObject successPanel;
    public void GotoMenu()
    {
        SceneManager.LoadScene("SampleScene1");
    }

    public void OpenFileExplorer()
    {
        successPanel.SetActive(true);
        StartCoroutine(UploadFie());
    }
    private IEnumerator UploadFie()
    {
        // Read the file data as a byte array
        byte[] fileBytes = System.IO.File.ReadAllBytes(_filePath);

        // Convert the byte array to base64 string
        string fileBase64 = System.Convert.ToBase64String(fileBytes);

        // Create the Firebase Storage reference
        string storageUrl = "https://firebasestorage.googleapis.com/v0/b/gs://big-game-872ed.appspot.com/o/";
        string requestUrl = $"{storageUrl}{_storagePath}?name={_filePath}";
      
        // Create and send the HTTP request
        using (UnityWebRequest request = UnityWebRequest.Put(requestUrl, fileBytes))
        {
            request.method = UnityWebRequest.kHttpVerbPUT;
            request.SetRequestHeader("Content-Type", "application/vnd.openxmlformats-officedocument.presentationml.presentation");

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                Debug.Log("File uploaded successfully!");
            }
            else
            {
                Debug.LogError("File upload failed: " + request.error);
            }
        }
    }
    public void UploadFile() => FirebaseStorage.UploadFile(_filePath,
          Convert.ToBase64String(Encoding.ASCII.GetBytes(_filePath)), gameObject.name, "DisplayInfo", "DisplayErrorObject");
    public void DisplayInfo(string info)
    {
        Debug.Log(info);
    }
    public void DisplayError(string error)
    {
        Debug.LogError(error);
    }
}
