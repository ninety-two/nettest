using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using RanoGame;
using RanoGameUnity.Events;
using Three.Events;

namespace Three
{
    [RequireComponent(typeof(RanoGameUnity.SequencialEventProcess))]
    public class ThreeView : MonoBehaviour,
        NetworkEvent.Interface,
        TextEvent.Interface,
        GameSetEvent.Interface,
        GameStartEvent.Interface,
        PhaseStartEvent.Interface,
        SetStoneEvent.Interface
    {
        RanoGameUnity.SequencialEventProcess eventProcess
        {
            get { return GetComponent<RanoGameUnity.SequencialEventProcess>(); }
        }

        bool EnqueueEvent<T>(T e, System.Func<T, IEnumerator> handler)
        {
            return eventProcess.EnqueueEvent(e, handler);
        }

        public void OnRecieve(TextEvent e)
        {
            DebugView.AddTextLine(e.text);
        }

        bool gameDecided = false;
        public void OnRecieve(NetworkEvent e)
        {
            DebugView.AddTextLine("NetworkEvent : " + networkConnectType);
            switch (networkConnectType)
            {
                case ThreeNetworkManager.ConnectType.Client:
                    if(!gameDecided)
                    {
                        eventProcess.Stop();
                        StartCoroutine(OnNetworkDisconnected());
                    }
                    break;
                case ThreeNetworkManager.ConnectType.Host:
                    if (!gameDecided)
                    {
                        NetworkManager.singleton.StopHost();

                        eventProcess.Stop();
                        StartCoroutine(OnNetworkDisconnected());
                    }
                    break;
            }
        }
        IEnumerator OnNetworkDisconnected()
        {
            SetLogo("Network DisConnected");
            yield return new WaitForSeconds(3);
            SetLogo("");

            UnityEngine.SceneManagement.SceneManager.LoadScene("ThreeMenu");
        }

        public void OnRecieve(GameStartEvent e) { EnqueueEvent(e, _OnRecieve); }
        public void OnRecieve(PhaseStartEvent e) { EnqueueEvent(e, _OnRecieve); }
        public void OnRecieve(SetStoneEvent e) { EnqueueEvent(e, _OnRecieve); }
        public void OnRecieve(GameSetEvent e)
        {
            gameDecided = true;

            if (networkConnectType == ThreeNetworkManager.ConnectType.Client)
            {
                NetworkManager.singleton.StopClient();
            }

            EnqueueEvent(e, _OnRecieve);
        }

        enum State
        {
            Wait,
            Select,
        }
        State state = State.Wait;

        Board board;

        int? GetPlayerId()
        {
            foreach (var player in ThreePlayer.players)
            {
                if (player.isLocalPlayer)
                    return player.playerId;
            }

            return null;
        }

        struct PlayerInfo
        {
            public int id;
            public StoneType stone;

            public PlayerInfo(int id,StoneType stone)
            {
                this.id = id;
                this.stone = stone;
            }
        }
        PlayerInfo[] playerList;

        IEnumerator _OnRecieve(GameStartEvent data)
        {
            int? oPlayerId = GetPlayerId();
            if (!oPlayerId.HasValue)
            {
                Debug.Log("local player not found");
                yield break;
            }

            var playerId = oPlayerId.Value;
            playerList = new PlayerInfo[data.playerIdList.Length];
            for(int i=0;i<playerList.Length; i++)
            {
                playerList[i] = new PlayerInfo(data.playerIdList[i], data.order[i]);

                if (playerId == data.playerIdList[i])
                {
                    ownStone = data.order[i];
                }
            }


            board = data.board.Clone();

            for (int y = 0; y < Board.length; y++)
            {
                for (int x = 0; x < Board.length; x++)
                {
                    SetCellSprite(x, y, board.GetCell(x, y));
                }
            }

            SetLogo("you are " + ownStone);
            yield return new WaitForSeconds(1.0f);
            SetLogo(null);
        }

        IEnumerator _OnRecieve(GameSetEvent data)
        {
            SetLogo("Game Set!");
            yield return new WaitForSeconds(1.0f);
            SetLogo(null);

            if (data.winner == StoneType.None)
            {
                SetLogo("Draw");
            }
            else if (data.winner == ownStone)
            {
                SetLogo("You Win!");
            }
            else
            {
                SetLogo("You Lose...");
            }
            yield return new WaitForSeconds(2.0f);
            SetLogo(null);

            if (networkConnectType == ThreeNetworkManager.ConnectType.Client)
            {
                UnityEngine.SceneManagement.SceneManager.LoadScene("ThreeMenu");
            }
            else
            {
                yield return new WaitWhile(()=> (NetworkManager.singleton.numPlayers >= 2));

                NetworkManager.singleton.StopHost();
                UnityEngine.SceneManagement.SceneManager.LoadScene("ThreeMenu");
            }
        }

        IEnumerator _OnRecieve(PhaseStartEvent data)
        {
            SetLogo(data.phase.ToString() + " Phase");
            yield return new WaitForSeconds(1.0f);
            SetLogo(null);

            currentPhase = data.phase;
            if (currentPhase == ownStone)
            {
                state = State.Select;
            }
        }

        void SetCellSprite(int x, int y, StoneType stoneType)
        {
            Sprite sprite = null;
            switch (stoneType)
            {
                case StoneType.Circle:
                    sprite = circleSprite;
                    break;
                case StoneType.Cross:
                    sprite = crossSprite;
                    break;
            }

            var cell = cells[y, x];
            cell.sprite = sprite;
            cell.gameObject.SetActive(sprite != null);
        }

        IEnumerator _OnRecieve(SetStoneEvent data)
        {
            board.SetCell(data.x, data.y, data.stoneType);
            SetCellSprite(data.x, data.y, data.stoneType);
            return null;
        }

        void SetLogo(string s)
        {
            bool enable = ((s ?? "") != "");
            logo.SetActive(enable);

            if (enable)
            {
                UnityEngine.UI.Text uiText;

                uiText = logo.GetComponent<UnityEngine.UI.Text>();
                uiText.text = s;

                uiText = logo.transform.GetChild(0).GetComponent<UnityEngine.UI.Text>();
                uiText.text = s;
            }
        }

        public GameObject cursor;
        public GameObject boardView;
        public GameObject logo;

        public Sprite circleSprite;
        public Sprite crossSprite;

        SpriteRenderer[,] cells = new SpriteRenderer[Board.length, Board.length];

        public StoneType ownStone;
        StoneType currentPhase;

        ThreeNetworkManager.ConnectType networkConnectType = ThreeNetworkManager.ConnectType.None;
        private void Awake()
        {
            if (ThreeNetworkManager.singleton != null)
                networkConnectType = ThreeNetworkManager.singleton.connectType;
        }

        // Use this for initialization
        void Start()
        {
            for (int i = 0; i < Board.length; i++)
            {
                for (int j = 0; j < Board.length; j++)
                {
                    var t = boardView.transform.FindChild("Cell" + (j + 1) + (i + 1));
                    cells[i, j] = t.GetComponent<SpriteRenderer>();
                    t.gameObject.SetActive(false);
                }
            }

            EventManager.AddEventTarget(gameObject);
        }

        private void OnDestroy()
        {
            EventManager.RemoveEventTarget(gameObject);
        }

        const float cell_length_view = 0.96f;
        // Update is called once per frame
        void Update()
        {
            if (state == State.Select)
            {
                Point? oCellPos = null;

                {
                    float x = Input.mousePosition.x;
                    float y = Input.mousePosition.y;
                    var v = Camera.main.ScreenToWorldPoint(new Vector3(x, y, 0));
                    x = v.x + 1.5f;
                    y = 1.5f - v.y;
                    if (x >= 0 && y >= 0)
                    {
                        var cellX = (int)(x / cell_length_view);
                        var cellY = (int)(y / cell_length_view);
                        if (cellX < Board.length && cellY < Board.length)
                        {
                            oCellPos = new Point(cellX, cellY);
                        }
                    }
                }

                bool settable = (oCellPos.HasValue && (board.GetCell(oCellPos.Value.x, oCellPos.Value.y) == StoneType.None));
                if (Input.GetMouseButtonDown(0) && settable)
                {
                    state = State.Wait;

                    var e = new RequestSetStoneEvent(ownStone, oCellPos.Value.x, oCellPos.Value.y);
                    EventManager.QueueEvent(e);
                }

                cursor.gameObject.SetActive(settable);
                if (settable)
                {
                    var cellPos = oCellPos.Value;
                    float x = (cellPos.x - 1) * cell_length_view;
                    float y = (cellPos.y - 1) * -cell_length_view;
                    cursor.transform.position = new Vector3(x, y, cursor.transform.position.z);
                }
            }
            else
            {
                cursor.gameObject.SetActive(false);
            }
        }
    }
}
