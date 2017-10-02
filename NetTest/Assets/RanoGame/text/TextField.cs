using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using RanoGame.draw;

namespace RanoGame.text
{
    public class TextField :MonoBehaviour// ScreenElement
    {
        public uint color32
        {
            set
            {
                color = new Color(
                    ((value >> 16) & 0xff) / 255.0f,
                    ((value >> 8) & 0xff) / 255.0f,
                    ((value >> 0) & 0xff) / 255.0f,
                    ((value >> 24) & 0xff) / 255.0f
                    );
            }
        }

		public Vector3 ScreenPos
		{
            get { return Camera.main.WorldToScreenPoint(transform.position); }
			set { transform.position = Camera.main.ScreenToWorldPoint(value); }
		}
		public float X
		{
			get { return ScreenPos.x; }
			set { ScreenPos = new Vector3(value,Y,Z); }
		}
		public float Y
		{
			get { return ScreenPos.y; }
			set { ScreenPos = new Vector3(X,value,Z); }
		}
		public float Z
		{
			get { return ScreenPos.z; }
			set { ScreenPos = new Vector3(X,Y,value); }
		}

		public int Width
        {
			get { return (int)GetComponent<GUIText>().GetScreenRect().width;}
            set { }
        }
        public int Height
        {
			get { return (int)GetComponent<GUIText>().GetScreenRect().height;}
			set { }
        }

		void Awake ()
		{
		}

		public static TextField Create(
			Font font,
			float x,
			float y,
			string text,
			int fontSize = 16,
			uint color = 0xffffffff,
			FontStyle fontStyle=FontStyle.Normal,
			int? w = null,
			int? h = null,
			int alignH = -1,
			int alignV = -1
			)
		{
			var go = new GameObject ("TextField");
			var tf = go.AddComponent<TextField> ();
			tf.Init (
				font,
				x,
				y,
				text,
				fontSize,
				color,
				fontStyle,
				w,
				h,
				alignH,
				alignV
				);
			return tf;
		}

		public void Init(TextField src)
		{
			//InitScreenElem (0,false);

			if(GetComponent<GUIText>()==null)
				gameObject.AddComponent<GUIText> ();

			this.font = src.font;
			this.text = src.text;
			this.fontSize=src.fontSize;
			this.fontStyle = fontStyle;
			this.color = src.color;
			this.transform.position = src.transform.position;
		}

		public void Init(
            Font font,
			float x,
			float y,
            string text,
			int fontSize = 16,
            uint color = 0xffffffff,
			FontStyle fontStyle=FontStyle.Normal,
			int? w = null,
            int? h = null,
            int alignH = -1,
            int alignV = -1
            )
        {
			//InitScreenElem (0,false);

			if(GetComponent<GUIText>()==null)
				gameObject.AddComponent<GUIText> ();

			if(font!=null)this.font = font;
			this.text = text;
			this.fontSize=fontSize;
			this.fontStyle = fontStyle;
			this.color32 = color;

			var textSize = MeasureString();

            float dx = x;
			float dy = y;

            if (alignH == 0)
            {
                dx = (int)(w.HasValue ? x + (w.Value - textSize.x) / 2 : x - textSize.x / 2);
            }
            else if (alignH > 0)
            {
                dx = (int)(w.HasValue ? x + (w.Value - textSize.x) : x - textSize.x);
            }

            if (alignV == 0)
            {
                dy = (int)(h.HasValue ? y + (h.Value - textSize.y) / 2.0f : y - textSize.y / 2.0f);
            }
            else if (alignV > 0)
            {
                dy = (int)(h.HasValue ? y + (h.Value - textSize.y) : y - textSize.y);
            }

			ScreenPos=new Vector3(dx,dy,0);
        }

		public void Kill()
		{
			Destroy (gameObject);
		}

        public Vector2 MeasureString()
        {
			var rect=GetComponent<GUIText>().GetScreenRect();
			return new Vector2 (rect.width, rect.height);
        }
        public float textWidth
		{
			get { return MeasureString().x; }
		}
        public float textHeight
		{
			get { return MeasureString().y; }
		}

		public string text
		{
			get{return GetComponent<GUIText>().text;}
			set{GetComponent<GUIText>().text=value;}
		}

		public Color color
		{
			get{return GetComponent<GUIText>().color;}
			set{GetComponent<GUIText>().color=value;}
		}

		public Font font
		{
			get{return GetComponent<GUIText>().font;}
			set{GetComponent<GUIText>().font=value;}
		}

		public int fontSize
		{
			get{return GetComponent<GUIText>().fontSize;}
			set{GetComponent<GUIText>().fontSize=value;}
		}

		public FontStyle fontStyle
		{
			get{return GetComponent<GUIText>().fontStyle;}
			set{GetComponent<GUIText>().fontStyle=value;}
		}
		/*
		public GUIText guiText
		{
			get {
				return gameObject.GetComponent<GUIText> ();
			}
		}
		*/
    }
}
