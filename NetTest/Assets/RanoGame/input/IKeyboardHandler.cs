using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.input
{
    public interface IKeyboardHandler
    {
        bool OnKeyDown(KeyCode kcode);
		bool OnKeyUp(KeyCode kcode);
    }
}
