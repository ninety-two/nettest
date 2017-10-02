using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Xml;

namespace RanoGame.Utils
{
    public static class XmlUtil
    {
        public static string GetTextValue(XmlNode node)
        {
            if (node != null
                && node.FirstChild != null
                && node.FirstChild.Name == "#text")
                return node.FirstChild.Value ?? "";
            else
                return null;
        }

        public static string GetAttribute(XmlNode xml, string name)
        {
            if (xml == null || xml.Attributes == null)
                return null;

            XmlNode attr = xml.Attributes.GetNamedItem(name);
            if (attr == null)
                return null;

            return attr.Value;
        }

        static T? GetAttributeParseN<T>(XmlNode xml, string name, Func<string, T> parse)
            where T : struct
        {
            string sAttr = GetAttribute(xml, name);
            if (sAttr == null)
                return null;

            try
            {
                return parse(sAttr);
            }
            catch (Exception e)
            {
                UnityEngine.Debug.Log("XmlUtil.GetAttributeParseN():" + e.ToString());
                return null;
            }
        }

        static T GetAttributeParse<T>(XmlNode xml, string name, Func<string, T> parse, T? oDefault = null)
            where T:struct
        {
            var oValue = GetAttributeParseN(xml, name, parse);
            if (oValue.HasValue)
                return oValue.Value;

            if (oDefault.HasValue)
                return oDefault.Value;

            throw new ArgumentException(name);
        }

        static int IntParse(string s)
        {
            return int.Parse(s);
        }

        static uint UIntParse(string s)
        {
            return uint.Parse(s);
        }

        static float FloatParse(string s)
        {
            return float.Parse(s);
        }

        public static int GetAttributeInt(XmlNode xml, string name, int? oDefault = null)
        {
            return GetAttributeParse(xml, name, IntParse, oDefault);
        }
        public static uint GetAttributeUInt(XmlNode xml, string name, uint? oDefault = null)
        {
            return GetAttributeParse(xml, name, UIntParse, oDefault);
        }
        public static float GetAttributeFloat(XmlNode xml, string name, float? oDefault = null)
        {
            return GetAttributeParse(xml, name, FloatParse, oDefault);
        }

        public static int? GetAttributeIntN(XmlNode xml, string name)
        {
            return GetAttributeParseN<int>(xml, name, IntParse);
        }
        public static uint? GetAttributeUIntN(XmlNode xml, string name)
        {
            return GetAttributeParseN<uint>(xml, name, UIntParse);
        }
        public static float? GetAttributeFloatN(XmlNode xml, string name)
        {
            return GetAttributeParseN<float>(xml, name, FloatParse);
        }

        public static string GetAttribute(XmlNode xml, string name, string sDefault)
        {
            return GetAttribute(xml, name) ?? sDefault;
        }
    }
}
