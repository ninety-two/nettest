using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using RanoGame.process;
using RanoGame.actor;
using RanoGame.events;

namespace RanoGame
{
    public class BaseGameLogic : IGameLogic
    {
        List<IGameView> m_GameViews = new List<IGameView>();
        public IEnumerable<IGameView> gameViews { get { return m_GameViews; } }
        ProcessManager m_ProcessManager = new ProcessManager();

        public IEnumerable<HumanView> SelectHumanViews()
        {
            var humanViews = new List<HumanView>();

            foreach (var view in gameViews)
            {
                if (view.viewType == GameViewType.Human)
                    humanViews.Add((HumanView)view);
            }

            return humanViews;
        }
        public HumanView SelectHumanView()
        {
            foreach (var view in gameViews)
            {
                if (view.viewType == GameViewType.Human)
                    return (HumanView)view;
            }

            return null;
        }

        uint m_LastActorId = 0;

        uint GetNewActorId()
        {
            return ++m_LastActorId;
        }
        public Actor CreateActor(ActorParams actorParams)
        {
            actorParams.ActorId = GetNewActorId();
            return actorParams.VCreate(this);
        }

        public void safeAddListener(IEventListener listener, string type)
        {
            GameCodeApp.s_App.eventManager.AddListener(listener, new EventType(type));
        }
        public void safeDelListener(IEventListener listener, string type)
        {
            GameCodeApp.s_App.eventManager.DelListener(listener, new EventType(type));
        }

        public BaseGameLogic()
        {
        }

        public virtual void Dispose()
        {
            while (m_GameViews.Count != 0)
            {
                m_GameViews[m_GameViews.Count - 1].Dispose();
                m_GameViews.RemoveAt(m_GameViews.Count - 1);
            }
        }

        uint lastViewId = 0;// ビューのID
        public virtual void VAddView(IGameView view)
        {
            m_GameViews.Add(view);
            view.VOnAttach(++lastViewId);
        }

        public virtual void VRemoveView(IGameView view)
        {
            m_GameViews.Remove(view);
            view.VOnDetach();
        }

        public virtual void VAddProcess(Process process)
        {
            if (process != null) m_ProcessManager.Attach(process);
        }

        public virtual void VOnUpdate(float fTime, float fElapsedTime)
        {
            m_ProcessManager.UpdateProcesses(fElapsedTime);

            foreach (var view in gameViews)
            {
                view.VOnUpdate(fElapsedTime);
            }
        }


        public void VRenderDiagnostics()
        {
        }
    }
}
