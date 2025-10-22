using UnityEngine;

public class ModularPlayerPiece : MonoBehaviour
{
    public bool choque = false;
	public bool isGrounded;

	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
		Vector3 rayOrigin = transform.position;

		isGrounded = Physics.Raycast(rayOrigin, Vector3.down, 0.55f, ~3);

	}

	private void OnTriggerStay(Collider other)
	{
		if (!other.isTrigger)
        {
			choque = true;
            Invoke("ResetCol", 0.1f);
        }
	}

    void ResetCol()
    {
		choque = false;

	}
}
