using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.file
{
    public class ResHandle
    {
        public Resource resource { get; private set; }
        public byte[] buffer { get; private set; }
        public long size
        {
            get { return (buffer != null ? buffer.Length : 0); }
        }

        public virtual bool VLoad(IResourceFile resFile)
        {
            buffer = new byte[resFile.GetResourceSize(resource)];
            return resFile.ReadResource(buffer, resource);
        }

        public ResHandle(Resource resource) { this.resource = resource; }
    }
}
