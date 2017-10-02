using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RanoGameUnity.Events;
using Three.Events;

namespace Three
{
    public class ThreeLogic : MonoBehaviour,
        RequestGameStart.Interface,
        RequestSetStoneEvent.Interface
    {
        Board board;

        int[] playerIdList;
        StoneType[] phaseOrder = null;
        int phaseOrderIndex = 0;

        StoneType currentPhase
        {
            get { return phaseOrder[phaseOrderIndex]; }
        }

        private void Awake()
        {
            DebugView.AddTextLine("awake logic");
            if (ThreeNetworkManager.singleton.connectType == ThreeNetworkManager.ConnectType.Client)
            {
                gameObject.SetActive(false);
            }
        }

        public void OnRecieve(RequestGameStart e)
        {
            playerIdList = (int[])e.playerIdList.Clone();
            board = new Board(StoneType.None);

            phaseOrder = new StoneType[] { StoneType.Circle, StoneType.Cross };
            phaseOrderIndex = 0;

            EventManager.QueueEvent(new GameStartEvent(board, playerIdList,phaseOrder));
            EventManager.QueueEvent(new PhaseStartEvent(currentPhase));
        }

        public void OnRecieve(RequestSetStoneEvent e)
        {
            board.SetCell(e.x, e.y, e.stoneType);
            EventManager.QueueEvent(new SetStoneEvent(e.stoneType, e.x, e.y));

            var oWinner = board.JudgeGameSet();
            if (oWinner.HasValue)
            {
                EventManager.QueueEvent(new GameSetEvent(oWinner.Value));
            }
            else
            {
                ++phaseOrderIndex;
                phaseOrderIndex %= phaseOrder.Length;

                EventManager.QueueEvent(new PhaseStartEvent(currentPhase));
            }
        }

        // Use this for initialization
        void Start()
        {
            EventManager.AddEventTarget(gameObject);
        }

        // Update is called once per frame
        void Update()
        {

        }
    }
}
