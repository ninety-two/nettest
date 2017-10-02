using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame
{
    [Flags]
    public enum ProcessStateFlags
    {
        Attached,
    }

    public interface IProcess
    {
        event Action<IProcess> OnAttached;
        event Action<IProcess> OnDetached;

        bool isDead();
        int type{get;set;}
        bool isActive();
        void SetActive(bool value);
        bool isAttached();
        void SetAttached(bool wantAttached);
        bool isPaused();
        bool isInitialized();
        IProcess GetNext();
        IProcess SetNext(IProcess next);

        void VOnUpdate(float fElapsedTime);
        void VOnInitialize();
        void VKill();
        void VTogglePause();
    }

    public static class ProcessExtensions
    {
        public static void SetNextToTail(this IProcess lhs,IProcess next)
        {
            var p = lhs;
            while (p.GetNext() != null) p = p.GetNext();
            p.SetNext(next);
        }
    }

    public class ProcessSequenceSetter
    {
        public IProcess firstProcess { get; private set; }
        public IProcess lastProcess { get; private set; }

        public ProcessSequenceSetter(IProcess process=null)
        {
            if (process != null) SetNext(process);
        }

        public ProcessSequenceSetter SetNext(IProcess nextProcess)
        {
            if (firstProcess == null)
            {
                firstProcess = nextProcess;
            }
            else
            {
                lastProcess.SetNext(nextProcess);
            }

            lastProcess = nextProcess;
            while (lastProcess.GetNext() != null)
                lastProcess = lastProcess.GetNext();

            return this;
        }
    }
}
