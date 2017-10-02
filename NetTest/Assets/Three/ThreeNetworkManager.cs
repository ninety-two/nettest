using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using RanoGameUnity.Events;
using Three.Events;

namespace Three
{
    [RequireComponent(typeof(NetworkManagerHUD))]
    public class ThreeNetworkManager : NetworkManager
    {
        Dictionary<int, ThreePlayer> playerDictionary;
        List<ThreePlayer> playerList;

        public enum ConnectType
        {
            None,
            Server,
            Host,
            Client,
        }

        public ConnectType connectType { get; private set; }

        public new static ThreeNetworkManager singleton
        {
            get { return NetworkManager.singleton as ThreeNetworkManager; }
        }

        public override void OnStartServer()
        {
            base.OnStartServer();

            if (connectType != ConnectType.Host)
                connectType = ConnectType.Server;
        }
        public override void OnStopServer()
        {
            base.OnStopServer();
            connectType = ConnectType.None;
        }

        public override void OnStartHost()
        {
            DebugView.AddTextLine("OnStartHost");
            base.OnStartHost();
            connectType = ConnectType.Host;

            playerList = new List<ThreePlayer>();
            playerDictionary = new Dictionary<int, ThreePlayer>();
        }
        public override void OnStopHost()
        {
            DebugView.AddTextLine("OnStopHost");
            base.OnStopHost();
            connectType = ConnectType.None;

            playerDictionary = null;
            playerList = null;
        }

        public override void OnServerDisconnect(NetworkConnection conn)
        {
            DebugView.AddTextLine("OnServerDisconnect: "+conn.connectionId);
            base.OnServerDisconnect(conn);

            if (playerDictionary.ContainsKey(conn.connectionId))
            {
                var player=playerDictionary[conn.connectionId];
                playerDictionary.Remove(conn.connectionId);
                playerList.Remove(player);
            }
            else
            {
                Debug.Log("unknown player id: " + conn.connectionId);
            }

            QueueNetworkEvent(NetworkEvent.Type.Disconnected);
        }

        int maxPlayerId = 0;
        public override void OnServerAddPlayer(NetworkConnection conn, short playerControllerId)
        {
            DebugView.AddTextLine("OnServerAddPlayer: " + conn.connectionId+" "+ playerControllerId);
            if (numPlayers >= 2)
                return;

            if (playerList.Count >= 2)
                return;

            var _player = Instantiate(playerPrefab);

            {
                var player = _player.GetComponent<ThreePlayer>();
                player.playerId = ++maxPlayerId;

                //player.playerId = playerDictionary.Count;
                playerDictionary[conn.connectionId] = player;
                playerList.Add(player);
            }

            if (playerList.Count >= 2)
            {
                ServerChangeScene("ThreeMain");

                int[] playerIdList = new int[playerList.Count];
                for(int i = 0; i <playerList.Count; i++)
                {
                    playerIdList[i] = playerList[i].playerId;
                }
                EventManager.QueueEvent(new RequestGameStart(playerIdList), 50);
                DebugView.AddTextLine("RequestGameStart");
            }

            NetworkServer.AddPlayerForConnection(conn, _player, playerControllerId);
        }

        public override void OnStartClient(NetworkClient client)
        {
            DebugView.AddTextLine("OnStartClient");
            base.OnStartClient(client);

            if (connectType == ConnectType.None)
                connectType = ConnectType.Client;
        }
        public override void OnStopClient()
        {
            DebugView.AddTextLine("OnStopClient");
            base.OnStopClient();

            if (connectType == ConnectType.Client)
                connectType = ConnectType.None;
        }
        public override void OnClientDisconnect(NetworkConnection conn)
        {
            DebugView.AddTextLine("OnClientDisconnect: "+conn.connectionId);
            base.OnClientDisconnect(conn);
            QueueNetworkEvent(NetworkEvent.Type.Disconnected);
        }

        void QueueNetworkEvent(NetworkEvent.Type type)
        {
            var e = new NetworkEvent(type);
            EventManager.QueueEvent(e);
        }

        // Use this for initialization
        void Start()
        {
            UnityEngine.SceneManagement.SceneManager.activeSceneChanged += OnActiveSceneChanged;
        }

        void OnActiveSceneChanged(
            UnityEngine.SceneManagement.Scene prevScene,
            UnityEngine.SceneManagement.Scene newScene
            )
        {
            DebugView.AddTextLine("OnActiveSceneChanged: " + prevScene.name+" to "+ newScene.name);
            bool isMenuScene = (newScene.buildIndex == 0 || newScene.name == "ThreeMenu");
            GetComponent<NetworkManagerHUD>().enabled = isMenuScene;
        }

        // Update is called once per frame
        void Update()
        {
        }
    }
}
