using UnityEngine;
using System.Collections;

namespace RanoGame
{
    [System.Serializable]
    public struct Point
    {
        public static readonly Point Zero = new Point(0, 0);

        public int x, y;
        /*
        public int X
        {
            get { return x; }
            set { x = value; }
        }
        public int Y
        {
            get { return y; }
            set { y = value; }
        }
        */

        public override string ToString()
        {
            return "(" + x.ToString() + ", " + y.ToString() + ")";
        }

        public Point(int x = 0, int y = 0)
        {
            this.x = x;
            this.y = y;
        }

        public static Point operator +(Point lhs, Point rhs)
        {
            return new Point(lhs.x + rhs.x, lhs.y + rhs.y);
        }

        public static Point operator -(Point lhs, Point rhs)
        {
            return new Point(lhs.x - rhs.x, lhs.y - rhs.y);
        }

        public static Point operator *(Point lhs, int rhs)
        {
            return new Point(lhs.x * rhs, lhs.y * rhs);
        }

        public static Point operator /(Point lhs, int rhs)
        {
            return new Point(lhs.x / rhs, lhs.y / rhs);
        }

        public static Point operator %(Point lhs, int rhs)
        {
            return new Point(lhs.x % rhs, lhs.y % rhs);
        }
    }
}
