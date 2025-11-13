using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelConditions : MonoBehaviour
{
    public enum Conditions { BUTTONS, PAINT, CONNECT};

    public TMP_Text timeGoal, moveGoal, objective, objectiveTitle, level;

    public Conditions conditions;
	public GameObject paintInstance;

	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
    {
        ManagerPlayer.Instance.SetPause(true);
        level.text = SceneManager.GetActiveScene().name;
		timeGoal.text = ManagerPlayer.Instance.TimerGoal.ToString() + ",00 s";
		moveGoal.text = ManagerPlayer.Instance.MovementsGoal.ToString();



        switch(conditions)
        {
            case Conditions.BUTTONS:
                objective.text = "Press one or more buttons exactly at the same time";
				objectiveTitle.text = "Buttons";
				break;
			case Conditions.PAINT:
				objective.text = "Pass over all available tiles to paint them";
				objectiveTitle.text = "Paint";

				break;
			case Conditions.CONNECT:
				objective.text = "Connect all available modules";
				objectiveTitle.text = "Connect";

				break;
		}
	}

    // Update is called once per frame
    void Update()
    {
        
    }
}
