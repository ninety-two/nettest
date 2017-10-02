using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Three
{
    public static class ThreeUtil
    {
        public static byte[] Serialize(object value)
        {
            var formatter = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();
            using (var stream = new System.IO.MemoryStream())
            {
                formatter.Serialize(stream, value);
                stream.Position = 0;
                var buffer = new byte[stream.Length];
                stream.Read(buffer, 0, buffer.Length);

                return buffer;
            }
        }

        public static object Deserialize(byte[] buffer)
        {
            var formatter = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();
            using (var stream = new System.IO.MemoryStream())
            {
                stream.Write(buffer, 0, buffer.Length);
                stream.Position = 0;

                return formatter.Deserialize(stream);
            }
        }

        public static T Deserialize<T>(byte[] buffer)
        {
            return (T)Deserialize(buffer);
        }
    }
}
