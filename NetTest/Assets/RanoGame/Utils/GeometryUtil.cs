using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.Utils
{
    public static class PointExtensions
    {
        public static Point Add(this Point lhs, Point rhs)
        {
            return lhs+rhs;
        }

        public static Point Subtract(this Point lhs, Point rhs)
        {
            return lhs-rhs;
        }

        public static Point Mul(this Point lhs, int rhs)
        {
            return lhs*rhs;
        }

        public static Point Div(this Point lhs, int rhs)
        {
            return lhs/rhs;
        }

        public static Point Rotation90(this Point lhs, int n = 0)
        {
            return GeometryUtil.Rotation90Unit(lhs, n);
        }
    }

    public static class GeometryUtil
    {
        public static Vector2 PointToVertex(Point pt) { return new Vector2(pt.x,pt.y); }

        // Pointの90度単位の回転
        public static Point Rotation0(Point src) { return src; }
        public static Point Rotation90(Point src) { return new Point(-src.y, src.x); }
        public static Point Rotation180(Point src) { return new Point(-src.x, -src.y); }
        public static Point Rotation270(Point src) { return new Point(src.y, -src.x); }
        public static Point Rotation90Unit(Point src, int n)
        {
            n &= 3;
            if (n >= 2) { src = Rotation180(src); }
            if ((n & 1) != 0) { src = Rotation90(src); }

            return src;
        }
    }
}
