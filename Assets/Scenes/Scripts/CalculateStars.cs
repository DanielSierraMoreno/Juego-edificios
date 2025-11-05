using System;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class CalculateStars : MonoBehaviour
{


    public UnityEvent evento1Stars,evento2Stars, evento3Stars;
	public GameObject firstTime1, firstTime2;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
		if (PlayerPrefs.GetInt("IsFirstLaunch", 0) == 0)
		{

			firstTime1.SetActive(false);
			firstTime2.SetActive(false);



		}
	}

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Calculate()
    {
		int nuevas = 0;

		FindObjectOfType<AdsManager>().IncreaseAdCount(2);


		if (PlayerPrefs.GetInt("IsFirstLaunch", 0) == 0)
		{
			PlayerPrefs.SetInt("IsFirstLaunch", 1);
			PlayerPrefs.Save();
		}



		if (ManagerPlayer.Instance.TimerGoal >= ManagerPlayer.Instance.levelTimer && ManagerPlayer.Instance.MovementsGoal >= ManagerPlayer.Instance.actualMovements)
        {
			evento3Stars.Invoke();

			nuevas = 3 - PlayerPrefs.GetInt(SceneManager.GetActiveScene().name, 0);

			PlayerPrefs.SetInt(SceneManager.GetActiveScene().name, 3);
			
		}
		else if (ManagerPlayer.Instance.TimerGoal >= ManagerPlayer.Instance.levelTimer)
		{
			evento2Stars.Invoke();
			nuevas = 2 - PlayerPrefs.GetInt(SceneManager.GetActiveScene().name, 0);

			if (PlayerPrefs.GetInt(SceneManager.GetActiveScene().name,0) < 3)
			    PlayerPrefs.SetInt(SceneManager.GetActiveScene().name, 2);
		}
		else if (ManagerPlayer.Instance.MovementsGoal >= ManagerPlayer.Instance.actualMovements)
		{
			evento2Stars.Invoke();
			nuevas = 2 - PlayerPrefs.GetInt(SceneManager.GetActiveScene().name, 0);

			if (PlayerPrefs.GetInt(SceneManager.GetActiveScene().name, 0) < 3)
				PlayerPrefs.SetInt(SceneManager.GetActiveScene().name, 2);
		}
        else
		{
			evento1Stars.Invoke();
			nuevas = 1 - PlayerPrefs.GetInt(SceneManager.GetActiveScene().name, 0);

			if (PlayerPrefs.GetInt(SceneManager.GetActiveScene().name, 0) < 2)
				PlayerPrefs.SetInt(SceneManager.GetActiveScene().name, 1);
		}

		nuevas = Mathf.Clamp(nuevas, 0, 3);

		DateTime date = FindObjectOfType<TimeManager>().LastKnownTimeUTC;

		int actual = PlayerPrefs.GetInt("Day" + date.Day.ToString() + "Month" + date.Month.ToString() + "Year" + date.Year.ToString() + "Progress", 0);

		Calendario.Instance.SetProgressAndCheckReward(actual + nuevas);

		PlayerPrefs.SetInt("Day" + date.Day.ToString() + "Month" + date.Month.ToString() + "Year" + date.Year.ToString() + "Progress", actual+nuevas);
	}
}
