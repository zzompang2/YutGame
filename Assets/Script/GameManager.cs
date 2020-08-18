//using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
  public GameObject[] wayBlocks;
  public Text resultText;
  public static Text whosTurnText;

  public static GameObject throwBtn;

  //private static GameObject pieceA1, pieceB1;

  public static List<int> yutResultList = new List<int>();
  //public static int player1StartWaypoint = 0;
  //public static int player2StartWaypoint = 0;

  //public static bool isThrowStep = true;
  public static bool gameOver = false;

  string[] yutResultText = new string[] { "도", "개", "걸", "윷", "모" };

  [SerializeField]
  static int whichTeamTurn;
  [SerializeField]
  GameObject selectedPiece;
  [SerializeField]
  GameObject selectedBlock;

  void Start()
  {
    throwBtn = GameObject.Find("ThrowBtn");
    whosTurnText = GameObject.Find("whosTurnText").GetComponent<Text>();

    //pieceA1 = GameObject.Find("PieceA1");
    //pieceB1 = GameObject.Find("PieceB1");

    //pieceA1.GetComponent<PieceMove1>().moveAllowed = false;
    //pieceB1.GetComponent<PieceMove1>().moveAllowed = false;

    whichTeamTurn = 1;
    whosTurnText.text = "RED팀";
  }

  void Update()
  {
    if (Input.GetMouseButtonUp(0) && yutResultList.Count != 0)
    {
      // 충돌이 감지된 영역
      RaycastHit raycast;
      // 마우스 포이트 근처 좌표를 만들기
      Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

      // 마우스 근처에 오브젝트 있을 경우
      if (Physics.Raycast(ray.origin, ray.direction * 10, out raycast))
      {
        // [1] piece를 선택한 경우
        if (raycast.collider.gameObject.tag == "Piece" && raycast.collider.gameObject.GetComponent<PieceScript>().teamNumber == whichTeamTurn)
        {
          // 기존 칠해진 블럭들과 말 초기화
          ClearBlockColor();
          if (selectedPiece != null) selectedPiece.GetComponent<PieceScript>().CleanColor();

          // 만약 같은 말을 선택한 거라면 선택 취소
          if (selectedPiece == raycast.collider.gameObject)
          {
            selectedPiece = null;
          }
          else
          {
            selectedPiece = raycast.collider.gameObject;
            Debug.Log("target piece: " + selectedPiece.gameObject.name);
          }
        }
        // [2] block을 선택한 경우
        else if(raycast.collider.gameObject.tag == "WayBlock")
        {
          selectedBlock = raycast.collider.gameObject;
          if (selectedBlock.GetComponent<BlockScript>().isMovable)
          {
            Debug.Log("이동 가능한 블럭을 선택했습니다.");
            MovePiece();
            ClearBlockColor();
            selectedPiece.GetComponent<PieceScript>().CleanColor();
            selectedPiece = null;

            // 모든 행동이 끝난 경우: 차례 넘기기
            if (yutResultList.Count == 0 && YutCheckZone.remainedThrow == 0)
            {
              //isThrowStep = true;
              NextRound();
            }
          }
          else Debug.Log("이동 불가능한 블럭입니다.");
        }
        // [3] piece/block 외의 것을 선택한 경우: 초기화
        else
        {
          ClearBlockColor();
          if (selectedPiece != null) selectedPiece.GetComponent<PieceScript>().CleanColor();
          selectedPiece = null;
        }
      }

      // 선택된 piece가 있는 경우, 이동 가능한 블럭 색칠하기
      if (selectedPiece != null)
      {
        selectedPiece.GetComponent<Renderer>().material.color = Color.cyan;
        //Debug.Log("target is clicked!");
        int curWaypoint = selectedPiece.gameObject.GetComponent<PieceScript>().curWaypoint;

        foreach (int result in yutResultList)
        {
          wayBlocks[curWaypoint + result].GetComponent<Renderer>().material.color = Color.green;
          wayBlocks[curWaypoint + result].GetComponent<BlockScript>().isMovable = true;
          wayBlocks[curWaypoint + result].GetComponent<BlockScript>().yutResult = result;
        }
      }
    }
    SetResultText();
  }
    //if(pieceA1.GetComponent<PieceMove1>().curWaypoint > player1StartWaypoint + yutResultList[0])
    //{
    //  //pieceA1.GetComponent<PieceMove1>().moveAllowed = false;
    //  player1MoveText.gameObject.SetActive(false);
    //  player2MoveText.gameObject.SetActive(true);
    //  player1StartWaypoint = pieceA1.GetComponent<PieceMove1>().curWaypoint - 1;
    //}

    //if (pieceB1.GetComponent<PieceMove1>().curWaypoint > player2StartWaypoint + yutResultList[0])
    //{
    //  //pieceB1.GetComponent<PieceMove1>().moveAllowed = false;
    //  player1MoveText.gameObject.SetActive(true);
    //  player2MoveText.gameObject.SetActive(false);
    //  player2StartWaypoint = pieceB1.GetComponent<PieceMove1>().curWaypoint - 1;
    //}

  public void SetResultText()
  {
    resultText.text = "";
    foreach (int result in yutResultList)
    {
      resultText.text += yutResultText[result - 1] + " "; // 결과 화면에 띄우기
    }
  }
  void ClearBlockColor()
  {
    foreach (GameObject block in wayBlocks)
    {
      block.GetComponent<Renderer>().material.color = Color.gray;
      block.GetComponent<BlockScript>().isMovable = false;
    }
  }

  public void MovePiece()
  {
    int yutResult = selectedBlock.GetComponent<BlockScript>().yutResult;

    wayBlocks[selectedPiece.GetComponent<PieceScript>().curWaypoint].GetComponent<BlockScript>().whosOn = null;
    selectedPiece.GetComponent<PieceScript>().Move(yutResult);

    PieceScript whosOn = selectedBlock.GetComponent<BlockScript>().whosOn;

    // block 위에 아무 말도 없는 경우
    if (whosOn == null) 
      selectedBlock.GetComponent<BlockScript>().whosOn = selectedPiece.GetComponent<PieceScript>();
    // block 위에 상대팀 말이 있는 경우
    else if (whosOn.teamNumber != whichTeamTurn)
    {
      Debug.Log("상대팀 말 잡음!");
      whosOn.InitPosition();
      selectedBlock.GetComponent<BlockScript>().whosOn = selectedPiece.GetComponent<PieceScript>();
    }
    // block 위에 같은팀 말이 있는 경우
    else
    {
      Debug.Log("같은 팀 말 위에 업힘!");
    }

    yutResultList.Remove(yutResult); // Remove(): List<T>에서 처음 발견되는 특정 개체를 제거합니다.
    //SetResultText();
  }

  public static void NextRound()
  {
    yutResultList = new List<int>();
    whichTeamTurn *= -1;
    throwBtn.SetActive(true);
    YutCheckZone.remainedThrow = 1;
    whosTurnText.text = (whichTeamTurn == 1 ? "RED팀" : "BLUE팀");
  }
}
