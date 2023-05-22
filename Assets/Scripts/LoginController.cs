using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LoginController : MonoBehaviour
{
    public GameObject loginPage;

    public InputField loginEmail, loginPassword;

    public void LoginUser()
    {
        //Check if all fields filled
        if (string.IsNullOrEmpty(loginEmail.text) && string.IsNullOrEmpty(loginPassword.text))
        {
            return;
        }

        //Do Login
        SceneManager.LoadScene("SampleScene1");
    }
}
