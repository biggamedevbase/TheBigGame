//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine.UI;
//using UnityEngine;
//using Firebase;
//using Firebase.Auth;

//public class AuthManager : MonoBehaviour
//{
//    public MainMenu menu;
//    public DependencyStatus dependencyStatus;
//    public FirebaseAuth auth;
//    public FirebaseUser User;

//    public InputField emailLoginField;
//    public InputField passwordField;
//    public Text warningLoginText;
//    public Text confirmLoginText;

//    public InputField usernameRegisterField;
//    public InputField passwordRegisterField;
//    public InputField emailRegisterField;
//    public Text warningRegisterText;

//    private void Awake()
//    {
//        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
//        {
//            dependencyStatus = task.Result;
//            if (dependencyStatus == DependencyStatus.Available)
//            {
//                InitializeFirebase();
//            }
        
//        else
//        {
//            Debug.LogError("Could not resolve all Firebase dependecies: " + dependencyStatus);
//        }
//    });

//    }

//    private void InitializeFirebase()
//    {
//        Debug.Log("Setting up Firebase Auth");

//        auth = FirebaseAuth.DefaultInstance;
//    }
//    public void LoginButton()
//    {
//        StartCoroutine(Login(emailLoginField.text + "@mail.com", passwordField.text));
//    }
//    public void RegisterButton()
//    {
//        StartCoroutine(Register(emailRegisterField.text +"@mail.com", passwordRegisterField.text, usernameRegisterField.text));
//    }

//    private IEnumerator Login(string _email, string _password)
//    {
//        var LoginTask = auth.SignInWithEmailAndPasswordAsync(_email, _password);

//        yield return new WaitUntil(predicate: () => LoginTask.IsCompleted);

//        if (LoginTask.Exception != null)
//        {
//            Debug.LogWarning(message: $"Failed to register task with {LoginTask.Exception}");
//            FirebaseException firebaseEX = LoginTask.Exception.GetBaseException() as FirebaseException;
//            AuthError errorCode = (AuthError)firebaseEX.ErrorCode;

//            string message = "Login Faild!";
//            switch (errorCode)
//            {
//                case AuthError.MissingEmail:
//                    message = "Missing Email";
//                    break;
//                case AuthError.MissingPassword:
//                    message = "Missing Password";
//                    break;
//                case AuthError.WrongPassword:
//                    message = "Wrong Password";
//                    break;
//                case AuthError.InvalidEmail:
//                    message = "Invalid Email";
//                    break;
//                case AuthError.UserNotFound:
//                    message = "Account does not exist";
//                    break;
//            }
//            warningLoginText.text = message;
//        }
//        else
//        {
//            User = LoginTask.Result;
//            Debug.LogFormat("User signed in successfully: {0} ({1})", User.DisplayName, User.Email);
//            warningLoginText.text = "";
//            confirmLoginText.text = "Logged In";
//            menu.mainMenuUI.SetActive(true);
//            menu.loginUI.SetActive(false);
//        }

//    }

//    private IEnumerator Register(string _email, string _password, string _username)
//    {
//        if (_username == "")
//        {
//            warningRegisterText.text = "Missing Username";
//        }
//        else
//        {
//            var RegisterTask = auth.CreateUserWithEmailAndPasswordAsync(_email, _password);

//            yield return new WaitUntil(predicate: () => RegisterTask.IsCompleted);

//            if(RegisterTask.Exception != null)
//            {
//                Debug.LogWarning(message: $"Failed to register task with {RegisterTask.Exception}");
//                FirebaseException firebaseEx = RegisterTask.Exception.InnerException.GetBaseException() as FirebaseException;
//                AuthError errorCode = (AuthError)firebaseEx.ErrorCode;

//                string message = "Register Failed";
//                switch (errorCode)
//                {
//                    case AuthError.MissingEmail:
//                        message = "Missing Email";
//                        break;
//                    case AuthError.MissingPassword:
//                        message = "Missing Password";
//                        break;
//                    case AuthError.WeakPassword:
//                        message = "Weak Password";
//                        break;
//                    case AuthError.EmailAlreadyInUse:
//                        message = "Email Already In Use";
//                        break;
//                }
//                warningRegisterText.text = message;
//            }
//            else
//            {
//                User = RegisterTask.Result;

//                if (User != null)
//                {
//                    UserProfile profile = new UserProfile { DisplayName = _username };

//                    var ProfileTask = User.UpdateUserProfileAsync(profile);

//                    yield return new WaitUntil(predicate: () => ProfileTask.IsCompleted);

//                    if (ProfileTask.Exception != null)
//                    {
//                        Debug.LogWarning(message: $"Failed to register task with {ProfileTask.Exception}");
//                        FirebaseException firebaseEx = ProfileTask.Exception.GetBaseException() as FirebaseException;
//                        AuthError errorCode = (AuthError)firebaseEx.ErrorCode;
//                        warningRegisterText.text = "Username Set Failed";
//                    }
//                    else
//                    {
//                        menu.loginUI.SetActive(true);
//                        menu.registerUI.SetActive(false);
//                    }
//                }
//            }
//        }
//    }
//}
