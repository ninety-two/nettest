using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.process
{
    public class WaitProcess : Process
    {
        public enum TimeUnit
        {
            Frame,
            MilliSecond,
            Second,
        }

        protected TimeUnit timeUnit = TimeUnit.MilliSecond;
        protected float m_Start = 0;
        protected float m_Stop = 0;

        static int GetCurrentTime()
        {
            return System.Environment.TickCount & Int32.MaxValue;
        }

        public WaitProcess(
            Process next,
            float count,
            TimeUnit timeUnit = TimeUnit.MilliSecond
            )
            : base()
        {
            SetNext(next);

            this.timeUnit = timeUnit;
            this.m_Start = 0;
            this.m_Stop = 0;

            switch (timeUnit)
            {
                case TimeUnit.Frame:
                    this.m_Start = 0;
                    this.m_Stop = count;
                    break;
                case TimeUnit.MilliSecond:
                    this.m_Start = 0;
                    this.m_Stop = count;
                    break;
                case TimeUnit.Second:
                    this.m_Start = 0;
                    this.m_Stop = count*1000;
                    break;
            }
        }

        public override void VOnUpdate(float fElapsedTime)
        {
            if (isActive())
            {
                switch (timeUnit)
                {
                    case TimeUnit.Frame:
                        m_Start += 1;

                        if (m_Start >= m_Stop)
                            VKill();

                        break;
                    case TimeUnit.MilliSecond:
                    case TimeUnit.Second:
                        if (this.m_Stop <= GetCurrentTime() - m_Start)
                            VKill();

                        break;
                    default:
                        VKill();
                        break;
                }
            }
        }

        public override void VOnInitialize()
        {
            switch (timeUnit)
            {
                case TimeUnit.MilliSecond:
                case TimeUnit.Second:
                    this.m_Start = GetCurrentTime();
                    break;
            }
        }
    }
}
