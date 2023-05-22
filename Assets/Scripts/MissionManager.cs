using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
[System.Serializable]
public class DialogHandler
{
    public string titleDesignation;
    public Texture characterImg;
    public string dialogueTxt;
}
public class MissionManager : MonoBehaviour
{
    /// <summary>
    /// title Screen
    /// </summary>
    public GameObject loadingSccreen;
    public Slider loadingSlider;
    public GameObject circularLoader;
    public DialogHandler[] dialogs;
    private int dialogIndex;
    public TextMeshProUGUI titleTxt;
    public TextMeshProUGUI dialogTxt;
    public RawImage characterImg;
    string jsonURL = "https://drive.google.com/uc?export=download&id=1ABWIlAuxVDHcxSL7CvvwYTKdwpZH_OZG";
    private void Awake()
    {
      //  StartCoroutine(GetData(jsonURL));
    }
    private void Start()
    {
        ShowDialogUI(dialogIndex);
        Invoke("SwitchOffLoadingScreen", 2);
    }
    IEnumerator GetData(string url)
    {
        UnityWebRequest request = UnityWebRequest.Get("");

        yield return request.Send();

        if (request.isNetworkError)
        {

        }
        else
        {
            Data data = JsonUtility.FromJson<Data>(request.downloadHandler.text);

            titleTxt.text = data.Name;
            dialogTxt.text = data.Intro;
            //uiMissionText2.text = data.TestText;
            //uiMissionText3.text = data.TestText2;

            StartCoroutine(GetImage(data.ImageURL));
        }

        request.Dispose();

    }
    public void NextDialog()
    {
        if(dialogIndex<dialogs.Length-1)
        {
            dialogIndex++;
            ShowDialogUI(dialogIndex);
        }
    }
    public void PreviousDialog()
    {
        if (dialogIndex > 0)
        {
            dialogIndex--;
            ShowDialogUI(dialogIndex);
        }
    }
    private void ShowDialogUI(int index)
    {
        characterImg.texture = dialogs[index].characterImg;
        dialogTxt.text = dialogs[index].dialogueTxt;
        titleTxt.text = dialogs[index].titleDesignation;
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

            characterImg.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
           

        }
      
        request.Dispose();
    }
    private void SwitchOffLoadingScreen()
    {
        loadingSccreen.SetActive(false);
    }
    public void UploadTheSolution()
    {
        SceneManager.LoadScene("SampleScene");
    }
}
