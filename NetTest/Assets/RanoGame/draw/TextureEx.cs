using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.draw
{
    public class TextureEx
    {
        public Texture2D texture;
        public Rect? rect;// 画像の一部を切り取る。nullなら画像全体。

        public float Width
        {
            get { return rect.HasValue ? rect.Value.width : (texture != null ? texture.width : 0); }
        }
		public float Height
        {
            get { return rect.HasValue ? rect.Value.height : (texture != null ? texture.height : 0); }
        }

        public Rect GetBounds()
        {
            if (rect.HasValue) return rect.Value;
            return new Rect(0, 0, Width, Height);
        }


        public TextureEx(Texture2D texture, Rect? rect = null)
        {
            this.texture = texture;
            this.rect = rect;
        }

        public TextureEx(Texture2D texture, int x, int y, int w, int h)
        {
            this.texture = texture;
            this.rect = new Rect(x, y, w, h);
        }
    }
}
