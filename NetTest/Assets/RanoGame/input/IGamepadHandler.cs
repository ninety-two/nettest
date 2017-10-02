using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.input
{
    [Flags]
    public enum DirectionFlags
    {
        None=0,
        Up=1,
        Down=2,
        Left=4,
        Right=8,

        UpLeft = Up | Left,
        UpRight = Up | Right,
        DownLeft = Down | Left,
        DownRight = Down | Right,
    }

    public enum ButtonId:int
    {
        A, B, C,
        X, Y, Z,
        L1, L2, L3,
        R1, R2, R3,
        Start, Select,
        Home,

        Last,// NumButtons

        Circle = A,
        Cross = B,
        Square = X,
        Triangle = Y,
        L = L1,
        R = R1,
    }

    public interface IGamepadHandler
    {
        bool OnTrigger(bool bLeft,float fPressure);
        bool OnButtonDown(ButtonId buttonId, int nPressure);
        bool OnButtonUp(ButtonId buttonId);
        bool OnDirectionalPad(DirectionFlags directionFlags);
        bool OnThumbstick(int stickNo,float x,float y);
    }
}
