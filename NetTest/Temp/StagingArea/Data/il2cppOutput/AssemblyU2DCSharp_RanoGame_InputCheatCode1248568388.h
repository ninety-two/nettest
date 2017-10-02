#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<UnityEngine.MonoBehaviour>
struct Action_1_t960129354;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.InputCheatCode
struct  InputCheatCode_t1248568388  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 RanoGame.InputCheatCode::width
	int32_t ___width_2;
	// System.Int32 RanoGame.InputCheatCode::height
	int32_t ___height_3;
	// System.Action`1<System.String> RanoGame.InputCheatCode::InputCodeHandler
	Action_1_t1831019615 * ___InputCodeHandler_4;
	// System.Action`1<UnityEngine.MonoBehaviour> RanoGame.InputCheatCode::DestroyHandler
	Action_1_t960129354 * ___DestroyHandler_5;
	// System.String RanoGame.InputCheatCode::text
	String_t* ___text_6;

public:
	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(InputCheatCode_t1248568388, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(InputCheatCode_t1248568388, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_InputCodeHandler_4() { return static_cast<int32_t>(offsetof(InputCheatCode_t1248568388, ___InputCodeHandler_4)); }
	inline Action_1_t1831019615 * get_InputCodeHandler_4() const { return ___InputCodeHandler_4; }
	inline Action_1_t1831019615 ** get_address_of_InputCodeHandler_4() { return &___InputCodeHandler_4; }
	inline void set_InputCodeHandler_4(Action_1_t1831019615 * value)
	{
		___InputCodeHandler_4 = value;
		Il2CppCodeGenWriteBarrier(&___InputCodeHandler_4, value);
	}

	inline static int32_t get_offset_of_DestroyHandler_5() { return static_cast<int32_t>(offsetof(InputCheatCode_t1248568388, ___DestroyHandler_5)); }
	inline Action_1_t960129354 * get_DestroyHandler_5() const { return ___DestroyHandler_5; }
	inline Action_1_t960129354 ** get_address_of_DestroyHandler_5() { return &___DestroyHandler_5; }
	inline void set_DestroyHandler_5(Action_1_t960129354 * value)
	{
		___DestroyHandler_5 = value;
		Il2CppCodeGenWriteBarrier(&___DestroyHandler_5, value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(InputCheatCode_t1248568388, ___text_6)); }
	inline String_t* get_text_6() const { return ___text_6; }
	inline String_t** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(String_t* value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier(&___text_6, value);
	}
};

struct InputCheatCode_t1248568388_StaticFields
{
public:
	// System.Action`1<System.String> RanoGame.InputCheatCode::<>f__am$cache0
	Action_1_t1831019615 * ___U3CU3Ef__amU24cache0_7;
	// System.Action`1<UnityEngine.MonoBehaviour> RanoGame.InputCheatCode::<>f__am$cache1
	Action_1_t960129354 * ___U3CU3Ef__amU24cache1_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(InputCheatCode_t1248568388_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(InputCheatCode_t1248568388_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline Action_1_t960129354 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline Action_1_t960129354 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(Action_1_t960129354 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
