using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.draw
{
    public class TextureAtlasEx
    {
        Texture2D texture;
        public Dictionary<string, Rect> part0Ddict { get; private set; }
        public Dictionary<string, Rect[]> part1Ddict { get; private set; }
        public Dictionary<string, Rect[,]> part2Ddict { get; private set; }

        public TextureAtlasEx(TextureAtlasRaw atlasRaw, Texture2D texture)
        {
            this.texture = texture;

            part0Ddict = new Dictionary<string, Rect>();
            part1Ddict = new Dictionary<string, Rect[]>();
            part2Ddict = new Dictionary<string, Rect[,]>();

            foreach (var part in atlasRaw.part0D)
            {
                part0Ddict[part.id] = new Rect(part.x, part.y, part.w, part.h);
            }

            foreach (var part in atlasRaw.part1D)
            {
                var rectList = new Rect[part.num];
                for (int i = 0; i < part.num; ++i)
                {
                    switch (part.style)
                    {
                        case TextureAtlasRaw.Part1D.Style.H:
                            rectList[i] = new Rect(part.x + i * part.w, part.y, part.w, part.h);
                            break;
                        case TextureAtlasRaw.Part1D.Style.V:
                            rectList[i] = new Rect(part.x, part.y + i * part.h, part.w, part.h);
                            break;
                    }
                }

                part1Ddict[part.id] = rectList;
            }

            foreach (var part in atlasRaw.part2D)
            {
                var rectList = new Rect[part.numV, part.numH];
                for (int i = 0; i < part.numV; ++i)
                {
                    for (int j = 0; j < part.numH; ++j)
                    {
                        switch (part.style)
                        {
                            case TextureAtlasRaw.Part2D.Style.Z:
                                rectList[i, j] = new Rect(part.x + j * part.w, part.y + i * part.h, part.w, part.h);
                                break;
                        }
                    }
                }

                part2Ddict[part.id] = rectList;
            }
        }

        List<TextureEx> RectsToTextures(IEnumerable<Rect> src)
        {
            var dst = new List<TextureEx>();

            foreach (var rect in src)
            {
                dst.Add(new TextureEx(texture, rect));
            }

            return dst;
        }
        IEnumerable<T> GetEnumFromArray2D<T>(T[,] src)
        {
            for (int i = 0; i < src.GetLength(0); ++i)
                for (int j = 0; j < src.GetLength(1); ++j)
                    yield return src[i, j];
        }

        public TextureEx GetTexture(string id)
        {
            Rect rect;
            if (!part0Ddict.TryGetValue(id, out rect))return null;
            return new TextureEx(texture, rect);
        }

        public TextureEx[,] GetTexture2D(string id)
        {
            Rect[,] _2d;
            if (!part2Ddict.TryGetValue(id, out _2d)) return null;

            var texes = new TextureEx[_2d.GetLength(0), _2d.GetLength(1)];
            for (int i = 0; i < _2d.GetLength(0); ++i)
            {
                for (int j = 0; j < _2d.GetLength(1); ++j)
                {
                    texes[i, j] = new TextureEx(texture, _2d[i, j]);
                }
            }

            return texes;
        }

        // 元の次元数に関わり無く、画像を1次元配列として取得。
        public List<TextureEx> GetTextureAs1DArray(string id)
        {
            Rect _0d;
            Rect[] _1d;
            Rect[,] _2d;

            if (part0Ddict.TryGetValue(id, out _0d)) return RectsToTextures(new Rect[] {_0d});
            if (part1Ddict.TryGetValue(id, out _1d)) return RectsToTextures(_1d);
            if (part2Ddict.TryGetValue(id, out _2d)) return RectsToTextures(GetEnumFromArray2D(_2d));
            return null;
        }
    }
}
