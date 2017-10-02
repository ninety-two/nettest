using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.file
{
    public interface IResourceFile : IDisposable
    {
        bool Open();
        long GetResourceSize(Resource r);
        bool ReadResource(byte[] buffer, Resource r);
    }
}
