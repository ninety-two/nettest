#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<RanoGame.text.DrawText/DrawTextLine>
struct List_1_t4245757794;
// System.Action`1<RanoGame.text.DrawText>
struct Action_1_t2806649681;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.text.DrawText
struct  DrawText_t3004850299  : public Il2CppObject
{
public:
	// System.Single RanoGame.text.DrawText::m_fWaitTime
	float ___m_fWaitTime_0;
	// System.Int32 RanoGame.text.DrawText::m_nPageLines
	int32_t ___m_nPageLines_1;
	// System.Int32 RanoGame.text.DrawText::m_iPageHeadLine
	int32_t ___m_iPageHeadLine_2;
	// System.Collections.Generic.List`1<RanoGame.text.DrawText/DrawTextLine> RanoGame.text.DrawText::m_DrawTextLines
	List_1_t4245757794 * ___m_DrawTextLines_3;
	// System.Int32 RanoGame.text.DrawText::m_iDrawTextLines
	int32_t ___m_iDrawTextLines_4;
	// System.Action`1<RanoGame.text.DrawText> RanoGame.text.DrawText::OnComplete
	Action_1_t2806649681 * ___OnComplete_5;
	// System.Action`1<RanoGame.text.DrawText> RanoGame.text.DrawText::OnPageEnd
	Action_1_t2806649681 * ___OnPageEnd_6;
	// System.Action`1<RanoGame.text.DrawText> RanoGame.text.DrawText::OnDrawLetter
	Action_1_t2806649681 * ___OnDrawLetter_7;

public:
	inline static int32_t get_offset_of_m_fWaitTime_0() { return static_cast<int32_t>(offsetof(DrawText_t3004850299, ___m_fWaitTime_0)); }
	inline float get_m_fWaitTime_0() const { return ___m_fWaitTime_0; }
	inline float* get_address_of_m_fWaitTime_0() { return &___m_fWaitTime_0; }
	inline void set_m_fWaitTime_0(float value)
	{
		___m_fWaitTime_0 = value;
	}

	inline static int32_t get_offset_of_m_nPageLines_1() { return static_cast<int32_t>(offsetof(DrawText_t3004850299, ___m_nPageLines_1)); }
	inline int32_t get_m_nPageLines_1() const { return ___m_nPageLines_1; }
	inline int32_t* get_address_of_m_nPageLines_1() { return &___m_nPageLines_1; }
	inline void set_m_nPageLines_1(int32_t value)
	{
		___m_nPageLines_1 = value;
	}

	inline static int32_t get_offset_of_m_iPageHeadLine_2() { return static_cast<int32_t>(offsetof(DrawText_t3004850299, ___m_iPageHeadLine_2)); }
	inline int32_t get_m_iPageHeadLine_2() const { return ___m_iPageHeadLine_2; }
	inline int32_t* get_address_of_m_iPageHeadLine_2() { return &___m_iPageHeadLine_2; }
	inline void set_m_iPageHeadLine_2(int32_t value)
	{
		___m_iPageHeadLine_2 = value;
	}

	inline static int32_t get_offset_of_m_DrawTextLines_3() { return static_cast<int32_t>(offsetof(DrawText_t3004850299, ___m_DrawTextLines_3)); }
	inline List_1_t4245757794 * get_m_DrawTextLines_3() const { return ___m_DrawTextLines_3; }
	inline List_1_t4245757794 ** get_address_of_m_DrawTextLines_3() { return &___m_DrawTextLines_3; }
	inline void set_m_DrawTextLines_3(List_1_t4245757794 * value)
	{
		___m_DrawTextLines_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_DrawTextLines_3, value);
	}

	inline static int32_t get_offset_of_m_iDrawTextLines_4() { return static_cast<int32_t>(offsetof(DrawText_t3004850299, ___m_iDrawTextLines_4)); }
	inline int32_t get_m_iDrawTextLines_4() const { return ___m_iDrawTextLines_4; }
	inline int32_t* get_address_of_m_iDrawTextLines_4() { return &___m_iDrawTextLines_4; }
	inline void set_m_iDrawTextLines_4(int32_t value)
	{
		___m_iDrawTextLines_4 = value;
	}

	inline static int32_t get_offset_of_OnComplete_5() { return static_cast<int32_t>(offsetof(DrawText_t3004850299, ___OnComplete_5)); }
	inline Action_1_t2806649681 * get_OnComplete_5() const { return ___OnComplete_5; }
	inline Action_1_t2806649681 ** get_address_of_OnComplete_5() { return &___OnComplete_5; }
	inline void set_OnComplete_5(Action_1_t2806649681 * value)
	{
		___OnComplete_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_5, value);
	}

	inline static int32_t get_offset_of_OnPageEnd_6() { return static_cast<int32_t>(offsetof(DrawText_t3004850299, ___OnPageEnd_6)); }
	inline Action_1_t2806649681 * get_OnPageEnd_6() const { return ___OnPageEnd_6; }
	inline Action_1_t2806649681 ** get_address_of_OnPageEnd_6() { return &___OnPageEnd_6; }
	inline void set_OnPageEnd_6(Action_1_t2806649681 * value)
	{
		___OnPageEnd_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnPageEnd_6, value);
	}

	inline static int32_t get_offset_of_OnDrawLetter_7() { return static_cast<int32_t>(offsetof(DrawText_t3004850299, ___OnDrawLetter_7)); }
	inline Action_1_t2806649681 * get_OnDrawLetter_7() const { return ___OnDrawLetter_7; }
	inline Action_1_t2806649681 ** get_address_of_OnDrawLetter_7() { return &___OnDrawLetter_7; }
	inline void set_OnDrawLetter_7(Action_1_t2806649681 * value)
	{
		___OnDrawLetter_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnDrawLetter_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
