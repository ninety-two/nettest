using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.events
{
    // イベントハンドラを登録し、呼び出す。
    public class EventHandlerManager
    {
        interface IEventHandlerCall
        {
            bool HandleEvent(IEventData eventData);
        }

        // イベントの型に応じたハンドラを呼び出す。
        class EventHandlerCall<T> : IEventHandlerCall
            where T : class, IEventData
        {
            public Func<T, bool> handler { get; private set; }

            public EventHandlerCall(Func<T, bool> handler)
            {
                this.handler = handler;
            }

            public bool HandleEvent(IEventData eventData)
            {
                var e = eventData as T;
                if (e == null) return false;

                return handler(e);
            }
        }

        Dictionary<string, List<IEventHandlerCall>> eventHandlerDictionary = new Dictionary<string, List<IEventHandlerCall>>();

        public string Name
        {
            get;
            private set;
        }

        public EventHandlerManager(string name)
        {
            this.Name = name;
        }

        // イベントハンドラの登録。
        // @return: 同じ種類のイベントがまだ登録されていなかったかどうか。
        public bool AddEventHandler<T>(string type, Func<T, bool> handler)
            where T : class, IEventData
        {
            var handlerCall = new EventHandlerCall<T>(handler);

            List<IEventHandlerCall> handlerList;
            if (eventHandlerDictionary.TryGetValue(type, out handlerList))
            {
                handlerList.Add(handlerCall);
                return false;
            }
            else
            {
                handlerList = new List<IEventHandlerCall>();
                handlerList.Add(handlerCall);

                eventHandlerDictionary.Add(type, handlerList);
                return true;
            }
        }

        // イベントハンドラの削除。
        // @return: 同じ種類のイベントがもう登録されていないかどうか。
        public bool RemoveEventHandler<T>(string type, Func<T, bool> handler)
            where T : class, IEventData
        {
            List<IEventHandlerCall> handlerList;
            if (eventHandlerDictionary.TryGetValue(type, out handlerList))
            {
                for (int i = 0; i < handlerList.Count; ++i)
                {
                    var handlerCall = handlerList[i] as EventHandlerCall<T>;
                    if (handlerCall != null && handlerCall.handler == handler)
                    {
                        handlerList.RemoveAt(i);
                        break;
                    }
                }

                if (handlerList.Count == 0)
                {
                    eventHandlerDictionary.Remove(type);
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }

        // イベントハンドラの呼び出し。
        public bool HandleEvent(IEventData eventData)
        {
            List<IEventHandlerCall> handlerList;
            if (eventHandlerDictionary.TryGetValue(eventData.Type.Name, out handlerList))
            {
                handlerList = new List<IEventHandlerCall>(handlerList);
                foreach (var handler in handlerList)
                {
                    if (handler.HandleEvent(eventData)) return true;
                }

                return false;
            }
            else
            {
                return false;
            }
        }
    }
}
