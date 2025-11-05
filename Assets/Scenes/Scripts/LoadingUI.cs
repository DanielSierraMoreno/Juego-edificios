using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class LoadingUI : MonoBehaviour
{
    string sceneName;
    public UnityEvent showEvent;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

	private void Load()
	{
		SceneManager.LoadScene(sceneName);
	}

	public void LoadScene(string name)
    {
        sceneName = name;

        showEvent.Invoke();

		Invoke("Load", 0.35f);
	}
}
