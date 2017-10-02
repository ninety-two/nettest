using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.IO;
using RanoGame.events;

namespace RanoGame.IO
{
    // ﾌｧｲﾙ読み込み
    public interface IResourceFile:IDisposable
    {
        long GetResourceSize(string filePath);
        bool ReadResource(byte[] buffer);
        bool Open();
    }

    public class ResCache : IDisposable
    {
        // ファイルデータ
        public class ResHandle
        {
            public string filePath { get; private set; }
            public byte[] buffer { get; private set; }
            public long size
            {
                get { return (buffer != null ? buffer.Length : 0); }
            }

            public ResHandle(string filePath, byte[] buffer)
            {
                this.filePath = filePath;
                this.buffer = buffer;
            }
        }

        // ファイル名からファイルデータを取得
        class Resources
        {
            Dictionary<string, LinkedListNode<ResHandle>> m_Resources = new Dictionary<string, LinkedListNode<ResHandle>>();

            public void SetValue(string filePath, LinkedListNode<ResHandle> handle)
            {
                m_Resources[filePath] = handle;
            }

            public bool TryGetValue(string filePath, out LinkedListNode<ResHandle> handle)
            {
                return m_Resources.TryGetValue(filePath, out handle);
            }

            public void Remove(string filePath)
            {
                m_Resources.Remove(filePath);
            }
        }

        private LinkedList<ResHandle> m_LRU = new LinkedList<ResHandle>();
        private Resources m_Resources = new Resources();
        private IResourceFile m_File;

        private uint m_nCacheSize = 1;
        private uint m_nAllocated = 0;

        private ResHandle Find(string filePath)
        {
            LinkedListNode<ResHandle> handle;

            if (m_Resources.TryGetValue(filePath, out handle))
            {
                return handle.Value;
            }
            else
            {
                return null;
            }
        }

        private void Update(ResHandle handle)
        {
            LinkedListNode<ResHandle> node;

            if (m_Resources.TryGetValue(handle.filePath, out node))
            {
                m_LRU.Remove(node);

                m_LRU.AddFirst(handle);
                m_Resources.SetValue(handle.filePath, m_LRU.First);
            }
        }

        private ResHandle Load(string filePath)
        {
            long lsize = m_File.GetResourceSize(filePath);
            if (lsize > uint.MaxValue) return null;

            uint size = (uint)lsize;

            byte[] buffer = Allocate(size);
            if (buffer == null) return null;

            if (!m_File.ReadResource(buffer)) return null;

            var handle = new ResHandle(filePath, buffer);

            m_LRU.AddFirst(handle);
            m_Resources.SetValue(filePath, m_LRU.First);

            return handle;
        }

        private void Free(ResHandle gonner)
        {
        }

        // 指定したサイズの空き容量を確保。
        private bool MakeRoom(uint size)
        {
            if (size > m_nCacheSize) return false;

            while (size > (m_nCacheSize - m_nAllocated))
            {
                if (m_LRU.Count == 0) return false;
                FreeOneResource();
            }

            return true;
        }

        // 指定したサイズのバッファを確保。
        private byte[] Allocate(uint size)
        {
            if (!MakeRoom(size)) return null;

            byte[] buffer = new byte[size];
            m_nAllocated += size;
            return buffer;
        }

        // 古いリソースを削除
        private void FreeOneResource()
        {
            ResHandle handle = m_LRU.Last.Value;
            m_LRU.RemoveLast();
            m_Resources.Remove(handle.filePath);
        }

        private void MemoryHasBeenFreed()
        {
        }

        public ResCache(uint sizeInMb, IResourceFile resFile)
        {
            m_nCacheSize = sizeInMb * 1024 * 1024;
            m_nAllocated = 0;
            m_File = resFile;
        }

        public void Dispose()
        {
            while (m_LRU.Count != 0)
            {
                FreeOneResource();
            }

            if (m_File != null)
            {
                m_File.Dispose();
                m_File = null;
            }
        }

        public bool Init()
        {
            return m_File.Open();
        }

        public ResHandle GetHandle(string filePath)
        {
            ResHandle handle = Find(filePath);
            if (handle == null)
            {
                handle = Load(filePath);
            }
            else
            {
                Update(handle);
            }

            return handle;
        }

        public void Flush()
        {
        }
    }
    /// <summary>
    /// //////////////////////////////
    /// </summary>
    /// 
    class RequestFileLoad : BaseEventData
    {
        public const string s_EventType = "RequestFileLoad ";

        public string filePath { get; private set; }

        public RequestFileLoad(string filePath,float? timeStamp = null)
            : base(new EventType(s_EventType), timeStamp)
        {
            this.filePath = filePath;
        }

        public override IEventData Clone()
        {
            return new RequestFileLoad(filePath, TimeStamp);
        }
    }

    class FileLoad : BaseEventData
    {
        public const string s_EventType = "FileLoad ";

        public string filePath { get; private set; }
        public byte[] buffer { get; private set; }

        public FileLoad(string filePath, byte[] buffer, float? timeStamp = null)
            : base(new EventType(s_EventType), timeStamp)
        {
            this.filePath = filePath;
            this.buffer = buffer;
        }

        public override IEventData Clone()
        {
            return new FileLoad(filePath, buffer, TimeStamp);
        }
    }

    public class LoadManager
    {
        public string Name
        {
            get { return "LoadManager"; }
        }

        public bool Init(EventManager eventManager, uint sizeInMb, IResourceFile resFile)
        {
            try
            {
                // 既に実行中ならfalse
                if (m_Thread != null) return false;

                this.m_ResCache = new ResCache(sizeInMb, resFile);
                this.m_EventManager = eventManager;
                this.m_EventManager.AddListener(eventListener, new EventType(RequestFileLoad.s_EventType));
                this.m_Thread = new Thread(MainRoutine);
                this.m_Thread.Start();
                return true;
            }
            catch (Exception)
            {
                return false;
            }
        }

        EventManager m_EventManager;
        Thread m_Thread = null;
        bool m_bQuit = false;
        RealtimeEventListener eventListener = new RealtimeEventListener();
        ResCache m_ResCache;

        void MainRoutine()
        {
            while (!m_bQuit)
            {
                var eventData = eventListener.realtimeEventQueue.TryPop();
                if (eventData == null)
                {
                    System.Threading.Thread.Sleep(1);
                }
                else
                {
                    if (eventData.Type.Name == RequestFileLoad.s_EventType)
                    {
                        var e = (RequestFileLoad)eventData;

                        try
                        {
                            using (FileStream fs = File.OpenRead(e.filePath))
                            {
                                var buffer = new byte[fs.Length];

                                int readed = fs.Read(buffer, 0, buffer.Length);
                                if (readed < buffer.Length)
                                    throw new Exception("readed less than file size");

                                m_EventManager.QueueEventRT(new FileLoad(e.filePath, buffer));
                            }
                        }
                        catch (Exception _e)
                        {
                            UnityEngine.Debug.Log("ReadFile Failed:" + e.filePath + "\n" + _e.Message);
                            m_EventManager.QueueEventRT(new FileLoad(e.filePath, null));
                        }
                    }
                }
            }
        }

        public void SetQuit()
        {
            m_bQuit = true;
        }

        public void WaitQuit()
        {
            SetQuit();

            while (m_Thread != null && m_Thread.ThreadState == ThreadState.Running)
            {
                System.Threading.Thread.Sleep(1);
            }

            m_Thread = null;
            m_EventManager.DelListener(eventListener, new EventType(RequestFileLoad.s_EventType));
        }
    }
}
