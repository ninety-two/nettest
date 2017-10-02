using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;

namespace RanoGame.file
{
    public class ResourceLoadManager : IDisposable
    {
        ResCache m_ResCache;
        bool m_bQuit = false;
        LinkedList<Resource> m_LoadResList = new LinkedList<Resource>();
        Dictionary<string, List<ILoaderEx>> m_WaitLoaders = new Dictionary<string, List<ILoaderEx>>();
        object LockKey = new object();// CriticalSection
		Thread m_Thread;

        public ResourceLoadManager(uint sizeInMb, IResourceFile resFile)
        {
            m_ResCache = new ResCache(sizeInMb, resFile);
        }

        public virtual void Dispose()
        {
            m_ResCache.Dispose();
            m_ResCache = null;
        }

        public bool Start()
        {
            // 既に実行中ならfalse
			if (m_Thread != null) return false;

            m_bQuit = false;
            if (!m_ResCache.Init()) return false;

			m_Thread = new Thread(LoadRoutine);
            return true;
        }
        public void SetQuit() { m_bQuit = true; }
        public void WaitQuit()
        {
            SetQuit();

			while(ThreadState.Running==m_Thread.ThreadState){
				System.Threading.Thread.Sleep(1);
			}
			m_Thread=null;
		}

        private void LoadRoutine()
        {
            while (!m_bQuit)
            {
                Resource r = null;
                lock (LockKey)
                {
                    if (m_LoadResList.Count != 0)
                    {
                        r = m_LoadResList.First.Value;
                    }
                }

                if (r == null)
                {
                    System.Threading.Thread.Sleep(1);
                    continue;
                }

                ResHandle handle = m_ResCache.GetHandle(r);

                List<ILoaderEx> loaders;
                lock (LockKey)
                {
                    m_LoadResList.RemoveFirst();

                    if (m_WaitLoaders.TryGetValue(r.name, out loaders))
                    {
                        m_WaitLoaders.Remove(r.name);
                    }
                }

                if (loaders != null)
                {
                    foreach (var l in loaders)
                    {
                        if (handle != null)
                        {
                            l.SetHandle(handle);
                            l.Completed();
                        }
                        else
                        {
                            l.Error();
                        }
                    }
                }
            }
        }

        private void AddLoader(ILoaderEx l)
        {
            lock (LockKey)
            {
                List<ILoaderEx> loader_list;
                if (m_WaitLoaders.TryGetValue(l.resource.name, out loader_list))
                {
                    loader_list.Add(l);
                }
                else
                {
                    loader_list = new List<ILoaderEx>();
                    loader_list.Add(l);
                    m_WaitLoaders[l.resource.name] = loader_list;

                    m_LoadResList.AddLast(l.resource);
                }
            }
        }

        public CachedLoader CreateLoader()
        {
            return new CachedLoader(this);
        }

        protected interface ILoaderEx : ILoader
        {
            void Completed();
            void Error();
            void SetHandle(ResHandle handle);
        }

        public class CachedLoaderBase<TEgo> : ILoaderEx
            where TEgo : class
        {
            public event Action<TEgo> OnComplete;
            public event Action<TEgo> OnError;

            public void Completed() { if (OnComplete != null)OnComplete(this as TEgo); }
            public void Error() { if (OnError != null)OnError(this as TEgo); }

            private ResourceLoadManager m_Manager;
            public Resource resource { get; private set; }
            public virtual ResHandle handle { get; set; }
            public void SetHandle(ResHandle handle) { this.handle = handle; }

            public CachedLoaderBase(ResourceLoadManager manager)
            {
                m_Manager = manager;
            }

            public void Load(Resource r)
            {
                resource = r;
                m_Manager.AddLoader(this);
            }
        }
        public class CachedLoader : CachedLoaderBase<CachedLoader>
        {
            public CachedLoader(ResourceLoadManager manager) : base(manager) { }
        }
    }

    //
    public delegate T CreateResourceItem<T>(byte[] buffer);

    public class BaseItemResHandle<T> : ResHandle
    {
        protected T item { get; private set; }

        public CreateResourceItem<T> createItem;

        public BaseItemResHandle(CreateResourceItem<T> createItem, Resource resource)
            : base(resource)
        {
            this.createItem = createItem;
        }

        public override bool VLoad(IResourceFile resFile)
        {
            if (!base.VLoad(resFile)) return false;

            item = createItem(buffer);
            return (item != null);
        }
    }

    public class BaseItemResource<TItem> : Resource
        where TItem : class
    {
        CreateResourceItem<TItem> createItem;
        public BaseItemResource(CreateResourceItem<TItem> createItem, string name)
            : base(name) { this.createItem = createItem; }

        public override ResHandle VCreateHandle(
            byte[] buffer,
            uint size,
            ResCache resCache
            )
        {
            return new BaseItemResHandle<TItem>(createItem, this);
        }
    }

    /*
    public class BaseItemLoader<TLoader, TResource, TItem>
        where TLoader : class
        where TResource : Resource
        where TItem : class
    {
        public event Action<TLoader> OnComplete;
        public event Action<TLoader> OnError;
        public TResource resource { get; private set; }
        protected TItem item
        {
            get
            {
                BaseItemResHandle<TItem> h = m_Loader.handle as BaseItemResHandle<TItem>;
                if (h == null) return null;
                return h.item;
            }
        }

        ResourceLoadManager.CachedLoader m_Loader;
        public bool Load(TResource r)
        {
            this.resource = resource;

            m_Loader = GameCodeApp.s_App.resourceLoadManager.CreateLoader();
            m_Loader.OnComplete += comp;
            m_Loader.OnError += err;
            m_Loader.Load(r);

            return true;

        }

        void comp(ILoader l)
        {
            OnComplete(this as TLoader);
        }

        void err(ILoader l)
        {
            OnError(this as TLoader);
        }
    }
    */
}
