using UnityEngine;
using System;
using RanoGame.events;
using RanoGame.file;
using RanoGame.input;

namespace RanoGame
{
    public abstract class GameCodeApp : IDisposable
    {
        public static GameCodeApp s_App;

        public static void EventTrigger(IEventData eventData)
        {
            //Debug.Log("EventTrigger " + eventData);
            s_App.eventManager.Trigger(eventData);
        }

        public static void QueueEvent(IEventData eventData)
        {
            //Debug.Log("QueueEvent " + eventData);
            s_App.eventManager.QueueEvent(eventData);
        }

        public static void QueueEventRT(IEventData eventData)
        {
            //Debug.Log("QueueEventRT " + eventData);
            s_App.eventManager.QueueEventRT(eventData);
        }

        public virtual string VGetGameAppDirectory
        {
            get { return Application.dataPath + "/Resources"; }
            //get { return System.AppDomain.CurrentDomain.BaseDirectory+"\\data"; }
        }

        public ResCache resCache { get; private set; }
        //public ResourceLoadManager resourceLoadManager { get; private set; }
        public EventManager eventManager { get; private set; }
        public BaseGameLogic gameLogic { get; private set; }

        public bool running { get; private set; }
        public bool quitting { get; set; }

        public int BackBufferWidth { get { return Screen.width; } }
        public int BackBufferHeight { get { return Screen.height; } }

        public Vector2 GetMousePos()
        {
            var pos = Input.mousePosition;
            return new Vector2(pos.x, pos.y);
        }

        public bool InitInstance(string[] cmdLineArgs)
        {
            ParseCommandLine();

            resCache = new ResCache(30, new ResourceRawFile(VGetGameAppDirectory));
            if (!resCache.Init()) return false;
            //resourceLoadManager = new ResourceLoadManager(30, new ResourceRawFile());
            //if (!resourceLoadManager.Start()) return false;

            eventManager = new EventManager("GameCodeApp Event Mgr", true);

            gameLogic = VCreateGameAndView();
            running = true;
            return true;
        }

        public abstract string VGameTitle { get; }

        protected abstract BaseGameLogic VCreateGameAndView();

        protected virtual void ParseCommandLine()
        {
        }

        public bool HasModalDialog() { return false; }

        private void safeTickEventManager(uint? maxMillis)
        {
            eventManager.Tick(maxMillis);
        }

        public bool OnUpdateGame(float fTime, float fElapsedTime)
        {
            if (HasModalDialog()) return true;

            if (quitting) return false;

            if (gameLogic != null)
            {
                safeTickEventManager(null);
                gameLogic.VOnUpdate(fTime, fElapsedTime);
            }

            return true;
        }

        public void OnRender(
            float fTime,
            float fElapsedTime
            )
        {
            foreach (var view in gameLogic.gameViews)
            {
                view.VOnRender(fTime, fElapsedTime);
            }

            gameLogic.VRenderDiagnostics();
        }

        private void OnClose()
        {
            if (gameLogic != null)
            {
                gameLogic.Dispose();
                gameLogic = null;
            }

            eventManager = null;
            /*
            if (resCache != null)
            {
                resCache.Dispose();
                resCache = null;
            }
            */
            /*
            if (resourceLoadManager != null)
            {
                resourceLoadManager.Dispose();
                resourceLoadManager = null;
            }
             */
        }

        public virtual void Dispose()
        {
            OnClose();
            s_App = null;
        }
    }
}
