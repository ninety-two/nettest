using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RanoGameUnity.Events;

namespace Three.Events
{
    public class NetworkEvent : BaseEventData<NetworkEvent>
    {
        public enum Type
        {
            None,
            Disconnected,
        }
        Type type = Type.None;

        public NetworkEvent(Type type)
        {
            this.type = type;
        }
    }

    public interface IThreeEvent
    {
        void QueueEvent();
    }

    [Serializable]
    public class BaseThreeEvent<T> : BaseEventData<T>, IThreeEvent
        where T : BaseThreeEvent<T>
    {
        public BaseThreeEvent()
        {
        }

        public void QueueEvent()
        {
            EventManager.QueueEvent((T)this);
        }
    }

    [Serializable]
    public class TextEvent : BaseThreeEvent<TextEvent>
    {
        public string text;
        public TextEvent(string text)
        {
            this.text = text;
        }

        public override BaseEventData Clone()
        {
            return new TextEvent(text);
        }
    }

    [Serializable]
    public class RequestGameStart : BaseThreeEvent<RequestGameStart>
    {
        public int[] playerIdList { get; private set; }

        public RequestGameStart(int[] playerIdList)
        {
            this.playerIdList = (int[])playerIdList.Clone();
        }

        public override BaseEventData Clone()
        {
            return new RequestGameStart(playerIdList);
        }
    }

    [Serializable]
    public class GameStartEvent: BaseThreeEvent<GameStartEvent>
    {
        public Board board { get; private set; }

        public int[] playerIdList { get; private set; }
        public StoneType[] order { get; private set; }

        public GameStartEvent(Board board, int[] playerIdList, StoneType[] order)
        {
            this.board = board.Clone();
            this.playerIdList = (int[])playerIdList.Clone();
            this.order = (StoneType[])order.Clone();
        }
    }

    [Serializable]
    public class GameSetEvent : BaseThreeEvent<GameSetEvent>
    {
        public StoneType winner { get; private set; }

        public GameSetEvent(StoneType winner)
        {
            this.winner = winner;
        }
    }

    [Serializable]
    public class RequestSetStoneEvent : BaseThreeEvent<RequestSetStoneEvent>
    {
        public StoneType stoneType { get; private set; }
        public int x { get; private set; }
        public int y { get; private set; }

        public RequestSetStoneEvent(StoneType stoneType, int x, int y)
        {
            this.stoneType = stoneType;
            this.x = x;
            this.y = y;
        }
    }

    [Serializable]
    public class SetStoneEvent : BaseThreeEvent<SetStoneEvent>
    {
        public StoneType stoneType { get; private set; }
        public int x { get; private set; }
        public int y { get; private set; }

        public SetStoneEvent(StoneType stoneType, int x, int y)
        {
            this.stoneType = stoneType;
            this.x = x;
            this.y = y;
        }
    }

    [Serializable]
    public class PhaseStartEvent : BaseThreeEvent<PhaseStartEvent>
    {
        public StoneType phase { get; private set; }

        public PhaseStartEvent(StoneType phase)
        {
            this.phase = phase;
        }
    }
}
