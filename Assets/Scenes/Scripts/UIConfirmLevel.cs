using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class UIConfirmLevel : MonoBehaviour
{
    public string level;
    public TMP_Text text;

    public UnityEvent showEvent, hideEvent;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        text.text = level;
    }


    public void EnterLevel()
    {
		if (FindObjectOfType<EnergyManager>().GastarEnergia())
			FindObjectOfType<LoadingUI>().LoadScene(level);

	}

    public void Show()
    {
        showEvent.Invoke();

	}

    public void Hide()
    {
		hideEvent.Invoke();

	}
}
