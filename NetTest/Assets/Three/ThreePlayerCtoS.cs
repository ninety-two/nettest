using System;
using UnityEngine;
using Three.Events;

namespace Three
{
    [RequireComponent(typeof(ThreePlayer))]
    public class ThreePlayerCtoS : MonoBehaviour,
        TextEvent.Interface,
        RequestSetStoneEvent.Interface
    {
        void ToServer<T>(T e)
        {
            var threePlayer = GetComponent<ThreePlayer>();
            DebugView.AddTextLine("ctos "+enabled);
            threePlayer.ToServer(e);
        }

        public void OnRecieve(TextEvent e) { ToServer(e); }

        public void OnRecieve(RequestSetStoneEvent e) { ToServer(e); }
    }
}
