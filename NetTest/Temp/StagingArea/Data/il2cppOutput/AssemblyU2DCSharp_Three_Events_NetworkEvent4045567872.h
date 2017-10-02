#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RanoGameUnity_Events_BaseEventDa1646240303.h"
#include "AssemblyU2DCSharp_Three_Events_NetworkEvent_Type3211994638.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Three.Events.NetworkEvent
struct  NetworkEvent_t4045567872  : public BaseEventData_1_t1646240303
{
public:
	// Three.Events.NetworkEvent/Type Three.Events.NetworkEvent::type
	int32_t ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(NetworkEvent_t4045567872, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
