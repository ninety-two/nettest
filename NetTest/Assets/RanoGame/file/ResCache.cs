using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using RanoGame;

namespace RanoGame.file
{
	public class ResCache : IDisposable
	{
		object lockKey = new object();
		private IResourceFile m_File;

		private ResHandle Load(Resource r)
		{
			long lsize = m_File.GetResourceSize(r);
			if (lsize > uint.MaxValue) return null;
			
			uint size = (uint)lsize;
			
			byte[] buffer = new byte[size];
			if (buffer == null) return null;
			
			ResHandle handle = r.VCreateHandle(buffer, size, this);
			if (!handle.VLoad(m_File))return null;
			
			return handle;
		}
		
		public ResCache(uint sizeInMb, IResourceFile resFile)
		{
			m_File = resFile;
		}
		
		public void Dispose()
		{
		}
		
		public bool Init()
		{
			return true;
		}
		
		public ResHandle GetHandle(Resource r)
		{
			lock (lockKey)
			{
				return Load(r);
			}
		}
		
		public void Flush()
		{
		}
	}
	/*
    public class ResCache : IDisposable
    {
        class Resources
        {
            Dictionary<string, LinkedListNode<ResHandle>> m_Resources = new Dictionary<string, LinkedListNode<ResHandle>>();

            public void SetValue(Resource r,LinkedListNode<ResHandle> handle)
            {
                m_Resources[GetResourceNameWithType(r)] = handle;
            }

            public bool TryGetValue(Resource r,out LinkedListNode<ResHandle> handle)
            {
                return m_Resources.TryGetValue(GetResourceNameWithType(r), out handle);
            }

            public void Remove(Resource r)
            {
                m_Resources.Remove(GetResourceNameWithType(r));
            }

            // リソース名にリソースの型名を加えたものを返す。
            static string GetResourceNameWithType(Resource r)
            {
                return r.GetType().Name + ":" + r.name;
            }
        }

        private LinkedList<ResHandle> m_LRU = new LinkedList<ResHandle>();
        private Resources m_Resources = new Resources();
        private IResourceFile m_File;

        private uint m_nCacheSize = 1;
        private uint m_nAllocated = 0;

        object lockKey = new object();

        private ResHandle Find(Resource r)
        {
            LinkedListNode<ResHandle> handle;

            if (m_Resources.TryGetValue(r, out handle))
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

            if (m_Resources.TryGetValue(handle.resource, out node))
            {
                m_LRU.Remove(node);

                m_LRU.AddFirst(handle);
                m_Resources.SetValue(handle.resource,m_LRU.First);
            }
        }

        private ResHandle Load(Resource r)
        {
            long lsize = m_File.GetResourceSize(r);
            if (lsize > uint.MaxValue) return null;

            uint size = (uint)lsize;

            byte[] buffer = Allocate(size);
            if (buffer == null) return null;

            ResHandle handle = r.VCreateHandle(buffer, size, this);
            if (!handle.VLoad(m_File))return null;

            m_LRU.AddFirst(handle);
            m_Resources.SetValue(r,m_LRU.First);

            return handle;
        }

        private void Free(ResHandle gonner)
        {
        }

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

        private byte[] Allocate(uint size)
        {
            if (!MakeRoom(size)) return null;

            byte[] buffer = new byte[size];
            m_nAllocated += size;
            return buffer;
        }

        private void FreeOneResource()
        {
            ResHandle handle = m_LRU.Last.Value;
            m_LRU.RemoveLast();
            m_Resources.Remove(handle.resource);
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

        public ResHandle GetHandle(Resource r)
        {
            lock (lockKey)
            {
                ResHandle handle = Find(r);
                if (handle == null)
                {
                    handle = Load(r);
                }
                else
                {
                    Update(handle);
                }

                return handle;
            }
        }

        public void Flush()
        {
        }
    }
	*/
}
