#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Three.DebugView
struct DebugView_t1338551212;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Three.DebugView
struct  DebugView_t1338551212  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Three.DebugView::enable
	bool ___enable_3;
	// System.String Three.DebugView::input
	String_t* ___input_5;

public:
	inline static int32_t get_offset_of_enable_3() { return static_cast<int32_t>(offsetof(DebugView_t1338551212, ___enable_3)); }
	inline bool get_enable_3() const { return ___enable_3; }
	inline bool* get_address_of_enable_3() { return &___enable_3; }
	inline void set_enable_3(bool value)
	{
		___enable_3 = value;
	}

	inline static int32_t get_offset_of_input_5() { return static_cast<int32_t>(offsetof(DebugView_t1338551212, ___input_5)); }
	inline String_t* get_input_5() const { return ___input_5; }
	inline String_t** get_address_of_input_5() { return &___input_5; }
	inline void set_input_5(String_t* value)
	{
		___input_5 = value;
		Il2CppCodeGenWriteBarrier(&___input_5, value);
	}
};

struct DebugView_t1338551212_StaticFields
{
public:
	// Three.DebugView Three.DebugView::<singleton>k__BackingField
	DebugView_t1338551212 * ___U3CsingletonU3Ek__BackingField_2;
	// System.String Three.DebugView::text
	String_t* ___text_4;

public:
	inline static int32_t get_offset_of_U3CsingletonU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DebugView_t1338551212_StaticFields, ___U3CsingletonU3Ek__BackingField_2)); }
	inline DebugView_t1338551212 * get_U3CsingletonU3Ek__BackingField_2() const { return ___U3CsingletonU3Ek__BackingField_2; }
	inline DebugView_t1338551212 ** get_address_of_U3CsingletonU3Ek__BackingField_2() { return &___U3CsingletonU3Ek__BackingField_2; }
	inline void set_U3CsingletonU3Ek__BackingField_2(DebugView_t1338551212 * value)
	{
		___U3CsingletonU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsingletonU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(DebugView_t1338551212_StaticFields, ___text_4)); }
	inline String_t* get_text_4() const { return ___text_4; }
	inline String_t** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(String_t* value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
