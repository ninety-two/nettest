using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Xml;
using System.IO;

namespace RanoGame.file
{
    public class XmlResHandle : BaseItemResHandle<XmlDocument>
    {
        public XmlDocument xml { get { return item; } }

        static XmlDocument CreateXmlDocument(byte[] buffer)
        {
            try
            {
                var doc = new XmlDocument();
                doc.Load(new MemoryStream(buffer));
                return doc;
            }
            catch (Exception e)
            {
                UnityEngine.Debug.Log("XmlResHandle.CreateXmlDocument():" + e);
                return null;
            }
        }

        public XmlResHandle(XmlResource resource)
            : base(CreateXmlDocument, resource)
        {
        }
    }

    public class XmlResource : Resource
    {
        public XmlResource(string name) : base(name) { }

        public override ResHandle VCreateHandle(byte[] buffer, uint size, ResCache resCache)
        {
            return new XmlResHandle(this);
        }
    }
}
