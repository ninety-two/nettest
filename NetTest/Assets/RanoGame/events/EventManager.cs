using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.events
{
    public interface IEventManager
    {
        string Name { get; }
        bool SetAsGlobal { get; }

        bool AddListener(IEventListener handler, EventType type);
        bool DelListener(IEventListener handler, EventType type);
        bool Trigger(IEventData type);
        bool QueueEvent(IEventData type);
        bool AbortEvent(EventType type, bool allOfType = false);

        bool Tick(uint? maxMillis = null);
        bool ValidateType(EventType type);
    }

    // スレッドセーフキュー
    public class ConcurrentQueue<T>
    {
        Queue<T> queue = new Queue<T>();
        object queueLock = new object();

        public void Push(T eventData)
        {
            lock (queueLock)
            {
                queue.Enqueue(eventData);
            }
        }

        public bool isEmpty()
        {
            lock (queueLock)
            {
                return (queue.Count() == 0);
            }
        }

        public T TryPop()
        {
            lock (queueLock)
            {
                if (queue.Count() == 0) return default(T);
                return queue.Dequeue();
            }
        }
    }

    public class EventManager : IEventManager
    {
        const string WildcardEventTypeName = "wildcardevent";
        static EventType s_WildcardEventType = new EventType(WildcardEventTypeName,0);
        public static EventType WildcardEventType { get { return s_WildcardEventType; } }

        public string Name { get; private set; }
        public bool SetAsGlobal { get; private set; }

        public EventManager(string name, bool setAsGlobal)
        {
            this.Name = name;
            this.SetAsGlobal = setAsGlobal;

            this.eventQueue = new LinkedList<IEventData>[numQueues];
            for (int i = 0; i < this.eventQueue.Length; ++i)
            {
                this.eventQueue[i] = new LinkedList<IEventData>();
            }
        }

        public List<IEventListener> GetEventListener(EventType type)
        {
            List<IEventListener> listeners;
            if (!registry.TryGetValue(type.HashedName, out listeners)) return null;
            return new List<IEventListener>(listeners);
        }

        public List<EventType> GetEventType()
        {
            return new List<EventType>(eventTypeSet);
        }

        HashSet<EventType> eventTypeSet = new HashSet<EventType>();
        Dictionary<int, List<IEventListener>> registry = new Dictionary<int, List<IEventListener>>();

        const int numQueues = 2;
        LinkedList<IEventData>[] eventQueue;
        int activeQueueIndex = 0;
        ConcurrentQueue<IEventData> realtimeEventQueue = new ConcurrentQueue<IEventData>();
        LinkedList<IEventData> activeQueue
        {
            get { return eventQueue[activeQueueIndex]; }
        }

        public bool AddListener(IEventListener handler, EventType type)
        {
            if (!ValidateType(type)) return false;

            List<IEventListener> listenerList = null;
            if (!registry.TryGetValue(type.HashedName, out listenerList))
            {
                registry[type.HashedName] = listenerList = new List<IEventListener>();
            }

            foreach (var listener in listenerList)
            {
                if (listener == handler) return false;
            }

            listenerList.Add(handler);
            return true;
        }

        public bool DelListener(IEventListener handler, EventType type)
        {
            if (!ValidateType(type)) return false;

            List<IEventListener> listenerList = null;
            if (!registry.TryGetValue(type.HashedName, out listenerList)) return false;

            return (listenerList.Remove(handler));
        }
        public bool Trigger(IEventData eventData)
        {
            if (!ValidateType(eventData.Type)) return false;

            List<IEventListener> listenerList;

            if (registry.TryGetValue(0, out listenerList))
            {
                foreach (var listener in listenerList)
                {
                    listener.HandleEvent(eventData);
                }
            }

            if (!registry.TryGetValue(eventData.Type.HashedName, out listenerList)) return false;

            bool processed = false;
            foreach (var listener in listenerList)
            {
                if (listener.HandleEvent(eventData)) processed = true;
            }

            return processed;
        }
        public bool QueueEvent(IEventData eventData)
        {
            if (!ValidateType(eventData.Type)) return false;

            if (!registry.ContainsKey(eventData.Type.HashedName) && !registry.ContainsKey(0)) return false;

            activeQueue.AddLast(eventData);
            return true;
        }
        public void QueueEventRT(IEventData eventData)
        {
            realtimeEventQueue.Push(eventData);
        }
        public bool AbortEvent(EventType type, bool allOfType = false)
        {
            if (!ValidateType(type))
                return false;

            if (!registry.ContainsKey(type.HashedName))
                return false;

            bool returnCode = false;

            var node = activeQueue.First;
            while (node != null)
            {
                var nextNode = node.Next;

                if (node.Value.Type.Name == type.Name)
                {
                    activeQueue.Remove(node);

                    returnCode = true;
                    if (!allOfType)
                        break;
                }

                node = nextNode;
            }

            return returnCode;
        }

        // uint? maxMillis:nullなら無制限
        public bool Tick(uint? maxMillis = null)
        {
            int startTime = System.Environment.TickCount & Int32.MaxValue;

            IEventData eventData = null;
            while ((eventData = realtimeEventQueue.TryPop()) != null)
            {
                QueueEvent(eventData);
            }

            var processQueue = eventQueue[activeQueueIndex];

            activeQueueIndex = (activeQueueIndex + 1) % eventQueue.Length;
            activeQueue.Clear();

            while (processQueue.Count != 0)
            {
                eventData = processQueue.First.Value;
                processQueue.RemoveFirst();

                List<IEventListener> listenerList;
                if (registry.TryGetValue(0, out listenerList))
                {
                    listenerList = new List<IEventListener>(listenerList);
                    foreach (var listener in listenerList)
                    {
                        listener.HandleEvent(eventData);
                    }
                }

                if (registry.TryGetValue(eventData.Type.HashedName, out listenerList))
                {
                    listenerList = new List<IEventListener>(listenerList);
                    foreach (var listener in listenerList)
                    {
                        if (listener.HandleEvent(eventData)) break;
                    }

                    if (maxMillis.HasValue)
                    {
                        int currentTime = System.Environment.TickCount & Int32.MaxValue;
                        if (currentTime - startTime >= maxMillis.Value) break;
                    }
                }
            }

            if (processQueue.Count == 0) return true;

            while (processQueue.Count != 0)
            {
                eventData = processQueue.Last.Value;
                processQueue.RemoveLast();
                activeQueue.AddFirst(eventData);
            }

            return false;
        }
        public bool ValidateType(EventType type)
        {
            return true;/////////////////////////////////////////////////////////////////////////
            /*
            if (type.Name.Length == 0) return false;

            if (type.HashedName == 0 && type.Name != WildcardEventTypeName) return false;

            if (!eventTypeSet.Contains(type))
            {
                UnityEngine.Debug.Log("Failed validation of an event type; it was probably not registered with the EventManager!");
                return false;
            }

            return true;
             */
        }
    }

    public class RealtimeEventListener : IEventListener
    {
        public ConcurrentQueue<IEventData> realtimeEventQueue = new ConcurrentQueue<IEventData>();

        public string Name { get { return "RealtimeEventListener"; } }

        public bool HandleEvent(IEventData eventData)
        {
            realtimeEventQueue.Push(eventData.Clone());
            return false;
        }
    }
}
