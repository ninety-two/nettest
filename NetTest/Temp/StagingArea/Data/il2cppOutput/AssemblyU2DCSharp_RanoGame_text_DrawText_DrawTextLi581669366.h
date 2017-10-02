#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<RanoGame.text.TextData>
struct List_1_t1944507585;
// System.Action`1<RanoGame.text.DrawText/DrawTextLine>
struct Action_1_t383468748;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.text.DrawText/DrawTextLine
struct  DrawTextLine_t581669366  : public Il2CppObject
{
public:
	// System.Single RanoGame.text.DrawText/DrawTextLine::m_fTime
	float ___m_fTime_0;
	// System.Int32 RanoGame.text.DrawText/DrawTextLine::m_nMaxScale
	int32_t ___m_nMaxScale_1;
	// System.Int32 RanoGame.text.DrawText/DrawTextLine::m_iText
	int32_t ___m_iText_2;
	// System.Int32 RanoGame.text.DrawText/DrawTextLine::m_iTextDataList
	int32_t ___m_iTextDataList_3;
	// System.Collections.Generic.List`1<RanoGame.text.TextData> RanoGame.text.DrawText/DrawTextLine::m_TextDataList
	List_1_t1944507585 * ___m_TextDataList_4;
	// System.Action`1<RanoGame.text.DrawText/DrawTextLine> RanoGame.text.DrawText/DrawTextLine::OnDrawLetter
	Action_1_t383468748 * ___OnDrawLetter_5;

public:
	inline static int32_t get_offset_of_m_fTime_0() { return static_cast<int32_t>(offsetof(DrawTextLine_t581669366, ___m_fTime_0)); }
	inline float get_m_fTime_0() const { return ___m_fTime_0; }
	inline float* get_address_of_m_fTime_0() { return &___m_fTime_0; }
	inline void set_m_fTime_0(float value)
	{
		___m_fTime_0 = value;
	}

	inline static int32_t get_offset_of_m_nMaxScale_1() { return static_cast<int32_t>(offsetof(DrawTextLine_t581669366, ___m_nMaxScale_1)); }
	inline int32_t get_m_nMaxScale_1() const { return ___m_nMaxScale_1; }
	inline int32_t* get_address_of_m_nMaxScale_1() { return &___m_nMaxScale_1; }
	inline void set_m_nMaxScale_1(int32_t value)
	{
		___m_nMaxScale_1 = value;
	}

	inline static int32_t get_offset_of_m_iText_2() { return static_cast<int32_t>(offsetof(DrawTextLine_t581669366, ___m_iText_2)); }
	inline int32_t get_m_iText_2() const { return ___m_iText_2; }
	inline int32_t* get_address_of_m_iText_2() { return &___m_iText_2; }
	inline void set_m_iText_2(int32_t value)
	{
		___m_iText_2 = value;
	}

	inline static int32_t get_offset_of_m_iTextDataList_3() { return static_cast<int32_t>(offsetof(DrawTextLine_t581669366, ___m_iTextDataList_3)); }
	inline int32_t get_m_iTextDataList_3() const { return ___m_iTextDataList_3; }
	inline int32_t* get_address_of_m_iTextDataList_3() { return &___m_iTextDataList_3; }
	inline void set_m_iTextDataList_3(int32_t value)
	{
		___m_iTextDataList_3 = value;
	}

	inline static int32_t get_offset_of_m_TextDataList_4() { return static_cast<int32_t>(offsetof(DrawTextLine_t581669366, ___m_TextDataList_4)); }
	inline List_1_t1944507585 * get_m_TextDataList_4() const { return ___m_TextDataList_4; }
	inline List_1_t1944507585 ** get_address_of_m_TextDataList_4() { return &___m_TextDataList_4; }
	inline void set_m_TextDataList_4(List_1_t1944507585 * value)
	{
		___m_TextDataList_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextDataList_4, value);
	}

	inline static int32_t get_offset_of_OnDrawLetter_5() { return static_cast<int32_t>(offsetof(DrawTextLine_t581669366, ___OnDrawLetter_5)); }
	inline Action_1_t383468748 * get_OnDrawLetter_5() const { return ___OnDrawLetter_5; }
	inline Action_1_t383468748 ** get_address_of_OnDrawLetter_5() { return &___OnDrawLetter_5; }
	inline void set_OnDrawLetter_5(Action_1_t383468748 * value)
	{
		___OnDrawLetter_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnDrawLetter_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
