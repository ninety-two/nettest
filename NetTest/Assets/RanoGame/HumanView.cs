using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using RanoGame.draw;
using RanoGame.process;
using RanoGame.input;
using RanoGame.events;
using RanoGame.Utils;

namespace RanoGame
{
    public class ControllerManager
    {
        public bool GetButtonState(int index, ButtonId buttonId)
        {
            return false;
        }
    }

    public class HumanView : IGameView
    {
        public virtual void Dispose()
        {
        }

        public Camera camera
        {
            get
            {
                return Camera.main;
            }
        }

        public Vector3 cameraPos
        {
            get
            {
                return camera.transform.position;
            }
            set
            {
                camera.transform.position = value;
            }
        }
        public Vector2 cameraPos2D
        {
            get
            {
                var screenPos = camera.WorldToScreenPoint(cameraPos);
                return new Vector2(screenPos.x, screenPos.y);
            }
            set
            {
                var worldPos = camera.ScreenToWorldPoint(new Vector3(value.x, value.y, cameraPos.z));
                cameraPos = new Vector3(worldPos.x, worldPos.y, cameraPos.z);
            }
        }

        public virtual bool LeftButton
        {
            get { return Input.GetMouseButton(0); }
        }
        public virtual bool RightButton
        {
            get { return Input.GetMouseButton(1); }
        }

        ControllerManager m_ControllerManager = new ControllerManager();
        public ControllerManager controllerManager { get { return m_ControllerManager; } }

        ProcessManager m_ProcessManager = new ProcessManager();

        public GameViewType viewType { get { return GameViewType.Human; } }
        public uint viewId { get; private set; }

        public Texture2D whitePixelTexture { get; private set; }

        public void safeAddListener(IEventListener listener, string type)
        {
            GameCodeApp.s_App.eventManager.AddListener(listener, new RanoGame.events.EventType(type));
        }
        public void safeDelListener(IEventListener listener, string type)
        {
            GameCodeApp.s_App.eventManager.DelListener(listener, new RanoGame.events.EventType(type));
        }
        public virtual void VOnAttach(uint id)
        {
            viewId = id;
        }
        public virtual void VOnDetach()
        {
        }

        public virtual void VAddProcess(IProcess process)
        {
            if (process != null) m_ProcessManager.Attach(process);
        }

        public virtual void VOnUpdate(float fElapsedTime)
        {
            m_ProcessManager.UpdateProcesses(fElapsedTime);
        }
        public void VOnRender(float fTime, float fElapsedTime)
        {
        }

        public HumanView()
        {
            this.whitePixelTexture = new Texture2D(1, 1);
            this.whitePixelTexture.SetPixel(0, 0, new Color(1, 1, 1, 1));
            this.whitePixelTexture.Apply();
        }

        IMouseHandler m_MouseHandler = null;
        IKeyboardHandler m_KeyboardHandler = null;

        bool InitAudio()
        {
            return false;
        }

        string m_mouseCursor = null;
        public string mouseCursor
        {
            get { return m_mouseCursor; }
            set
            {
                m_mouseCursor = value;
            }
        }

        public Point? cursorPos { get; private set; }

        public void OnKeyEvent(KeyboardEvent e)
        {
            switch (e.keyCode)
            {
                case KeyCode.F1:
                    {
                        string name = "InputCheatCode";
                        if (GameObject.Find(name) == null)
                        {
                            var go = new GameObject(name);
                            go.AddComponent<InputCheatCode>();
                        }
                        break;
                    }
            }

            //if (m_RootScreenElement.OnKeyEventDescendant(e)) return;

            if (m_KeyboardHandler != null)
            {
                switch (e.type)
                {
                    case KeyboardEvent.Type.KeyDown:
                        m_KeyboardHandler.OnKeyDown(e.keyCode);
                        break;
                    case KeyboardEvent.Type.KeyUp:
                        m_KeyboardHandler.OnKeyUp(e.keyCode);
                        break;
                }
            }
        }

        public void OnMouseEvent(
            MouseEventType type,
            int cursorX,
            int cursorY,
            int wheel
            )
        {
            if (m_MouseHandler != null)
            {
                switch (type)
                {
                    case MouseEventType.LeftButtonDown:
                        m_MouseHandler.OnLButtonDown(cursorX, cursorY);
                        break;
                    case MouseEventType.LeftButtonUp:
                        m_MouseHandler.OnLButtonUp(cursorX, cursorY);
                        break;
                    case MouseEventType.RightButtonDown:
                        m_MouseHandler.OnRButtonDown(cursorX, cursorY);
                        break;
                    case MouseEventType.RightButtonUp:
                        m_MouseHandler.OnRButtonUp(cursorX, cursorY);
                        break;
                    case MouseEventType.MiddleButtonDown:
                        m_MouseHandler.OnMButtonDown(cursorX, cursorY);
                        break;
                    case MouseEventType.MiddleButtonUp:
                        m_MouseHandler.OnMButtonUp(cursorX, cursorY);
                        break;
                    case MouseEventType.MouseMove:
                        m_MouseHandler.OnMouseMove(cursorX, cursorY);
                        break;
                    case MouseEventType.Wheel:
                        m_MouseHandler.OnMouseWheel(cursorX, cursorY, wheel);
                        break;
                }
            }
        }

    }

    public static partial class ScreenElementExtension
    {
    }
}
