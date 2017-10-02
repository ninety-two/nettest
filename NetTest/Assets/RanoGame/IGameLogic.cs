using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame
{
    public interface IGameLogic : IDisposable
    {
        void VOnUpdate(float fTime, float fElapsedTime);
    }
}
