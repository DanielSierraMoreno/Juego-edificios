using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Activable : MonoBehaviour
{
	public List<CheckNewModules> pieces;

	public bool checkEnd = false;

	public UnityEvent evento; 
	// Start is called once before the first execution of Update after the MonoBehaviour is created
	void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
		if (!checkEnd)
		{
			int count = 0;

			for (int i = 0; i < pieces.Count; i++)
			{
				if (pieces[i].pieces.Count != 0)
				{
					count++;
				}
			}


			if (count == pieces.Count)
			{
				checkEnd = true;
				evento?.Invoke();
			}
		}
	}
}
