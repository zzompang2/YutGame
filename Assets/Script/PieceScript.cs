﻿//using System.Collections;
//using System.Collections.Generic;
using UnityEngine;

public class PieceScript : MonoBehaviour
{
  public Transform[] waypoints;

  //[SerializeField]
  private float moveSpeed = 3f;

  //[HideInInspector]
  public int curWaypoint = 0; // 놓여져 있는 칸 index
  public int moveCount = -1;

  public bool moveAllowed = false;

  public int teamNumber;

  private Vector3 originPosition;

  void Start()
  {
    //transform.position = waypoints[curWaypoint].transform.position;
    originPosition = transform.position;
  }

  void Update()
  {
    if (moveAllowed && moveCount >= 0)
      Move();
    else
      moveAllowed = false;
  }

  public void Move(int yutResult)
  {
    if(curWaypoint == 0)
      transform.position = waypoints[0].transform.position;
    
    moveAllowed = true;
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
    }
  }

  public void InitPosition()
  {
    transform.position = originPosition;
    curWaypoint = 0;
  }

  public void Coloring()
  {
    GetComponent<Renderer>().material.color = Color.cyan;
  }

  public void CleanColor()
  {
    GetComponent<Renderer>().material.color = (teamNumber == 1 ? Color.red : Color.blue);
  }
}
