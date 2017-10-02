using UnityEngine;

namespace RanoGame
{
    public class InputCheatCode : MonoBehaviour
    {

        // Use this for initialization
        void Start()
        {
        }

        // Update is called once per frame
        void Update()
        {
        }

        int width = 300;
        int height = 150;
        public event System.Action<string> InputCodeHandler = delegate { };
        public event System.Action<MonoBehaviour> DestroyHandler = delegate { };

        void OnDestroy()
        {
            DestroyHandler(this);
        }

        void OnGUI()
        {
            var rect = new Rect(
                (Camera.main.pixelWidth - width) / 2,
                (Camera.main.pixelHeight - height) / 2,
                width,
                height
                );
            GUI.ModalWindow(-1, rect, windowFunc, "Input Cheat Code");
        }

        public string text = "";

        void windowFunc(int id)
        {
            /*
            string sTextAreaName = "CodeTextArea";
            GUI.SetNextControlName(sTextAreaName);
            */
            var TextAreaRect = new Rect(20, 30, width - 40, height / 2 - 20);
            text = GUI.TextArea(TextAreaRect, text);
            if (text.IndexOf('\n') >= 0)
            {
                text.Replace("\n", "");

                InputCodeHandler(text);

                if (!Input.GetKey(KeyCode.LeftControl)
                    && !Input.GetKey(KeyCode.RightControl))
                {
                    Destroy(gameObject);
                }
            }

            var buttuonAreaRect = new Rect(20, height / 2 + 20, width - 40, height / 2);
            GUILayout.BeginArea(buttuonAreaRect);
            if (GUILayout.Button("OK"))
            {
                InputCodeHandler(text);
                Destroy(gameObject);
            }

            if (GUILayout.Button("Cancel"))
            {
                Destroy(gameObject);
            }
            GUILayout.EndArea();

            //GUI.FocusControl(sTextAreaName);
        }
    }
}
