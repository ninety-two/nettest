using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace RanoGame.file
{
    public class TextureResHandle : BaseItemResHandle<Texture2D>
    {
        public Texture2D texture { get { return item; } }

        static Texture2D CreateTexture(byte[] buffer)
        {
            try
            {
                var tex = new Texture2D(0, 0);
                tex.LoadImage(buffer);

                return tex;
                //return Texture2D.FromStream(GameCodeApp.s_App.graphics, new MemoryStream(buffer));
            }
            catch (Exception e)
            {
                UnityEngine.Debug.Log("TextureResHandle.CreateTexture():" + e.ToString());
                return null;
            }
        }

        public TextureResHandle(TextureResource resource)
            : base(CreateTexture, resource)
        {
        }
    }

    public class TextureResource : Resource
    {
        public TextureResource(string name) : base(name) { }

        public override ResHandle VCreateHandle(byte[] buffer, uint size, ResCache resCache)
        {
            return new TextureResHandle(this);
        }
    }
}
