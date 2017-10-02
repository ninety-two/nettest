using System;
using UnityEngine;
using Three.Events;

namespace Three
{
    [RequireComponent(typeof(ThreePlayer))]
    public class ThreePlayerStoC : MonoBehaviour,
        TextEvent.Interface,
        SetStoneEvent.Interface,
        PhaseStartEvent.Interface,
        GameStartEvent.Interface,
        GameSetEvent.Interface
    {
        void ToClient<T>(T e)
        {
            var threePlayer = GetComponent<ThreePlayer>();
            DebugView.AddTextLine("stoc " + enabled);
            threePlayer.ToClient(e);
        }

        public void OnRecieve(TextEvent e) { ToClient(e); }

        public void OnRecieve(SetStoneEvent e) { ToClient(e); }
        public void OnRecieve(PhaseStartEvent e) { ToClient(e); }
        public void OnRecieve(GameStartEvent e) { ToClient(e); }
        public void OnRecieve(GameSetEvent e){ToClient(e);}
    }
}
