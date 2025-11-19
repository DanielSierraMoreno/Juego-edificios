using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Rendering;

public class ShowUIConfiguration : MonoBehaviour
{
    public bool ignore = false;
    public GameObject shop;

    public UnityEvent showEvent, hideEvent, showCon;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
      if(!ignore)
			shop.SetActive(false);

	}

    // Update is called once per frame
    void Update()
    {
        


    }

    public void End()
    {
			shop.SetActive(true);
        ignore = true;
	}
    public void Show()
    {
		if (!ignore)
        {
            showEvent.Invoke();
        }


	}

	public void Hide()
	{
		if (!ignore)
		{
			hideEvent.Invoke();

		}
	}

    public void ShowConf()
    {
		if (!ignore)
		{
			showCon.Invoke();

		}
	}


}
