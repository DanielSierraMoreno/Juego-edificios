using UnityEngine;
using UnityEngine.Events;
public class UIbar : MonoBehaviour
{
    int current = 1;
    public UnityEvent showCalendary, showRanking;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ShowCalendary()
    {
        if(current != 0)
		    showCalendary.Invoke();

        current = 0;

    }

	public void ResetCurrent()
	{
		current = 1;
	}
	public void ShowRanking()
	{

		if (current != 2)
			showRanking.Invoke();

        current = 2;

	}
}
