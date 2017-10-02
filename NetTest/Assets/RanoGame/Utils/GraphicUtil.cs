using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Xml;
using RanoGame.draw;
using RanoGame.file;

namespace RanoGame.Utils
{
    public static class GraphicUtil
    {
        public static  Vector3 cameraPos3D
        {
            get { return Camera.current.WorldToScreenPoint(Camera.current.transform.position); }
            set { Camera.current.transform.position = Camera.current.ScreenToWorldPoint(value); }
        }
        public static Vector2 cameraPos2D
        {
            get
            {
                var pos = cameraPos3D;
                return new Vector2(pos.x, pos.y);
            }
            set
            {
                cameraPos3D = new Vector3(value.x, value.y, cameraPos3D.z);
            }
        }

        public class SpriteContainer
        {
			Sprite[] spriteArray;
            Dictionary<string, Sprite> nameToSprite=new Dictionary<string,Sprite>();
			
			public SpriteContainer(string path){
				spriteArray = Resources.LoadAll<Sprite> (path);

                foreach(var s in spriteArray){
                    nameToSprite[s.name] = s;
                }
			}
			
			public Sprite GetSprite(string name){
                Sprite s;
                if (!nameToSprite.TryGetValue(name, out s)) return null;
                return s;
                /*
				return System.Array.Find<Sprite>(
					spriteArray,
					(s)=> s.name.Equals(name)
					);
                 */
			}
		}

		public static TextureAtlasEx LoadTextureAtlasEx(string path)
		{
            try
            {
				var hXml=(XmlResHandle)GameCodeApp.s_App.resCache.GetHandle(new XmlResource(path));

				var atlasRaw = new TextureAtlasRaw(hXml.xml);
                var nYen = path.LastIndexOf('\\');
                var dirPath = (nYen < 0 ? "" : path.Substring(0, nYen + 1));

				var hImage=(TextureResHandle)GameCodeApp.s_App.resCache.GetHandle(new TextureResource(dirPath + atlasRaw.image));
				return new TextureAtlasEx(atlasRaw, hImage.texture);
            }
            catch (Exception e)
            {
                Debug.Log(e);
                return null;
            }
		}
		/*
        public static TextureAtlasEx LoadTextureAtlasEx(string path)
        {
            var xmlHandle = (XmlResHandle)GameCodeApp.s_App.resCache.GetHandle(new XmlResource(path));
            if (xmlHandle == null) return null;

            var atlasRaw = new TextureAtlasRaw(xmlHandle.Xml);
            var nYen = path.LastIndexOf('\\');
            var dirPath = (nYen < 0 ? "" : path.Substring(0, nYen + 1));

            var imageHandle = (TextureResHandle)GameCodeApp.s_App.resCache.GetHandle(new TextureResource(dirPath + atlasRaw.image));
            if (imageHandle == null) return null;

            return new TextureAtlasEx(atlasRaw, imageHandle.texture);
        }
		*/

        public static Color ColorFromUInt(uint color)
        {
            return new Color(
                ((color >> 16) & 0xff) / 255.0f,
                ((color >> 8) & 0xff) / 255.0f,
                ((color >> 0) & 0xff) / 255.0f,
                ((color >> 24) & 0xff) / 255.0f
                );
        }

		public static void DrawSprite(Sprite sprite,float x,float y){
			var rect = sprite.textureRect;
			float tex_w = sprite.texture.width;
			float tex_h = sprite.texture.height;
			
			GUI.DrawTextureWithTexCoords(
				new Rect(x,y,sprite.textureRect.width,sprite.textureRect.height),
				sprite.texture,
				new Rect(rect.x/tex_w,rect.y/tex_h,rect.width/tex_w,rect.height/tex_h)
				);
		}

		public static void RenderImage(
			Texture texture,
			Rect dstRect,
			Rect? textureRect,
			Color? color = null
			)
		{
			if (textureRect.HasValue) {
				GUI.DrawTextureWithTexCoords (dstRect,texture,textureRect.Value);
			}
			else {
				GUI.DrawTexture (dstRect,texture);
			}
		}
		
		public static void RenderImageLT(
			float x,
			float y,
			Texture texture,
			Rect? textureRect,
			Color? color = null
			)
		{
            if (color.HasValue)
            {
                if (Event.current.type == EventType.Repaint)
                {
                    if (!textureRect.HasValue)
                    {
                        textureRect = new Rect(0, 0, texture.width, texture.height);
                    }

                    var dstRect = new Rect(x, y, textureRect.Value.width, textureRect.Value.height);
                    Graphics.DrawTexture(dstRect, texture, textureRect.Value, 0, 0, 0, 0, color.Value);
                }
            }
            else
            {
                if (textureRect.HasValue)
                {
                    var dstRect = new Rect(x, y, textureRect.Value.width, textureRect.Value.height);
                    GUI.DrawTextureWithTexCoords(dstRect, texture, textureRect.Value);
                }
                else
                {
                    var dstRect = new Rect(x, y, texture.width, texture.height);
                    GUI.DrawTexture(dstRect, texture);
                }
            }
		}
		public static void RenderImageLT(
			float x,
			float y,
			Sprite texture,
			Color? color = null
			)
		{
			RenderImageLT(x, y, texture.texture, texture.rect, color);
		}
		
		public static void RenderImage(
			float x,
			float y,
			int? oWidth,
			int? oHeight,
			int alignH,
			int alignV,
			Texture texture,
			Rect? srcRect,
			Color? color = null
			)
		{
			float w = (oWidth.HasValue ? oWidth.Value : srcRect.HasValue?srcRect.Value.width:texture.width);
			float h = (oHeight.HasValue ? oHeight.Value : srcRect.HasValue?srcRect.Value.height:texture.height);
			
			float left = x;
			float top = y;
			
			if (alignH == 0)
			{
				left = x - w / 2.0f;
			}
			else if (alignH > 0)
			{
				left = x - w;
			}
			
			if (alignV == 0)
			{
				top = y - h / 2.0f;
			}
			else if (alignV > 0)
			{
				top = y - h;
			}
			
			var dstRect =new Rect (left, top, w, h);
			RenderImage(texture,dstRect,srcRect);
			//(color.HasValue ? color.Value : Color.White));
		}
		
		public static void RenderImage(
			float x,
			float y,
			int? oWidth,
			int? oHeight,
			int alignH,
			int alignV,
			Sprite texture,
			Color? color = null
			)
		{
			RenderImage(x, y, oWidth, oHeight, alignH, alignV, texture.texture, texture.textureRect, color);
		}
	}
}
