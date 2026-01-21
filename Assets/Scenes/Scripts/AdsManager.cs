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
		AdsConfiguration.Instance.ShowInterstitial();
	}

	public void ShowAdForEnergy()
	{
		AdsConfiguration.Instance.ShowAdForEnergy();
	}

	public void ShowAdForUndo()
	{
		AdsConfiguration.Instance.ShowAdForUndo();
	}

	public void IncreaseAdCount(int i)
    {
		if (GameDataManager.Instance.GetInt(NO_ADS, 0) == 1)
			return;

        int actual = GameDataManager.Instance.GetInt(AD_COUNT, 0);

        if (actual + i >= AdCountToShowAd)
        {
            ShowInterstitial();
			GameDataManager.Instance.SetInt(AD_COUNT, 0);
		}
		else
        {
		    GameDataManager.Instance.SetInt(AD_COUNT, actual + i);
        }



    }

	public void Buy50Energy()
	{
		IAPManager.Instance.Buy50EnergyProduct();

	}

	public void Buy100Energy()
	{
		IAPManager.Instance.Buy100EnergyProduct();

	}

	public void Buy50Undo()
	{
		IAPManager.Instance.Buy50UndoProduct();

	}

	public void Buy100Undo()
	{
		IAPManager.Instance.Buy100UndoProduct();

	}

	public void BuyNoAds()
	{
		IAPManager.Instance.BuyNoAdsProduct();
	}


}
