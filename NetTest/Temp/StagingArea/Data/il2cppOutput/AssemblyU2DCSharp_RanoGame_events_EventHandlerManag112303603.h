#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<RanoGame.events.EventHandlerManager/IEventHandlerCall>>
struct Dictionary_2_t1389566936;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.events.EventHandlerManager
struct  EventHandlerManager_t112303603  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<RanoGame.events.EventHandlerManager/IEventHandlerCall>> RanoGame.events.EventHandlerManager::eventHandlerDictionary
	Dictionary_2_t1389566936 * ___eventHandlerDictionary_0;
	// System.String RanoGame.events.EventHandlerManager::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_eventHandlerDictionary_0() { return static_cast<int32_t>(offsetof(EventHandlerManager_t112303603, ___eventHandlerDictionary_0)); }
	inline Dictionary_2_t1389566936 * get_eventHandlerDictionary_0() const { return ___eventHandlerDictionary_0; }
	inline Dictionary_2_t1389566936 ** get_address_of_eventHandlerDictionary_0() { return &___eventHandlerDictionary_0; }
	inline void set_eventHandlerDictionary_0(Dictionary_2_t1389566936 * value)
	{
		___eventHandlerDictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&___eventHandlerDictionary_0, value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EventHandlerManager_t112303603, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
