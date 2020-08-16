using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class YutScript : MonoBehaviour
{
  private Rigidbody rigid;
  public int yutId; // 0,1,2,3
  bool throwable;

  void Start()
  {
    rigid = GetComponent<Rigidbody>();
    transform.rotation = Quaternion.identity; // 회전 없음(부모의 좌표축으로 정렬)
    transform.Rotate(new Vector3(0, 90, 90)); // 초기 각도 설정
    throwable = true;
  }

  void Update()
  {
    if(Input.GetKeyDown (KeyCode.Space) && throwable)
    {
      // 연속 던지기 방지
      throwable = false;

      // 속도 초기화
      rigid.velocity = Vector3.zero;
      rigid.angularVelocity = Vector3.zero; 

      // 위치 랜덤
      float posX = Random.Range(-2, 2);
      float posZ = Random.Range(-2, 2);
      float posY = Random.Range(3, 5);
      transform.position = new Vector3(posX, posY, posZ);

      // 각도 랜덤
      transform.rotation = Quaternion.identity;
      float angY = Random.Range(70, 110); 
      float angX = Random.Range(0, 360);
      transform.Rotate(new Vector3(angX, angY, 90));

      // 위로 던지기
      float forceY = Random.Range(200, 500);
      rigid.AddForce(new Vector3(0, forceY, 0));

      // 회전 속도 추가
      float dirX = Random.Range(5,50);
      float dirZ = Random.Range(-10, 10);
      rigid.angularVelocity = new Vector3(dirX, 0, dirZ);
    }
  }
}
