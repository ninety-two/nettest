using System;
using System.Collections.Generic;
using RanoGame;

namespace Three
{
    [Serializable]
    public enum StoneType
    {
        None,
        Circle,
        Cross,
    }

    [Serializable]
    public class Board
    {
        public const int length = 3;
        public const int width = length;
        public const int height = length;
        StoneType[,] cells;

        public Board(StoneType defaultCell = StoneType.None)
        {
            cells = new StoneType[height, width];
            for (int y = 0; y < height; y++)
            {
                for (int x = 0; x < width; x++)
                {
                    cells[y, x] = defaultCell;
                }
            }
        }

        public Board Clone()
        {
            var clone = new Board();
            clone.cells = (StoneType[,])cells.Clone();
            return clone;
        }

        public void SetCell(int x, int y, StoneType t)
        {
            cells[y, x] = t;
        }
        public void SetCell(Point pos, StoneType t)
        {
            SetCell(pos.x, pos.y, t);
        }

        public StoneType GetCell(int x, int y)
        {
            return cells[y, x];
        }
        public StoneType GetCell(Point pos)
        {
            return GetCell(pos.x, pos.y);
        }

        StoneType JudgeGameSetLine(IEnumerable<Point> poses)
        {
            bool first = true;
            var st = StoneType.None;

            foreach (var pos in poses)
            {
                if (first)
                {
                    st = GetCell(pos);
                    first = false;

                    if (st == StoneType.None)
                        return StoneType.None;
                }
                else
                {
                    var s = GetCell(pos);
                    if (s != st)
                    {
                        st = StoneType.None;
                        break;
                    }
                }
            }

            return st;
        }

        public StoneType? JudgeGameSet()
        {
            var st = StoneType.None;

            for (int y = 0; y < height; y++)
            {
                var poses = new List<Point>();

                for (int x = 0; x < width; x++)
                    poses.Add(new Point(x, y));

                if ((st = JudgeGameSetLine(poses)) != StoneType.None)
                    return st;
            }

            for (int x = 0; x < width; x++)
            {
                var poses = new List<Point>();

                for (int y = 0; y < height; y++)
                    poses.Add(new Point(x, y));

                if ((st = JudgeGameSetLine(poses)) != StoneType.None)
                    return st;
            }

            {
                var poses = new List<Point>();

                for (int i = 0; i < length; i++)
                    poses.Add(new Point(i, i));

                if ((st = JudgeGameSetLine(poses)) != StoneType.None)
                    return st;
            }

            {
                var poses = new List<Point>();

                for (int i = 0; i < length; i++)
                    poses.Add(new Point(length - 1 - i, i));

                if ((st = JudgeGameSetLine(poses)) != StoneType.None)
                    return st;
            }

            for (int i = 0; i < length; i++)
            {
                for (int j = 0; j < length; j++)
                {
                    if (GetCell(j, i) == StoneType.None)
                        return null;
                }
            }

            return StoneType.None;
        }
    }
}
