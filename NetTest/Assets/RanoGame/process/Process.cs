using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using RanoGame;

namespace RanoGame.process
{
    public class Process : IProcess
    {
        protected int m_nType = 0;
        protected bool m_bKill = false;
        protected bool m_bActive = true;
        protected bool m_bPaused = false;
        protected bool m_bInitialUpdate = true;
        protected IProcess m_Next = null;

        private ProcessStateFlags m_ProcessFlags = 0;

        public virtual event Action<IProcess> OnAttached;
        public virtual event Action<IProcess> OnDetached;

        public Process(int type = 0, uint order = 0)
        {
            m_nType = type;
        }

        public bool isDead() { return m_bKill; }
        public int type
        {
            get { return m_nType; }
            set { m_nType = value; }
        }
        public bool isActive() { return m_bActive; }
        public void SetActive(bool value) { m_bActive = value; }
        public bool isAttached()
        {
            return (m_ProcessFlags & ProcessStateFlags.Attached) == ProcessStateFlags.Attached;
        }

        public void SetAttached(bool wantAttached)
        {
            if (wantAttached)
            {
                m_ProcessFlags |= ProcessStateFlags.Attached;
                if (OnAttached != null) OnAttached(this);

                if (m_bInitialUpdate)
                {
                    VOnInitialize();
                    m_bInitialUpdate = false;
                }
            }
            else
            {
                m_ProcessFlags &= ~ProcessStateFlags.Attached;
                //UnityEngine.Debug.Log("detach " + ToString());

                if (OnDetached != null)
                    OnDetached(this);
            }
        }
        public bool isPaused() { return m_bPaused; }
        public bool isInitialized() { return !m_bInitialUpdate; }
        public IProcess GetNext() { return m_Next; }
        public IProcess SetNext(IProcess next)
        {
            m_Next = next;
            return next;
        }

        public virtual void VOnUpdate(float fElapsedTime) { }
        public virtual void VOnInitialize() { }
        public virtual void VKill() { m_bKill = true; }
        public virtual void VTogglePause() { m_bPaused = !m_bPaused; }
    }
}
