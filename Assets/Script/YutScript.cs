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
    transform.rotation = Quaternion.identity;
    transform.Rotate(new Vector3(180, 90, 90));
  }

  // Update is called once per frame
  void Update()
  {
    yutVelocity = rigid.velocity;

    if(Input.GetKeyDown (KeyCode.Space)){
      rigid.velocity = Vector3.zero; 
      rigid.angularVelocity = Vector3.zero;

      float posX = Random.Range(-2, 2);
      float posZ = Random.Range(-2, 2);
      float posY = Random.Range(3, 5);
      transform.position = new Vector3(posX, posY, posZ);

      // 각도
      transform.rotation = Quaternion.identity;
      float angY = Random.Range(70, 110); 
      float angX = Random.Range(0, 360);
      transform.Rotate(new Vector3(angX, angY, 90));

      // 위로 던지기
      float forceY = Random.Range(200, 500);
      rigid.AddForce(new Vector3(0, forceY, 0));
      
      float dirX = Random.Range(5,50);
      // float dirY = Random.Range(200,500);
      float dirZ = Random.Range(-10, 10);
      //rigid.AddTorque(0, 0, 500000);  // 각도 랜덤 설정
      rigid.angularVelocity = new Vector3(dirX, 0, dirZ);
    }
  }
    
}
