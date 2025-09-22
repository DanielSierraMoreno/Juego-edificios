using UnityEngine;
using UnityEngine.UI;

public class Edificio : MonoBehaviour
{
    public int blocksToComplete = 10;

    public Slider slider;

    public Movimiento move;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        move.SetMaxSize(blocksToComplete);

	}

    // Update is called once per frame
    void Update()
    {
        slider.value = (float)move.numberTowerSize / (float)blocksToComplete;


    }
}
