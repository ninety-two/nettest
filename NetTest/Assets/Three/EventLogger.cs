using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Three
{
    [RequireComponent(typeof(RanoGameUnity.Events.EventManager))]
    public class EventLogger : MonoBehaviour
    {
        void OnTrigger(RanoGameUnity.Events.BaseEventData e)
        {
            if(enabled)
                DebugView.AddTextLine("trigger: "+e);
        }
        void OnQueue(RanoGameUnity.Events.BaseEventData e)
        {
            if (enabled)
                DebugView.AddTextLine("queue: " + e);
        }

        // Use this for initialization
        void Start()
        {
            RanoGameUnity.Events.EventManager.singleton.OnQueue += OnQueue;
            RanoGameUnity.Events.EventManager.singleton.OnTrigger += OnTrigger;
        }

        // Update is called once per frame
        void Update()
        {

        }
    }
}
