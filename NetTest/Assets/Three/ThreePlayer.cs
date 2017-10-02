using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using RanoGameUnity.Events;

namespace Three
{
    [RequireComponent(typeof(ThreePlayerStoC))]
    [RequireComponent(typeof(ThreePlayerCtoS))]
    public class ThreePlayer : NetworkBehaviour
    {
        [SyncVar]
        public int playerId= 0;

        [Command]
        void CmdToServer(byte[] buffer)
        {
            {
                var e = ThreeUtil.Deserialize(buffer);
                DebugView.AddTextLine("_CmdToServer " + playerId + " " + e);
            }

            if (!isLocalPlayer)
            {
                var e = ThreeUtil.Deserialize(buffer) as Three.Events.IThreeEvent;
                DebugView.AddTextLine("CmdToServer " + playerId + " " + e);
                if (e != null)
                    e.QueueEvent();
            }
        }

        [ClientRpc]
        void RpcToClient(byte[] buffer)
        {
            {
                var e = ThreeUtil.Deserialize(buffer);
                DebugView.AddTextLine("_RpcToClient " + playerId + " " + e);
            }

            if (isLocalPlayer)
            {
                var e = ThreeUtil.Deserialize(buffer) as Three.Events.IThreeEvent;
                DebugView.AddTextLine("RpcToClient " + playerId + " " + e);
                if(e!=null)
                    e.QueueEvent();
            }
        }

        public void ToServer<T>(T e)
        {
            DebugView.AddTextLine("ToServer " + playerId + " " + e);
            var buffer = ThreeUtil.Serialize(e);
            CmdToServer(buffer);
        }

        public void ToClient<T>(T e)
        {
            DebugView.AddTextLine("ToClient " + playerId + " " + e);
            var buffer = ThreeUtil.Serialize(e);
            RpcToClient(buffer);
        }

        private void Awake()
        {
            DontDestroyOnLoad(gameObject);
            _Players.Add(this);

            EventManager.AddEventTarget(gameObject);
        }
        private void OnDestroy()
        {
            EventManager.RemoveEventTarget(gameObject);

            if (_Players.Contains(this))
                _Players.Remove(this);
        }

        static HashSet<ThreePlayer> _Players=new HashSet<ThreePlayer>();
        public static IEnumerable<ThreePlayer> players
        {
            get { return _Players; }
        }

        // Use this for initialization
        void Start()
        {
            if (isServer)
            {
                GetComponent<ThreePlayerStoC>().enabled = !isLocalPlayer;
                GetComponent<ThreePlayerCtoS>().enabled = false;
            }
            else
            {
                GetComponent<ThreePlayerStoC>().enabled = false;
                GetComponent<ThreePlayerCtoS>().enabled = isLocalPlayer;
            }
        }

        // Update is called once per frame
        void Update()
        {
            /*
            Debug.Log("____________________");
            Debug.Log(playerNo);
            Debug.Log(isLocalPlayer);
            Debug.Log(isServer);
            Debug.Log(isClient);
            Debug.Log(hasAuthority);
            Debug.Log(localPlayerAuthority);
            */
        }
    }
}
