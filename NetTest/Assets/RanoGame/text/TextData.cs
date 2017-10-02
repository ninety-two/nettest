using System;
using System.IO;

namespace RanoGame.text
{
    [System.Serializable]
    public class TextData
    {
        public string text = "";
        public string ruby = "";
        public uint color = 0xffffffff;
        public int fontSize = 1;

        public TextData(
            string text = "",
            string ruby = "",
            uint color = 0xffffffff,
            int fontSize = 20
            )
        {
            this.text = text;
            this.ruby = ruby;
            this.color = color;
            this.fontSize = fontSize;
        }

        public TextData Clone()
        {
            return new TextData(text, ruby, color, fontSize);
        }

        public void Serialize(Stream s)
        {
            var formatter = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();
            formatter.Serialize(s, this);
        }
        public static TextData Deserialize(Stream s)
        {
            var formatter = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();
            return (TextData)formatter.Deserialize(s);
        }
        public void Serialize(BinaryWriter o)
        {
            o.Write(text);
            o.Write(ruby);
            o.Write(color);
            o.Write(fontSize);
        }
        public void Unserialize(BinaryReader i)
        {
            text = i.ReadString();
            ruby = i.ReadString();
            color = i.ReadUInt32();
            fontSize = i.ReadInt32();
        }
    }
}
