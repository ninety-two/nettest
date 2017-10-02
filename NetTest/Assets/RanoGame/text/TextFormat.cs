using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.text
{
    public class TextFormat
    {
        public uint color = 0xffffffff;
        public float size = 1.0f;

        public TextFormat(
            uint color = 0xffffffff,
            float size = 1.0f
            )
        {
            this.color = color;
            this.size = size;
        }
    }
}
