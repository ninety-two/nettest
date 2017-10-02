using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using RanoGame.draw;
using RanoGame.Utils;

namespace RanoGame.text
{
    public static class TextUtil
    {
        // 指定した文字列がスペース、タブ、改行のみかどうか判定
        public static bool isSpaceOnly(string s)
        {
            foreach (var ch in s)
            {
                if (" \t\r\n".IndexOf(ch) < 0) return false;
            }

            return true;
        }

        // "\r\n"を"\n"に変換
        public static string unionCRLF(string sSrc)
        {
            const string sCRLF = "\r\n";
            int index = 0;
            int iStart = sSrc.IndexOf(sCRLF);
            string sDst = "";
            while (iStart >= 0)
            {
                sDst += sSrc.Substring(index, iStart - index) + "\n";
                index = iStart + sCRLF.Length;
                iStart = sSrc.IndexOf(sCRLF, index);
            }

            return sDst + sSrc.Substring(index);
        }

        public static string executeEscapeSequence(string sSrc)
        {
            if (sSrc == null)
                return null;

            string sDst = "";
            int index = 0;

            while (index < sSrc.Length)
            {
                var iYen = sSrc.IndexOf('\\', index);
                if (iYen < 0) break;

                sDst += sSrc.Substring(index, iYen - index);

                switch (sSrc[iYen + 1])
                {
                    case 'n':
                        sDst += '\n';
                        break;
                    case 'f':
                        sDst += '\f';
                        break;
                    case 't':
                        sDst += '\t';
                        break;
                    case '\\':
                        sDst += '\\';
                        break;
                }

                index = iYen + 2;
            }

            sDst += sSrc.Substring(index);
            return sDst;
        }
    }

    public class DrawText
    {
        class DrawTextLine
        {
            public List<TextData> GetString()
            {
                var dst = new List<TextData>();

                for (int i = 0; i < m_iTextDataList; ++i)
                {
                    dst.Add(m_TextDataList[i].Clone());
                }

                if (activeTextData != null)
                {
                    var td = activeTextData.Clone();
                    td.text = td.text.Substring(0, m_iText);
                    td.ruby = "";
                    dst.Add(td);
                }

                return dst;
            }

            float m_fTime = 0;
            int m_nMaxScale = 0;

            int m_iText = 0;// m_TextDataList[m_iTextDataList].textのインデックス
            int m_iTextDataList = 0;// m_TextDataListのインデックス

            List<TextData> m_TextDataList = null;

            TextData activeTextData
            {
                get
                {
                    if (end)
                        return null;

                    return m_TextDataList[m_iTextDataList];
                }
            }

            public DrawTextLine(List<TextData> texts)
            {
                if (texts != null)
                {
                    m_TextDataList = new List<TextData>();
                    foreach (var td in texts)
                    {
                        if (td != null && null != td.text && 0 != td.text.Length)
                        {
                            m_TextDataList.Add(td.Clone());
                            m_nMaxScale = Math.Max(m_nMaxScale, td.fontSize);
                        }
                    }
                }
            }

            public bool end
            {
                get
                {
                    return (m_TextDataList == null || m_iTextDataList >= m_TextDataList.Count);
                }
            }

            // @return:余った時間
            public float Update(float elapsedTime,float waitTime)
            {
                if (end)
                    return elapsedTime;

                m_fTime += elapsedTime;
                if (m_fTime < waitTime)
                    return 0;

                var leftTime = m_fTime - waitTime;
                m_fTime = 0;

                char ch;
                do
                {
                    ch = activeTextData.text[m_iText++];

                    if (m_iText >= activeTextData.text.Length)
                    {
                        m_iText = 0;
                        ++m_iTextDataList;
                    }
                }
                while (!end && isSpaceKind(ch));

                if (!isSpaceKind(ch))
                {
                    if (OnDrawLetter != null)
                        OnDrawLetter(this);

                    return leftTime;
                }
                else
                {
                    return elapsedTime;
                }
            }

            public event Action<DrawTextLine> OnDrawLetter;

            static bool isSpaceKind(char ch)
            {
                return (" \t\r\n\f　".IndexOf(ch) >= 0);
            }

            static bool isAllSpaceKind(string s)
            {
                for (int i = 0; i < s.Length; ++i)
                {
                    if (!isSpaceKind(s[i])) return false;
                }

                return true;
            }
        }

        float m_fWaitTime = 0;
        int m_nPageLines = 0;
        int m_iPageHeadLine = 0;

        // 行ごとのテキスト。改ページならnullを挟む。
        List<DrawTextLine> m_DrawTextLines;
        int m_iDrawTextLines = 0;

        public string GetString()
        {
            string text = "";

            for (int i = m_iPageHeadLine; i <= m_iDrawTextLines; ++i)
            {
                if (i >= m_DrawTextLines.Count)
                    break;

                var line = m_DrawTextLines[i];
                if (line == null) break;

                if (text.Length != 0)
                    text += "\n";

                foreach (var td in line.GetString())
                    text += td.text;
            }

            return text;
        }

        // TextDataのリストをエスケープ処理し、行ごとにDrawTextLineにまとめて返す。
        static List<DrawTextLine> TextDataListToDrawTextLineList(
            List<TextData> srcTextDataList
            )
        {
            var drawTextLines = new List<DrawTextLine>();

            var textDataList = new List<TextData>();
            foreach (var srcTextData in srcTextDataList)
            {
                var text = srcTextData.text;
                text = TextUtil.unionCRLF(text);
                text = TextUtil.executeEscapeSequence(text);

                int nIndex = 0;

                int iNewLine = text.IndexOf('\n', nIndex);
                int iNewPage = text.IndexOf('\f', nIndex);
                while (iNewLine >= 0 || iNewPage >= 0)
                {
                    int iBorder;
                    if (iNewLine >= 0 && iNewPage >= 0)
                        iBorder = Math.Min(iNewLine, iNewPage);
                    else
                        iBorder = (iNewLine >= 0 ? iNewLine : iNewPage);

                    var td = srcTextData.Clone();
                    td.text = text.Substring(nIndex, iBorder - nIndex);
                    if (0 != td.text.Length)
                        textDataList.Add(td);

                    drawTextLines.Add(new DrawTextLine(textDataList));

                    // 改ページならdrawTextLinesにnullを挟む。
                    if (iBorder == iNewPage)
                        drawTextLines.Add(null);

                    textDataList = new List<TextData>();

                    nIndex = iBorder + 1;

                    iNewLine = text.IndexOf('\n', nIndex);
                    iNewPage = text.IndexOf('\f', nIndex);
                }

                var t = srcTextData.Clone();
                t.text = text.Substring(nIndex);
                if (0 != t.text.Length)
                    textDataList.Add(t);
            }

            if (0 != textDataList.Count)
                drawTextLines.Add(new DrawTextLine(textDataList));

            return drawTextLines;
        }

        public DrawText(List<TextData> srcTextDataList, float waitTime, int nPageLines)
        {
            m_fWaitTime = waitTime;
            m_nPageLines = nPageLines;
            m_DrawTextLines = TextDataListToDrawTextLineList(srcTextDataList);

            if (activeLine != null)
            {
                addActiveLine();

                while (activeLine.end)
                {
                    if (lineProgress())
                        break;
                }
            }
        }

        // アクティブなラインを取得
        private DrawTextLine activeLine
        {
            get
            {
                return (pageEnd ? null : m_DrawTextLines[m_iDrawTextLines]);
            }
        }

        public bool pageEnd
        {
            get
            {
                if (0 == m_nPageLines) return end;
                return (end || m_iDrawTextLines >= m_iPageHeadLine + m_nPageLines || m_DrawTextLines[m_iDrawTextLines] == null);
            }
        }

        public bool end
        {
            get
            {
                return (m_DrawTextLines == null || m_iDrawTextLines >= m_DrawTextLines.Count);
            }
        }

        void addActiveLine()
        {
            activeLine.OnDrawLetter += callDrawLetterEvent;
        }

        void callDrawLetterEvent(DrawTextLine line)
        {
            if (OnDrawLetter != null)
                OnDrawLetter(this);
        }

        // 次のラインに進む
        bool lineProgress()
        {
            if (activeLine != null)
                activeLine.OnDrawLetter -= callDrawLetterEvent;

            ++m_iDrawTextLines;
            if (pageEnd)
                return true;

            addActiveLine();
            return false;
        }

        // 次のページに進む
        public bool pageProgress()
        {
            m_iPageHeadLine = m_iDrawTextLines;
            if (end)
                return true;

            while (m_DrawTextLines[m_iPageHeadLine] == null)
            {
                m_iPageHeadLine = m_iDrawTextLines = m_iPageHeadLine + 1;
                if (end)
                    return true;
            }

            addActiveLine();
            return false;
        }

        public event Action<DrawText> OnComplete;
        public event Action<DrawText> OnPageEnd;
        public event Action<DrawText> OnDrawLetter;

        public void Update(float fElapsedTime)
        {
            var leftTime = fElapsedTime;

            while (leftTime > 0.0001f && !pageEnd)
            {
                leftTime = activeLine.Update(leftTime, m_fWaitTime);

                while (activeLine.end)
                {
                    if (lineProgress())
                        break;
                }

                if (pageEnd)
                {
                    if (end)
                    {
                        if (OnComplete != null)
                            OnComplete(this);
                    }
                    else
                    {
                        if (OnPageEnd != null)
                            OnPageEnd(this);
                    }
                }
            }
        }
    }
}
