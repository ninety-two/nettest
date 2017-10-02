using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

namespace RanoGameUnity.Events
{
    [Serializable]
    public abstract class BaseEventData
    {
        public virtual BaseEventData Clone()
        {
            var buffer = Serialize(this);
            return (BaseEventData)Deserialize(buffer);
        }

        static byte[] Serialize(object value)
        {
            var formatter = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();
            using (var stream = new System.IO.MemoryStream())
            {
                formatter.Serialize(stream, value);
                stream.Position = 0;
                var buffer = new byte[stream.Length];
                stream.Read(buffer, 0, buffer.Length);

                return buffer;
            }
        }

        static object Deserialize(byte[] buffer)
        {
            var formatter = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();
            using (var stream = new System.IO.MemoryStream())
            {
                stream.Write(buffer, 0, buffer.Length);
                stream.Position = 0;

                return formatter.Deserialize(stream);
            }
        }
    }

    [Serializable]
    public abstract class BaseEventData<T> : BaseEventData
        where T : BaseEventData<T>
    {
        public interface Interface : IEventSystemHandler
        {
            void OnRecieve(T e);
        }

        public ExecuteEvents.EventFunction<Interface> GetFunctor()
        {
            return (reciever, y) => { reciever.OnRecieve((T)this); };
        }
    }

    public class EventManager : MonoBehaviour
    {
        public static EventManager singleton { get; private set; }

        public Action<BaseEventData> OnTrigger = delegate { };
        public Action<BaseEventData> OnQueue = delegate { };

        void Awake()
        {
            if (singleton == null)
            {
                singleton = this;
                DontDestroyOnLoad(gameObject);
            }
            else
            {
                Debug.Log("double EventManager");
                Destroy(gameObject);
            }
        }

        void OnDestroy()
        {
            if (singleton == this)
                singleton = null;
        }

        HashSet<GameObject> eventTargetSet = new HashSet<GameObject>();

        public static void AddEventTarget(GameObject target)
        {
            if (singleton != null)
                singleton.eventTargetSet.Add(target);
            else
                Debug.Log("FirstSceneObject.AddEventTarget Instance is null");
        }

        public static void RemoveEventTarget(GameObject target)
        {
            if (singleton != null)
                singleton.eventTargetSet.Remove(target);
            else
                Debug.Log("FirstSceneObject.RemoveEventTarget Instance is null");
        }
        void _TriggerEvent<T>(T e)
            where T : BaseEventData<T>
        {
            OnTrigger(e);

            foreach (var target in eventTargetSet)
            {
                ExecuteEvents.Execute(target, null, e.GetFunctor());
            }
        }
        /*
        void _TriggerEvent<T>(ExecuteEvents.EventFunction<T> functor)
            where T : IEventSystemHandler
        {
            foreach (var target in eventTargetSet)
                ExecuteEvents.Execute(target, null, functor);
        }
        */

        abstract class EventQueueItem
        {
            public int delay = 0;

            public EventQueueItem(int delay)
            {
                this.delay = delay;
            }

            public abstract void Trigger();
        }

        class EventQueueItem<T> : EventQueueItem
            where T : BaseEventData<T>
        {
            T eventData;
            Action<T> trigger;

            public EventQueueItem(T eventData, Action<T> trigger, int delay)
                : base(delay)
            {
                this.eventData = eventData;
                this.trigger = trigger;
            }

            public override void Trigger()
            {
                trigger(eventData);
            }
        }

        Queue<EventQueueItem> eventQueue = new Queue<EventQueueItem>();

        void _QueueEvent<T>(T e, int delay)
            where T : BaseEventData<T>
        {
            OnQueue(e);

            var item = new EventQueueItem<T>(e, _TriggerEvent, delay);
            eventQueue.Enqueue(item);
        }

        void FlashEventQueue()
        {
            var tempQueue = new Queue<EventQueueItem>(eventQueue);
            eventQueue.Clear();

            foreach (var item in tempQueue)
            {
                if (item.delay > 0)
                {
                    --item.delay;
                    eventQueue.Enqueue(item);
                }
                else
                {
                    item.Trigger();
                }
            }
        }

        public static void TriggerEvent<T>(T e)
            where T : BaseEventData<T>
        {
            if (singleton != null)
                singleton._TriggerEvent(e);
            else
                Debug.Log("FirstSceneObject.TriggerEvent Instance is null");
        }

        public static void QueueEvent<T>(T e, int delay = 0)
            where T : BaseEventData<T>
        {
            if (singleton != null)
                singleton._QueueEvent(e, delay);
            else
                Debug.Log("EventManager.QueueEvent Instance is null");
        }

        // Use this for initialization
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {
            FlashEventQueue();
        }
    }
}
