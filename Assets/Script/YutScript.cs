using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class YutScript : MonoBehaviour
{
  public Rigidbody rigid;
  public static Vector3 yutVelocity;
  public int yutId;
  // Start is called before the first frame update
  void Start()
  {
    // rigid = GetComponent<Rigidbody>();
  }

  // Update is called once per frame
  void Update()
  {
    yutVelocity = rigid.velocity;

    if(Input.GetKeyDown (KeyCode.Space)){
      rigid.velocity = Vector3.zero; 
      rigid.angularVelocity = Vector3.zero; 

      float posX = Random.Range(-3, 3);
      float posZ = Random.Range(-3, 3);
      transform.position = new Vector3(posX, 3, posZ);

      //transform.rotation = Quaternion.identity;
      rigid.AddForce(new Vector3(0,500,0)); // 위로 던지기
      
      float dirX = Random.Range(300,700);
      // float dirY = Random.Range(200,500);
      // float dirZ = Random.Range(200,500);
      rigid.AddTorque(dirX, 10, 10);  // 각도 랜덤 설정 
    }
  }
    
}
