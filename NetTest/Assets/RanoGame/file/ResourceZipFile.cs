using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
//using Ionic.Zip;

namespace RanoGame.file
{
	/*
    public class ResourceZipFile : IResourceFile, IDisposable
    {
        ZipFile zip;

        public ResourceZipFile(Stream zipStream)
        {
            zip = ZipFile.Read(zipStream);
        }

        public bool Open()
        {
            return (zip != null);
        }
        public long GetResourceSize(Resource r)
        {
            ZipEntry entry = zip[r.name];
            if (entry == null) return 0;

            return entry.UncompressedSize;
        }
        public bool ReadResource(byte[] buffer, Resource r)
        {
            try
            {
                ZipEntry entry = zip[r.name];
                if (entry == null) return false;

                using (var ms = new MemoryStream())
                {
                    entry.Extract(ms);
                    ms.Position = 0;

                    if (buffer.Length < ms.Length) return false;
                    int readed = ms.Read(buffer, 0, (int)ms.Length);
                    if (readed < ms.Length) return false;

                    return true;
                }
            }
            catch (Exception e)
            {
                UnityEngine.Debug.Log("ReadZipFile Failed:" + r.name + "," + e.Message);
                return false;
            }
        }

        public void Dispose()
        {
            if (zip != null)
            {
                zip.Dispose();
                zip = null;
            }
        }
    }
    */
}
