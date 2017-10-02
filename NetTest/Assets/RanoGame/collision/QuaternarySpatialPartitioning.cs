using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.collision
{
    /*
    public class QuaternarySpatialPartitioning<T>
    {
        // 登録項目
        public class Node
        {
            public T Value;
            public uint Index;
            public Rectangle Range;
            public Node Prev;
            public Node Next;
            public Cell ParentCell;

            public Node(
                T Value,
                uint Index,
                Rectangle Range,
                Node Prev = null,
                Node Next = null
            )
            {
                this.Value = Value;
                this.Index = Index;
                this.Range = Range;
                this.Prev = Prev;
                this.Next = Next;
                this.ParentCell = null;
            }

            // Cellから離脱する
            public void Parge()
            {
                if (null != Prev) { Prev.Next = Next; }
                if (null != Next) { Next.Prev = Prev; }
                Prev = null;
                Next = null;
                ParentCell = null;
                Index = 0;
            }
        }

        // 空間の仕切り一つ
        public class Cell
        {
            public Node Head = new Node(default(T), 0, new Rectangle(0, 0, 0, 0));
            public Node Tail = new Node(default(T), 0, new Rectangle(0, 0, 0, 0));
            public int Index = -1;
            public int IndexInLevel = -1;
            public int Level = -1;
            public Cell Parent = null;
            public int NumObjects = 0;// 自分が持つオブジェクトの数
            public int NumChildObjects = 0;// 子孫が持つオブジェクトの数

            public Cell()
            {
                Head.Next = Tail;
                Tail.Prev = Head;
            }

            public void Init(int Index, int IndexInLevel, int Level, Cell Parent)
            {
                this.Index = Index;
                this.Level = Level;
                this.IndexInLevel = IndexInLevel;

                this.Head.Prev = null;
                this.Head.Next = this.Tail;
                this.Tail.Prev = this.Head;
                this.Tail.Next = null;

                this.Parent = Parent;
                this.NumObjects = 0;
                this.NumChildObjects = 0;
            }

            public bool isEmpty() { return (Head.Next == Tail && Tail.Prev == Head); }

            // 登録されたオブジェクトの削除
            public void ReleaseObjects()
            {
                Head.Next = Tail;
                Tail.Prev = Head;

                if (Parent != null) { Parent.SubNumChildObject(NumObjects); }

                NumObjects = 0;
                NumChildObjects = 0;
            }

            public void AddNumChildObject(int nAdd = 1)
            {
                NumChildObjects += nAdd;
                if (Parent != null) { Parent.AddNumChildObject(nAdd); }
            }

            public void SubNumChildObject(int nSub = 1)
            {
                NumChildObjects -= nSub;
                if (Parent != null) { Parent.SubNumChildObject(nSub); }
            }

            public Node Update(Node node)
            {
                if (null == node)
                {
                    UnityEngine.Debug.Log("aaaaaaaaaaaaaaaa");
                    return null;
                }

                node.Prev = Tail.Prev;
                node.Next = Tail;
                node.Prev.Next = node;
                node.Next.Prev = node;

                node.ParentCell = this;
                ++NumObjects;
                if (Parent != null) { Parent.AddNumChildObject(1); }

                return node;
            }

            public Node Push(T value, uint nIndex, Rectangle rect)
            {
                return Update(new Node(value, nIndex, rect));
            }

            public bool forEach(Func<T, bool> callback)
            {
                var node = Head;
                while ((node = node.Next) != Tail)
                {
                    bool bContinue = callback(node.Value);
                    if (!bContinue) return false;
                }

                return true;
            }
        }

        public const int dimension = 2;

        private int MaxLevel { get; set; }
        private int MinLevel { get; set; }
        private List<Cell> Cells = new List<Cell>();// Liner Quaternary Tree
        private Point m_AddPos = new Point(0, 0);

        public int AddX { get { return m_AddPos.x; } }
        public int AddY { get { return m_AddPos.y; } }

        public QuaternarySpatialPartitioning()
        {
            MaxLevel = 0;
            MinLevel = 0;
        }

        public void Release()
        {
            MaxLevel = 0;
            MinLevel = 0;

            ReleaseObjects();
            Cells.Clear();
            m_AddPos.x = 0;
            m_AddPos.y = 0;
        }

        public void ReleaseObjects()
        {
            foreach (var node in Cells) { node.ReleaseObjects(); }
        }

        public void Initialize(
            int MaxLevel = 31,
            int MinLevel = 0,
            int AddX = 0,
            int AddY = 0
            )
        {
            Release();

            this.MaxLevel = MaxLevel;
            this.MinLevel = MinLevel;

            this.Cells = new List<Cell>();
            var numCells = GetSizeByLevel(MaxLevel - MinLevel + 1);
            for (int i = 0; i < numCells; ++i)
            {
                this.Cells.Add(new Cell());
            }

            int nIndex = 0;
            for (int i = 0; i <= MaxLevel - MinLevel; ++i)
            {
                for (uint j = 0; j < (1U << (i << 1)); ++j)
                {
                    Cell parent = null;
                    if (i > 0)
                    {
                        uint nParentTopIndex = GetSizeByLevel(i - 1);
                        parent = this.Cells[nParentTopIndex + (j >> 2)];
                    }

                    this.Cells[nIndex].Init(nIndex, j, MaxLevel - i, parent);
                    ++nIndex;
                }
            }

            this.m_AddPos.x = AddX;
            this.m_AddPos.y = AddY;
        }

        public uint maxSize() { return 1U << MaxLevel; }

        // グローバル配列内での指定した階層の先頭インデックスを返す
        // @Param:int 階層。0が最大階層で、m_nMaxLevel-m_nMinLevelが最小階層。
        static public uint GetSizeByLevel(int nLevel)
        {
            if (nLevel >= 16) UnityEngine.Debug.Log("getSizeByLevel" + nLevel);
            /*
            var nSize:int = 0;
            var n4:int = 1;
            for (var i:uint = 0; i < nLevel; i++) {
                nSize += n4;
                n4 <<= 2;
            }

            return nSize;
            */
/*
            //0x55555555 == 0b01010101010101010101010101010101
            if (0 == nLevel) return 0;
            return 0x55555555 & ((1U << (nLevel << 1)) - 1);
        }

        // 位置座標をインデックスに変換
        public uint PointToIndex(Point pos)
        {
            uint dwX = Seperate16to32(pos.x);
            uint dwY = Seperate16to32(pos.y);
            return ((dwY << 1) | dwX);
        }

        // 二つのインデックスが同じになる階層を取得
        static public int getPartitionLevel(int a, int b)
        {
            int c = a ^ b;
            int n = 0;
            while (c >> n) { ++n; }
            return n;
        }

        // 16ビット値を1ビットおきの値にする。0b0000ABCD -> 0b0A0B0C0D
        static public uint Seperate16to32(uint dw)
        {
            dw &= 0x0000ffff;
            dw = (dw | (dw << 8)) & 0x00ff00ff;
            dw = (dw | (dw << 4)) & 0x0f0f0f0f;
            dw = (dw | (dw << 2)) & 0x33333333;
            dw = (dw | (dw << 1)) & 0x55555555;
            return dw;
        }

        static private int max(int a, int b) { return (a > b ? a : b); }
        static private int min(int a, int b) { return (a < b ? a : b); }

        // 指定したRECTを配置する階層を取得
        static public int getPartitionLevelByRect(Rectangle rc)
        {
            int n1 = getPartitionLevel(rc.Left, rc.Right - 1);
            int n2 = getPartitionLevel(rc.Top, rc.Bottom - 1);
            return Math.Max(n1, n2);
        }

        // 指定したRECTを配置する階層を取得し、その階層内での位置を返す
        public int GetLevel(Point pos, Rectangle _rc)
        {
            var rc = _rc.normal();

            rc.x += m_AddPos.x;
            rc.y += m_AddPos.y;

            int lMax = 1 << MaxLevel;
            if (rc.left < 0 || rc.top < 0 || rc.right >= lMax || rc.bottom >= lMax)
            {
                pos.x = 0;
                pos.y = 0;
                return MaxLevel;
            }

            int nLevel = Math.Min(MaxLevel, Math.Max(MinLevel, GetPartitionLevelByRect(rc)));
            uint nMask = (1U << (MaxLevel - nLevel)) - 1U;
            pos.x = (rc.left >> nLevel) & nMask;
            pos.y = (rc.top >> nLevel) & nMask;
            return nLevel;
        }

        // 線形四分木のインデックスを取得
        public uint GetIndex(Rectangle rc)
        {
            var pos = new Point();
            int nLevel = GetLevel(pos, rc);

            uint nTopIndex = GetSizeByLevel(MaxLevel - nLevel);
            uint nLocalIndex = PointToIndex(pos);

            return nTopIndex + nLocalIndex;
        }

        // オブジェクトの新規登録
        public Node Register(T value, Rectangle rc)
        {
            uint nIndex = GetIndex(rc);
            return Cells[nIndex].Push(value, nIndex, rc);
        }

        // オブジェクトの位置更新
        public Node Update(Node node, Rectangle rc)
        {
            if (null == node) return null;

            uint nIndex = GetIndex(rc);
            if (nIndex == node.Index)
            {
                node.Range = rc;
            }
            else
            {
                PargeQspObject(node);

                node.Index = nIndex;
                node.Range = rc;
                node = Cells[nIndex].update(p);
            }

            return p;
        }

        static public bool isTail(Node node) { return (null == node.Next); }

        public uint JudgeCore(uint nCellIndex, List<Node> list, uint nListSize, Action<Node, Node> funcJudge)
        {
            var pCell = Cells[nCellIndex];
            if (null == pCell.Head.Next) return 0;

            uint nNumObjects = 0;

            var node = pCell.Head.Next;
            while (!isTail(node))
            {
                ++nNumObjects;

                //同レベル内での判定
                var node2 = node.Next;
                while (!isTail(node2))
                {
                    funcJudge(node, node2);
                    node2 = node2.Next;
                }

                //上位レベルとの判定
                for (uint i = 0; i < nListSize; i++)
                {
                    funcJudge(node, list[i]);
                }

                node = node.Next;
            }

            // リストへの登録
            uint nNewListSize = nNumObjects + nListSize;
            if (nNewListSize > list.Count)
            {
                for (uint i = 0; i < nNewListSize - list.Count; ++i)
                {
                    list.Add(null);
                }
            }

            uint nIndex = nListSize;
            node = pCell.Head.Next;
            while (!isTail(node))
            {
                list[nIndex++] = node;
                node = node.Next;
            }

            return nNumObjects;
        }

        public void Judge(Action<Node, Node> funcJudge)
        {
            var list = new List<Node>();
            var ListSizeList = new List<uint>();
            for (int i = 0; i < MaxLevel - MinLevel + 1; ++i) ListSizeList.Add(0);

            uint nCellIndex = 0;
            uint nLast = 1U << (MaxLevel - MinLevel);
            int nLevel = 0;
            while (nCellIndex < nLast)
            {
                int nLevelR = (MaxLevel - MinLevel) - nLevel;

                uint nTopIndex = GetSizeByLevel(nLevel);
                uint nSizeOfCurrentLevel = 1U << (nLevel << 1);
                uint nMask = nSizeOfCurrentLevel - 1;
                uint nLocalIndex = (nCellIndex >> nLevelR) & nMask;

                uint nNumObjects = JudgeCore(nTopIndex + nLocalIndex, list, ListSizeList[nLevel], funcJudge);
                ListSizeList[nLevel + 1] = ListSizeList[nLevel] + nNumObjects;

                if (nLevelR > 0)
                {
                    ++nLevel;
                }
                else
                {
                    ++nCellIndex;
                    --nLevel;
                }
            }
        }

        // 指定した範囲と重なるCellをfuncに渡す
        public bool Search(Rectangle rc, Func<Cell, bool> callback)
        {
            var pos = new Point();
            uint nTargetLevel = GetLevel(pos, rc);
            uint nTargetLocalIndex = PointToIndex(pos) & ((1 << ((MaxLevel - MinLevel) << 1)) - 1);

            // 指定した範囲と、それより上の階層
            for (uint i = 0; i <= MaxLevel - nTargetLevel; ++i)
            {
                uint nLevel = MaxLevel - i;
                uint nCellTopIndex = GetSizeByLevel(MaxLevel - nLevel);

                uint nCellIndex = nCellTopIndex + (nTargetLocalIndex >> ((nLevel - nTargetLevel) << 1));
                if (nCellIndex >= Cells.Count)
                {
                    UnityEngine.Debug.Log("11111");
                }

                var cell = Cells[nCellIndex];
                if (cell.NumObjects > 0)
                {
                    bool bContinue = callback(cell);
                    if (!bContinue) return false;
                }

                if (0 == cell.NumChildObjects) return true;
            }

            if (!SearchToLessTarget(rc, callback, nTargetLevel, nTargetLocalIndex)) return false;

            return true;
        }

        // 下の階層を検索
        private bool SearchToLessTarget(
            Rectangle rcRange,
            Func<Cell, bool> callback,
            uint nTargetLevel,
            uint nTargetLocalIndex
            )
        {
            if (nTargetLevel <= MinLevel) return true;

            uint nLevel = nTargetLevel - 1;
            uint nLocalIndexHigh = nTargetLocalIndex << dimension;
            uint nLocalIndexLow = 0;
            while (nLevel != nTargetLevel)
            {
                bool bDescendantLevel = false;
                bool bInRange = CollisionCellRect(nLevel, (nLocalIndexHigh + nLocalIndexLow), rcRange);
                if (bInRange)
                {
                    uint nCellTopIndex = GetSizeByLevel(MaxLevel - nLevel);

                    uint nCellIndex = nCellTopIndex + nLocalIndexHigh + nLocalIndexLow;
                    if (nCellIndex >= Cells.Count)
                    {
                        UnityEngine.Debug.Log("22222");
                    }

                    var cell = Cells[nCellIndex];
                    if (cell.NumObjects > 0)
                    {
                        bool bContinue = callback(cell);
                        if (!bContinue) return false;
                    }

                    bDescendantLevel = (MinLevel != nLevel && 0 != cell.NumChildObjects);
                }

                if (bDescendantLevel)
                {
                    --nLevel;
                    nLocalIndexHigh <<= dimension;
                    nLocalIndexLow <<= dimension;
                }
                else
                {
                    ++nLocalIndexLow;

                    while (0 == (nLocalIndexLow & ((1 << dimension) - 1)))
                    {
                        ++nLevel;
                        nLocalIndexHigh >>= dimension;
                        nLocalIndexLow >>= dimension;
                    }
                }
            }

            return true;
        }

        // インデックスからx座標を取得
        static public uint IndexToX(uint nIndex)
        {
            uint n = nIndex;
            n &= 0x55555555;
            n |= n >> 1;
            n &= 0x33333333;
            n |= n >> 2;
            n &= 0x0f0f0f0f;
            n |= n >> 4;
            n &= 0x00ff00ff;
            n |= n >> 8;
            n &= 0x0000ffff;
            return n;
        }

        // 指定したインデックスのセルの位置をドット単位で返す
        public Point GetCellPos(int nLevel, uint nIndex)
        {
            return new Point(((int)IndexToX(nIndex)) << nLevel, ((int)IndexToX(nIndex >> 1)) << nLevel);
        }

        // 指定したインデックスのセルの矩形をドット単位で返す
        public Rectangle GetCellRect(int nLevel, uint nIndex)
        {
            var pos = GetCellPos(nLevel, nIndex);

            int nCellLength = (1 << nLevel);
            return new Rectangle(pos.x, pos.y, nCellLength, nCellLength);
        }

        // 指定したインデックスのセルと矩形の当たり判定
        public bool CollisionCellRect(int nLevel, uint nIndex, Rectangle _rc)
        {
            var rc = _rc.normal();

            rc.x += m_AddPos.x;
            rc.y += m_AddPos.y;

            var rcCell = GetCellRect(nLevel, nIndex);
            return (rc.left <= rcCell.Right && rcCell.Left <= rc.right && rc.top <= rcCell.Bottom && rcCell.Top <= rc.bottom);
        }

        public void PargeQspObject(Node node)
        {
            if (node == null) return;

            var cell = node.ParentCell;
            node.Parge();

            if (cell != null)
            {
                --cell.NumObjects;
                if (cell.Parent != null) { cell.Parent.SubNumChildObject(1); }
            }
        }
    }
 */
}
