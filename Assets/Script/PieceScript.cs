using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceScript : MonoBehaviour
{
  public Transform[] waypoints;

  public int curWaypoint = 0; // 놓여져 있는 칸 index
  public int moveCount = -1;

  //public bool moveAllowed = false;

  public int teamNumber;

  private float moveSpeed = 3f;
  private Vector3 originPosition;

  public List<GameObject> childPieces = new List<GameObject>();

  void Start()
  {
    //transform.position = waypoints[curWaypoint].transform.position;
    originPosition = transform.position;
  }

  void Update()
  {
    if (moveCount >= 0)
      Move();
  }

  public void Move(int yutResult)
  {
    GameManager.isMoving = true;

    if (curWaypoint == 0)
      transform.position = waypoints[0].transform.position;

    //moveAllowed = true;
    moveCount = yutResult;
  }

  void Move()
  {
    // 다음칸을 향해 조금씩 움직이기
    transform.position = Vector3.MoveTowards(transform.position,
        waypoints[curWaypoint].transform.position,
        moveSpeed * Time.deltaTime);

    // waypoint의 위치까지 도착했다면 카운트 다운
    if (transform.position == waypoints[curWaypoint].transform.position)
    {
      // 카운트가 남았다면 다음 칸으로 움직이도록 지정!
      if (--moveCount >= 0)
        curWaypoint++;
      // 카운트가 남지 않음(움직임을 끝냈을 경우)
      else
        GameManager.isMoving = false;
    }
  }

  public void InitPosition()
  {
    transform.position = originPosition;
    curWaypoint = 0;

    // 자식이 있는 상태에서 잡힌 경우
    foreach (GameObject child in childPieces)
    {
      child.SetActive(true);
      child.GetComponent<PieceScript>().InitPosition(); // 자식의 위치 초기화
      transform.localScale -= new Vector3(0.5f, 0.0f, 0.0f);
    }
  }

  public void Coloring()
  {
    GetComponent<Renderer>().material.color = Color.cyan;
  }

  public void CleanColor()
  {
    GetComponent<Renderer>().material.color = (teamNumber == 1 ? Color.red : Color.blue);
  }

  public void GetChild(GameObject child)
  {
    // 업힌 애가 자식이 있는 경우

    // 업힌 애가 자식이 없는 경우
    childPieces.Add(child);
    child.SetActive(false);
    transform.localScale += new Vector3(0.5f, 0.0f, 0.0f);
  }
}
