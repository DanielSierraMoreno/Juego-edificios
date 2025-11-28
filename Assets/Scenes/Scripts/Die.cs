using UnityEngine;

public class Die : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnTriggerStay(Collider other)
    {


		if (other.gameObject.CompareTag("InstantDie"))
		{
			ManagerPlayer.Instance.InstantDead(other);

		}
	}
}
