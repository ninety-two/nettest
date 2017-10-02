using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.input
{
    public enum MouseEventType
    {
        LeftButtonDown,
        LeftButtonUp,
        RightButtonDown,
        RightButtonUp,
        MiddleButtonDown,
        MiddleButtonUp,
        MouseMove,
        Wheel,
        Over,
        Out,
        Click,
        RightClick,
        MiddleClick,
    }

    public class MouseEvent
    {
        public MouseEventType type { get; private set; }
        public int LocalX { get; private set; }
        public int LocalY { get; private set; }
        public int ScreenX { get; private set; }
        public int ScreenY { get; private set; }
        public int wheel { get; private set; }

        public MouseEvent(MouseEventType type, int LocalX, int LocalY, int ScreenX, int ScreenY, int wheel)
        {
            this.type = type;
            this.LocalX = LocalX;
            this.LocalY = LocalY;
            this.ScreenX = ScreenX;
            this.ScreenY = ScreenY;
            this.wheel = wheel;
        }
    }
}
