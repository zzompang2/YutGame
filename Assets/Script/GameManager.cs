﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
  private static GameObject player1MoveText, player2MoveText;
  private static GameObject player1, player2;

  public static int yutSideThrown = 0;
  public static int player1StartWaypoint = 0;
  public static int player2StartWaypoint = 0;

  public static bool gameOver = false;

  void Start()
  {
    player1MoveText = GameObject.Find("Player1MoveText");
    player2MoveText = GameObject.Find("Player2MoveText");

    player1 = GameObject.Find("Player1");
    player2 = GameObject.Find("Player2");

    player1.GetComponent<FollowThePath>().moveAllowed = false;
    player2.GetComponent<FollowThePath>().moveAllowed = false;

    player1MoveText.gameObject.SetActive(true);
    player2MoveText.gameObject.SetActive(false);
  }

  // Update is called once per frame
  void Update()
  {
    if(player1.GetComponent<FollowThePath>().waypointIndex > player1StartWaypoint + yutSideThrown)
    {
      player1.GetComponent<FollowThePath>().moveAllowed = false;
      player1MoveText.gameObject.SetActive(false);
      player2MoveText.gameObject.SetActive(true);
      player1StartWaypoint = player1.GetComponent<FollowThePath>().waypointIndex - 1;
    }

    if (player2.GetComponent<FollowThePath>().waypointIndex > player2StartWaypoint + yutSideThrown)
    {
      player2.GetComponent<FollowThePath>().moveAllowed = false;
      player1MoveText.gameObject.SetActive(true);
      player2MoveText.gameObject.SetActive(false);
      player2StartWaypoint = player2.GetComponent<FollowThePath>().waypointIndex - 1;
    }
  }

  public static void MovePlayer(int playerToMove)
  {
    switch (playerToMove)
    {
      case 1:
        player1.GetComponent<FollowThePath>().moveAllowed = true;
        break;
      case 2:
        player2.GetComponent<FollowThePath>().moveAllowed = true;
        break;
    }
  }
}
