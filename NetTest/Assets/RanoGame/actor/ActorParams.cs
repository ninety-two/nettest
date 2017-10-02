using UnityEngine;
using System;
using System.Collections.Generic;
using System.IO;

namespace RanoGame.actor
{
    public class ActorType
    {
        //public int HashedName{get;private set;}
        public string Name = "";

        public ActorType(string Name)
        {
            this.Name = Name;
            //HashedName=Name.GetHashCode();
        }

        public void Serialize(BinaryWriter w)
        {
            w.Write(Name);
        }

        public int CompareTo(ActorType other)
        {
            return Name.CompareTo(other.Name);
        }

        public static ActorType CreateFromReader(BinaryReader r)
        {
            return new ActorType(r.ReadString());
        }
    }

    public abstract class ActorParams
    {
        public uint? oActorId { get; set; }
        public uint ActorId
        {
            get { return oActorId.Value; }
            set { oActorId = value; }
        }
        public ActorType actorType { get; private set; }

        public ActorParams(ActorType actorType, uint? oActorId = null)
        {
            this.actorType = actorType;
            this.oActorId = oActorId;
        }

        public virtual bool VInit(BinaryReader r)
        {
            if (r.ReadBoolean())
                oActorId = r.ReadUInt32();
            else
                oActorId = null;

            actorType = ActorType.CreateFromReader(r);

            return true;
        }

        public virtual void Serialize(BinaryWriter w)
        {
            w.Write(oActorId.HasValue);
            if (oActorId.HasValue) w.Write(oActorId.Value);
            actorType.Serialize(w);
        }

        public abstract Actor VCreate(BaseGameLogic logic);
        public abstract SceneNode VCreateSceneNode();

        public static List<IActorParamsFactory> s_FactoryList = new List<IActorParamsFactory>();
        public static ActorParams CreateFromStream(BinaryReader r)
        {
            try
            {
                var type = ActorType.CreateFromReader(r);

                ActorParams actorParams = null;
                foreach (var factory in s_FactoryList)
                {
                    actorParams = factory.Create(type);
                    if (actorParams != null) break;
                }

                if (actorParams == null) return null;
                if (!actorParams.VInit(r)) return null;
                return actorParams;
            }
            catch (Exception e)
            {
                UnityEngine.Debug.Log(e);
                return null;
            }
        }
    }

    public interface IActorParamsFactory
    {
        ActorParams Create(ActorType type);
    }

    public class Actor : MonoBehaviour
    {
        public uint? oId { get; private set; }
        public ActorParams Params { get; private set; }

        public virtual void Init(ActorParams Params, uint id)
        {
            this.Params = Params;
            this.oId = id;

            s_IdToActor[id] = this;
        }

        void OnDestroy()
        {
            if (oId.HasValue)
            {
                s_IdToActor.Remove(oId.Value);
            }
        }

        static Dictionary<uint, Actor> s_IdToActor = new Dictionary<uint, Actor>();

        public static Actor FindActor(uint id)
        {
            Actor actor;
            if (!s_IdToActor.TryGetValue(id, out actor))
            {
                return null;
            }
            else
            {
                return actor;
            }
        }
    }

    public class SceneNode : MonoBehaviour
    {
        public uint? Id { get; private set; }

        public Vector3 WorldPos
        {
            get { return transform.position; }
            set { transform.position = value; }
        }
        public float X
        {
            get { return WorldPos.x * 100; }
            set { Pos2D = new Vector2(value, Y); }
        }
        public float Y
        {
            get { return -WorldPos.y * 100; }
            set { Pos2D = new Vector2(X, value); }
        }
        public float Z
        {
            get { return WorldPos.z; }
            set { WorldPos = new Vector3(WorldPos.x, WorldPos.y, value); }
        }
        public Vector2 Pos2D
        {
            get { return new Vector2(X, Y); }
            set { WorldPos = new Vector3(value.x / 100.0f, -value.y / 100.0f, Z); }
        }
        public static Vector2 P2W(Vector2 src)
        {
            return new Vector2(src.x / 100.0f, -src.y / 100.0f);
        }
        public static Vector2 W2P(Vector2 src)
        {
            return new Vector2(src.x * 100.0f, -src.y * 100.0f);
        }

        protected void Init(uint id)
        {
            this.Id = id;
            s_IdToNode[Id.Value] = this;
        }

        public event Action<SceneNode> OnRemoved=delegate { };

        void OnDestroy()
        {
            if (this.Id.HasValue)
                s_IdToNode.Remove(this.Id.Value);

            OnRemoved(this);
        }

        public void Kill()
        {
            Destroy(gameObject);
        }

        static Dictionary<uint, SceneNode> s_IdToNode = new Dictionary<uint, SceneNode>();
        public static SceneNode FindSceneNode(uint id)
        {
            SceneNode node;
            if (!s_IdToNode.TryGetValue(id, out node))
            {
                return null;
            }
            else
            {
                return node;
            }
        }
    }
}
