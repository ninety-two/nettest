using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.input
{
    public enum GamepadEventType
    {
        Trigger,
        ButtonDown,
        ButtonUp,
        DirectionalPad,
        Thumbstick,
    }

    public class GamepadEvent
    {

        public GamepadEventType type { get; private set; }
        public ButtonId button { get; private set; }
        public DirectionFlags direction { get; private set; }

        public GamepadEvent(GamepadEventType type, ButtonId button, DirectionFlags direction)
        {
            this.type = type;
            this.button = button;
            this.direction = direction;
        }
    }
}
