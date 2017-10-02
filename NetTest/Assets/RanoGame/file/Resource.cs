using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.file
{
    public class Resource
    {
        public string name { get; private set; }

        public Resource(string name)
        {
            this.name = name;
        }

        public virtual ResHandle VCreateHandle(
            byte[] buffer,
            uint size,
            ResCache resCache
            )
        {
            return new ResHandle(this);
        }
    }
}
