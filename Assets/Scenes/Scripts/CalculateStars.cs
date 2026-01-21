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
		if (GameDataManager.Instance.GetInt("IsFirstLaunch", 0) == 0)
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




		if (ManagerPlayer.Instance.TimerGoal >= ManagerPlayer.Instance.levelTimer && ManagerPlayer.Instance.MovementsGoal >= ManagerPlayer.Instance.actualMovements)
        {
			evento3Stars.Invoke();

			nuevas = 3 - GameDataManager.Instance.GetInt(SceneManager.GetActiveScene().name, 0);

			GameDataManager.Instance.SetInt(SceneManager.GetActiveScene().name, 3);
			
		}
		else if (ManagerPlayer.Instance.TimerGoal >= ManagerPlayer.Instance.levelTimer)
		{
			evento2Stars.Invoke();
			nuevas = 2 - GameDataManager.Instance.GetInt(SceneManager.GetActiveScene().name, 0);

			if (GameDataManager.Instance.GetInt(SceneManager.GetActiveScene().name,0) < 3)
			    GameDataManager.Instance.SetInt(SceneManager.GetActiveScene().name, 2);
		}
		else if (ManagerPlayer.Instance.MovementsGoal >= ManagerPlayer.Instance.actualMovements)
		{
			evento2Stars.Invoke();
			nuevas = 2 - GameDataManager.Instance.GetInt(SceneManager.GetActiveScene().name, 0);

			if (GameDataManager.Instance.GetInt(SceneManager.GetActiveScene().name, 0) < 3)
				GameDataManager.Instance.SetInt(SceneManager.GetActiveScene().name, 2);
		}
        else
		{
			evento1Stars.Invoke();
			nuevas = 1 - GameDataManager.Instance.GetInt(SceneManager.GetActiveScene().name, 0);

			if (GameDataManager.Instance.GetInt(SceneManager.GetActiveScene().name, 0) < 2)
				GameDataManager.Instance.SetInt(SceneManager.GetActiveScene().name, 1);
		}

		nuevas = Mathf.Clamp(nuevas, 0, 3);

		DateTime date = FindObjectOfType<TimeManager>().LastKnownTimeUTC;

		int actual = GameDataManager.Instance.GetInt("Day" + date.Day.ToString() + "Month" + date.Month.ToString() + "Year" + date.Year.ToString() + "Progress", 0);

		Calendario.Instance.SetProgressAndCheckReward(actual + nuevas);

		GameDataManager.Instance.SetInt("Day" + date.Day.ToString() + "Month" + date.Month.ToString() + "Year" + date.Year.ToString() + "Progress", actual+nuevas);


		int totalRecord = GameDataManager.Instance.GetInt("TotalRecordProgress", 0) + nuevas;

		GameDataManager.Instance.SetInt("TotalRecordProgress", totalRecord);

		Ranking.Instance.SubmitScore(totalRecord);
	}
}
