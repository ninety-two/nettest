using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.file
{
    public interface ILoader
    {
        Resource resource { get; }
        ResHandle handle { get; }
        void Load(Resource r);
        //event Action<ILoader> OnComplete;
        //event Action<ILoader> OnError;
    }
}
