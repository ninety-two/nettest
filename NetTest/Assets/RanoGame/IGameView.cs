using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame
{
    public enum GameViewType
    {
        Human,
        AI,
    }

    public interface IGameView : IDisposable
    {
        GameViewType viewType { get; }
        uint viewId { get; }
        void VOnUpdate(float fElapsedTime);
        void VOnRender(float fTime, float fElapsedTime);
        void VOnAttach(uint id);
        void VOnDetach();
    }
}
