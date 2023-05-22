using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using UnityEngine.UI;

//Json data
public struct Data
{
    public string Name;
    public string ImageURL;
    public string Intro;
    public string TestText;
    public string TestText2;
}

public class TestScript : MonoBehaviour
{
    [SerializeField] Text uiNameText;
    [SerializeField] RawImage uiRawImage;
    [SerializeField] Text uiMissionText;
    [SerializeField] Text uiMissionText2;
    [SerializeField] Text uiMissionText3;

    string jsonURL = "https://drive.google.com/uc?export=download&id=1ABWIlAuxVDHcxSL7CvvwYTKdwpZH_OZG";
    // Start is called before the first frame update
    private void Start()
    {
        StartCoroutine(GetData(jsonURL));
    }
    IEnumerator GetData(string url)
    {
        UnityWebRequest request = UnityWebRequest.Get(url);

        yield return request.Send();

        if (request.isNetworkError)
        {

        }
        else
        {
            Data data = JsonUtility.FromJson<Data>(request.downloadHandler.text);

            uiNameText.text = data.Name;
            uiMissionText.text = data.Intro;
            uiMissionText2.text = data.TestText;
            uiMissionText3.text = data.TestText2;            

            StartCoroutine(GetImage(data.ImageURL));
        }

        request.Dispose();

    }
    IEnumerator GetImage(string url)
    {
        UnityWebRequest request = UnityWebRequestTexture.GetTexture(url);

        yield return request.Send();

        if (request.isNetworkError)
        {

        }
        else
        {

            uiRawImage.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;

           
        }

        request.Dispose();
    }

    
}
