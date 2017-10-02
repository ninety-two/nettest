using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.process
{
    public class ProcessManager
    {
        public void Attach(IProcess process)
        {
            m_Processes.Add(process);
            process.SetAttached(true);
        }
        private void Detach(int index)
        {
            var process = m_Processes[index];
            m_Processes.RemoveAt(index);
            process.SetAttached(false);
        }
        public bool HasProcesses()
        {
            return (0 != m_Processes.Count);
        }
        public bool isProcessActive(int type)
        {
            foreach (var process in m_Processes)
            {
                if (process.type == type
                    && (!process.isDead() || null != process.GetNext())) return true;
            }

            return false;
        }

        public void UpdateProcesses(float fElapsedTime)
        {
            for (int i = 0; i < m_Processes.Count; ++i)
            {
                var process = m_Processes[i];

                if (process.isDead())
                {
                    var next = process.GetNext();
                    process.SetNext(null);

                    Detach(i--);

                    if (null != next)
                    {
                        Attach(next);
                    }
                }
                else
                {
                    if (process.isActive() && !process.isPaused())
                    {
                        process.VOnUpdate(fElapsedTime);
                    }
                }
            }
        }

        protected List<IProcess> m_Processes = new List<IProcess>();

        public ProcessManager() { }
    }
}
