using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Xml;
using RanoGame.Utils;

namespace RanoGame.draw
{
    public class TextureAtlasRaw
    {
        public class Part
        {
            public string id;
            public int x, y, w, h;
        }
        public class Part1D : Part
        {
            public enum Style { H, V }

            public Style style;
            public int num;
        }
        public class Part2D : Part
        {
            public enum Style { Z }

            public Style style;
            public int numH, numV;
        }

        public string image { get; private set; }
        public List<Part> part0D { get; private set; }
        public List<Part1D> part1D { get; private set; }
        public List<Part2D> part2D { get; private set; }

        public TextureAtlasRaw(XmlDocument xml)
        {
            part0D = new List<Part>();
            part1D = new List<Part1D>();
            part2D = new List<Part2D>();

            foreach (XmlNode atlasNode in xml.SelectNodes("atlas"))
            {
                image = XmlUtil.GetAttribute(atlasNode, "image");
                if (image == null)
                {
                    UnityEngine.Debug.Log("TextureAtlas Error:" + "image" + "属性が存在していません。");
                }

                foreach (XmlNode node in atlasNode.ChildNodes)
                {
                    switch (node.Name.ToLower())
                    {
                        case "part":
                            {
                                var part = new Part();

                                try
                                {
                                    ReadPartBase(part, node);
                                    part0D.Add(part);
                                }
                                catch (Exception e)
                                {
                                    UnityEngine.Debug.Log("TextureAtlas Error:" + node.Name + " id " + (part.id != null ? part.id : "#unknown") + "," + e.Message);
                                }
                            }
                            break;
                        case "part1d":
                            {
                                var part = new Part1D();

                                try
                                {
                                    ReadPartBase(part, node);
                                    string sStyle = XmlUtil.GetAttribute(node, "style");
                                    switch (sStyle.ToLower())
                                    {
                                        case "h":
                                            part.style = Part1D.Style.H;
                                            break;
                                        case "v":
                                            part.style = Part1D.Style.V;
                                            break;
                                        default:
                                            throw new Exception(part.id);
                                    }
                                    part.num = XmlUtil.GetAttributeInt(node, "num", 1);
                                    part1D.Add(part);
                                }
                                catch (Exception e)
                                {
                                    UnityEngine.Debug.Log("TextureAtlas Error:" + node.Name + " id " + (part.id != null ? part.id : "#unknown") + "," + e.Message);
                                }
                            }
                            break;
                        case "part2d":
                            {
                                var part = new Part2D();

                                try
                                {
                                    ReadPartBase(part, node);
                                    string sStyle = XmlUtil.GetAttribute(node, "style");
                                    switch (sStyle.ToLower())
                                    {
                                        case "z":
                                            part.style = Part2D.Style.Z;
                                            break;
                                        default:
                                            throw new Exception(part.id);
                                    }
                                    part.numH = XmlUtil.GetAttributeInt(node, "numH", 1);
                                    part.numV = XmlUtil.GetAttributeInt(node, "numV", 1);
                                    part2D.Add(part);
                                }
                                catch (Exception e)
                                {
                                    UnityEngine.Debug.Log("TextureAtlas Error:" + node.Name + " id " + (part.id != null ? part.id : "#unknown") + "," + e.Message);
                                }
                            }
                            break;
                    }
                }
            }
        }

        void ReadPartBase(Part part, XmlNode node)
        {
            part.id = XmlUtil.GetAttribute(node, "name");
            part.x = XmlUtil.GetAttributeInt(node, "x", 0);
            part.y = XmlUtil.GetAttributeInt(node, "y", 0);
            part.w = XmlUtil.GetAttributeInt(node, "w", 0);
            part.h = XmlUtil.GetAttributeInt(node, "h", 0);
        }
    }
}
