using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Three
{
    public class DebugView : MonoBehaviour
    {
        public static DebugView singleton { get; private set; }

        public bool enable = true;

        // Use this for initialization
        void Start()
        {
            if (singleton != null)
            {
                Destroy(gameObject);
                return;
            }

            singleton = this;
            DontDestroyOnLoad(gameObject);
        }

        // Update is called once per frame
        void Update()
        {

        }

        public static void AddTextLine(string s)
        {
            if (text != "") { text += "\n"; }
            text += s;

            Debug.Log(s);
        }

        static string text = "";
        string input= "";
        private void OnGUI()
        {
            if (!enable)
                return;

            input =GUI.TextArea(new Rect(360,0,260,32), input);
            if (input.IndexOf('\n') >= 0)
            {
                input = input.Replace("\n", "");
                RanoGameUnity.Events.EventManager.QueueEvent(new Three.Events.TextEvent(input));
                input = "";
            }

            GUI.TextArea(new Rect(360, 40, 260, 430), text);
        }
    }
}
