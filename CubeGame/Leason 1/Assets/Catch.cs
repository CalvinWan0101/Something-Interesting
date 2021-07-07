using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Catch : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject target;
    void Start()
    {
        target = GameObject.Find("Cube");
    }
    void Update()
    {
        if (Input.GetKeyUp(KeyCode.T))
            target.SetActive(true);
        if (Input.GetKeyUp(KeyCode.F))
            target.SetActive(false);
    }
}