using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RanoGameUnity
{
    public class SequencialEventProcess : MonoBehaviour
    {
        abstract class EventQueueItem
        {
            public abstract IEnumerator Call();
        }

        class EventQueueItem<T> : EventQueueItem
        {
            T data;
            System.Func<T, IEnumerator> handler;

            public EventQueueItem(T data, System.Func<T, IEnumerator> handler)
            {
                this.data = data;
                this.handler = handler;
            }

            public override IEnumerator Call()
            {
                return handler(data);
            }
        }
        Queue<EventQueueItem> eventItemQueue = new Queue<EventQueueItem>();
        IEnumerator eventRoutine = null;

        public bool Resume()
        {
            if (eventRoutine != null)
            {
                StartCoroutine(eventRoutine);
                return true;
            }
            else
            {
                return false;
            }
        }

        public bool Stop()
        {
            if (eventRoutine != null)
            {
                StopCoroutine(eventRoutine);
                return true;
            }
            else
            {
                return false;
            }
        }

        public bool EnqueueEvent<T>(T e, System.Func<T, IEnumerator> handler)
        {
            var item = new EventQueueItem<T>(e, handler);
            eventItemQueue.Enqueue(item);

            if (eventRoutine == null)
            {
                eventRoutine = ExecuteEventQueue();
                StartCoroutine(eventRoutine);
                return true;
            }
            else
            {
                return false;
            }
        }

        IEnumerator ExecuteEventQueue()
        {
            while (eventItemQueue.Count != 0)
            {
                var item = eventItemQueue.Dequeue();
                var routine = item.Call();
                if (routine != null)
                {
                    while (routine.MoveNext())
                    {
                        yield return routine.Current;
                    }
                }
            }

            eventRoutine = null;
        }

        // Use this for initialization
        void Start()
        {
        }

        // Update is called once per frame
        void Update()
        {
        }
    }
}
