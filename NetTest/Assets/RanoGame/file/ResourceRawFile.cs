using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace RanoGame.file
{
    public class ResourceRawFile : IResourceFile
    {
        public void Dispose() { }

        public string dirPath { get; private set; }
        public ResourceRawFile(string dirPath)
        {
            this.dirPath = dirPath;
            if (this.dirPath != null && this.dirPath.Length != 0)
            {
                this.dirPath += "\\";
            }
        }

        public bool Open()
        {
            return true;
        }
        public long GetResourceSize(Resource r)
        {
            try
            {
                using (FileStream fs = File.OpenRead(dirPath + r.name))
                {
                    return fs.Length;
                }
            }
            catch (Exception e)
            {
                UnityEngine.Debug.Log("GetRawFileSize Failed:" + r.name + "," + e.Message);
                return 0;
            }
        }
        public bool ReadResource(byte[] buffer, Resource r)
        {
            try
            {
                Debug.Log("ResourceRawFile.ReadResource " + r.name);
                using (FileStream fs = File.OpenRead(dirPath + r.name))
                {
                    if (buffer.Length < fs.Length) return false;
                    int readed = fs.Read(buffer, 0, (int)fs.Length);
                    if (readed < buffer.Length) return false;

                    return true;
                }
            }
            catch (Exception e)
            {
                UnityEngine.Debug.Log("ReadRawFile Failed:" + r.name + "," + e.Message);
                return false;
            }
        }
    }
}
