using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.input
{
    public class KeyboardEvent
    {
        public enum Type
        {
            KeyDown,
            KeyUp,
        }

        public Type type { get; private set; }
        public KeyCode keyCode { get; private set; }

        public KeyboardEvent(Type type, KeyCode keyCode)
        {
            this.type = type;
            this.keyCode = keyCode;
        }
    }
}
