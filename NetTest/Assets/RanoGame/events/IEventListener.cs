using System;
using System.IO;

namespace RanoGame.events
{
    public class EventType
    {
        public EventType(string name,int? oHashedName=null)
        {
            this.Name = name;
            this.HashedName = (oHashedName.HasValue ? oHashedName.Value : name.GetHashCode());
        }

        public string Name { get; private set; }
        public int HashedName { get; private set; }

        public int CompareTo(EventType rhs)
        {
            return Name.CompareTo(rhs.Name);
        }

        public override string ToString()
        {
            return "EventType " + Name + ",";//  +HashedName.ToString();
        }
    }

    public interface IEventData
    {
        EventType Type { get; }
        float TimeStamp { get; }
        void Serialize(BinaryWriter w);

        string ToString();
        IEventData Clone();
    }

    public abstract class BaseEventData : IEventData
    {
        public EventType Type { get; private set; }
        public float TimeStamp { get; private set; }

        public BaseEventData(EventType type, float? timeStamp = null)
        {
            this.Type = type;
            this.TimeStamp = (timeStamp.HasValue ? timeStamp.Value : (System.Environment.TickCount & Int32.MaxValue) / 1000.0f);
        }

        public virtual void Serialize(BinaryWriter w)
        {
            w.Write(Type.Name);
            w.Write(TimeStamp);
        }

        public override string ToString()
        {
            return "EventData " + "time " + TimeStamp + Type.ToString();
        }
        public abstract IEventData Clone();
    }

    public interface IEventListener
    {
        string Name { get; }

        bool HandleEvent(IEventData eventData);
    }

    public class EventSnooper : IEventListener
    {
        public string Name { get { return "snoop"; } }

        public bool HandleEvent(IEventData eventData)
        {
            string sMsg = "Event Snoop : " + eventData.ToString() + "\n";
            Console.Write(sMsg);
            writer.Write(sMsg);

            return false;
        }

        BinaryWriter writer;
        public EventSnooper(BinaryWriter writer)
        {
            this.writer = writer;
        }
    }

    public class RequestNewActorEvent : BaseEventData
    {
        public const string s_EventType = "RequestNewActorEvent";

        public actor.ActorParams actorParams { get; private set; }

        public RequestNewActorEvent(actor.ActorParams actorParams, float? timeStamp = null)
            : base(new EventType(s_EventType), timeStamp)
        {
            this.actorParams = actorParams;
        }

        public override void Serialize(BinaryWriter w)
        {
            base.Serialize(w);
            actorParams.Serialize(w);
        }
        public override IEventData Clone()
        {
            return new RequestNewActorEvent(actorParams, TimeStamp);
        }

        public override string ToString()
        {
            return "EventData " + "time " + TimeStamp + Type.ToString() + "ActorParams " + actorParams.ToString();
        }
    }
    public class CheatCodeEvent : BaseEventData
    {
        public const string s_EventType = "CheatCodeEvent";

        public string code{get;private set;}

        public CheatCodeEvent(string code, float? timeStamp = null)
            : base(new EventType(s_EventType), timeStamp)
        {
            this.code = code;
        }

        public override void Serialize(BinaryWriter w)
        {
            base.Serialize(w);
            w.Write(code);
        }
        public override IEventData Clone()
        {
            return new CheatCodeEvent(code, TimeStamp);
        }

        public override string ToString()
        {
            return "EventData " + "time " + TimeStamp + Type.ToString() + "code " + code;
        }
    }
    public class NewActorEvent : BaseEventData
    {
        public const string s_EventType = "NewActorEvent";

        public actor.ActorParams actorParams { get; private set; }

        public NewActorEvent(actor.ActorParams actorParams, float? timeStamp = null)
            : base(new EventType(s_EventType), timeStamp)
        {
            this.actorParams = actorParams;
        }

        public override void Serialize(BinaryWriter w)
        {
            base.Serialize(w);
            actorParams.Serialize(w);
        }
        public override IEventData Clone()
        {
            return new NewActorEvent(actorParams, TimeStamp);
        }

        public override string ToString()
        {
            return "EventData " + "time " + TimeStamp + Type.ToString() + "ActorParams " + actorParams.ToString();
        }
    }
    public class RemoveActorEvent : BaseEventData
    {
        public const string s_EventType = "RemoveActorEvent";

        public actor.ActorParams actorParams { get; private set; }

        public RemoveActorEvent(actor.ActorParams actorParams, float? timeStamp = null)
            : base(new EventType(s_EventType), timeStamp)
        {
            this.actorParams = actorParams;
        }

        public override void Serialize(BinaryWriter w)
        {
            base.Serialize(w);
            actorParams.Serialize(w);
        }
        public override IEventData Clone()
        {
            return new RemoveActorEvent(actorParams, TimeStamp);
        }

        public override string ToString()
        {
            return "EventData " + "time " + TimeStamp + Type.ToString() + "ActorParams " + actorParams.ToString();
        }
    }
}
