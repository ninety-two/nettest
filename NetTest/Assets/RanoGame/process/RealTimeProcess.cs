using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;

namespace RanoGame.process
{
    class RealTimeProcess : Process
    {
        public Thread thread { get; private set; }
        public ThreadStart action { get; private set; }

        public RealTimeProcess(ThreadStart action)
        {
            this.action = action;
        }

        public override void VKill()
        {
            thread.Abort();
            thread = null;

            base.VKill();
        }
        public override void VTogglePause()
        {
            throw new Exception("this is not Supported.");
        }

        public override void VOnInitialize()
        {
            this.thread = new Thread(action);
            this.thread.Start();
        }

        public override void VOnUpdate(float fElapsedTime)
        {
            if (thread != null || (thread.ThreadState != ThreadState.Running))
            {
                VKill();
            }
        }
    }
}
