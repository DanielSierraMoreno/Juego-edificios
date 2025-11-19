using UnityEngine;

public class AdsManager : MonoBehaviour
{

	private const string AD_COUNT = "AdCount";
	private const string NO_ADS = "NoAds";

	public int AdCountToShowAd = 6;


	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
    {
        
    }

	// Update is called once per frame
	void Update()
    {
        
    }
    void ShowInterstitial()
    {

    }

	public void ShowAdForEnergy()
	{
		int batteryCharges = PlayerPrefs.GetInt("CargasBateria", 5);
		batteryCharges += 5;

		// 2. Guardar las nuevas cargas
		PlayerPrefs.SetInt("CargasBateria", batteryCharges);
	}

	public void ShowAdForUndo()
	{
		int UndoCharges = PlayerPrefs.GetInt("Undo", 5);
		UndoCharges += 3;

		// 2. Guardar las nuevas cargas
		PlayerPrefs.SetInt("Undo", UndoCharges);
	}

	public void IncreaseAdCount(int i)
    {
		if (PlayerPrefs.GetInt(NO_ADS, 0) == 1)
			return;

        int actual = PlayerPrefs.GetInt(AD_COUNT, 0);

        if (actual + i >= AdCountToShowAd)
        {
            ShowInterstitial();
			PlayerPrefs.SetInt(AD_COUNT, 0);
		}
		else
        {
		    PlayerPrefs.SetInt(AD_COUNT, actual + i);
        }



    }

	public void Buy50Energy()
	{
		int batteryCharges = PlayerPrefs.GetInt("CargasBateria", 5);
		batteryCharges += 50;

		// 2. Guardar las nuevas cargas
		PlayerPrefs.SetInt("CargasBateria", batteryCharges);
	}

	public void Buy100Energy()
	{
		int batteryCharges = PlayerPrefs.GetInt("CargasBateria", 5);
		batteryCharges += 100;

		// 2. Guardar las nuevas cargas
		PlayerPrefs.SetInt("CargasBateria", batteryCharges);
	}

	public void Buy50Undo()
	{
		int UndoCharges = PlayerPrefs.GetInt("Undo", 5);
		UndoCharges += 50;

		// 2. Guardar las nuevas cargas
		PlayerPrefs.SetInt("Undo", UndoCharges);
	}

	public void Buy100Undo()
	{
		int UndoCharges = PlayerPrefs.GetInt("Undo", 5);
		UndoCharges += 100;

		// 2. Guardar las nuevas cargas
		PlayerPrefs.SetInt("Undo", UndoCharges);
	}

	public void BuyNoAds()
	{
		PlayerPrefs.SetInt(NO_ADS, 1);

	}


}
