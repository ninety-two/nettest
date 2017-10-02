using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.input
{
    public interface IMouseHandler
    {
        bool OnLButtonDown(int x, int y);
        bool OnLButtonUp(int x, int y);
        bool OnRButtonDown(int x, int y);
        bool OnRButtonUp(int x, int y);
        bool OnMButtonDown(int x, int y);
        bool OnMButtonUp(int x, int y);
        bool OnMouseMove(int x, int y);
        bool OnMouseWheel(int x, int y,int wheel);
    }
}
