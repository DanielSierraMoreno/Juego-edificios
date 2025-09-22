using UnityEngine;

public class PerfectDetectorManager : MonoBehaviour
{
    public PerfectDetectorTrigger[] detectors;

    GameObject target;
    public bool check = false;
	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    void CheckPerfect()
    {

        check = true;

		for (int i = 0; i < detectors.Length; i++)
        {
            if (detectors[i].enter)
            {
                return;
            }
        }

        for(int i = 0; i < target.transform.childCount; i++)
        {
            if(target.transform.GetChild(i).GetComponent<ParticleSystem>() != null)
            {
				target.transform.GetChild(i).GetComponent<ParticleSystem>().Play();
                target.transform.position = this.transform.position;
			}
        }
    }


	private void OnTriggerEnter(Collider other)
	{
		if(other != null && !check)
        {
			target = other.gameObject;
            CheckPerfect();
        }
	}
}
