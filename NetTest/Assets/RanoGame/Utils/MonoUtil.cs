using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RanoGame.Utils
{
    public static class MonoUtil
    {
        // 子孫を取得
        public static Transform FindChildHierarchy(Transform parent, string path)
        {
            int index = 0;
            Transform current = parent;

            int nSeparator = path.IndexOf("/", index);
            while (nSeparator >= 0)
            {
                current = current.FindChild(path.Substring(index, nSeparator - index));
                if (current == null) return null;

                index = nSeparator + 1;
                nSeparator = path.IndexOf("/", index);
            }

            return current.FindChild(path.Substring(index));
        }

        public static T FindComponentHierarchy<T>(Transform transform, string path)
            where T : UnityEngine.Component
        {
            var child = FindChildHierarchy(transform, path);
            if (child == null) return null;

            return child.GetComponent<T>();
        }

        public static T[] FindComponentsHierarchy<T>(Transform transform, string path)
            where T : UnityEngine.Component
        {
            var child = FindChildHierarchy(transform, path);
            if (child == null) return null;

            return child.GetComponents<T>();
        }

        // 子孫かどうか判定
        // bool containsSelf:子孫だけでなく本人だった場合もtrueを返すかどうか
        public static bool isChildHierarchy(Transform parent, Transform child, bool containsSelf = false)
        {
            var elem = child;
            if (elem == null) return false;

            if (!containsSelf) elem = elem.parent;

            for (; elem != null; elem = elem.parent)
            {
                if (parent == elem) return true;
            }

            return false;
        }
    }
}
