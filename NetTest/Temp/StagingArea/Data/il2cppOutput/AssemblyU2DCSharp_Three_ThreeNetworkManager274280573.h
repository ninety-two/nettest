#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_Networking_UnityEngine_Networking_Netw3335581469.h"
#include "AssemblyU2DCSharp_Three_ThreeNetworkManager_Connec2446630618.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Three.ThreePlayer>
struct Dictionary_2_t129922106;
// System.Collections.Generic.List`1<Three.ThreePlayer>
struct List_1_t491217603;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Three.ThreeNetworkManager
struct  ThreeNetworkManager_t274280573  : public NetworkManager_t3335581469
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Three.ThreePlayer> Three.ThreeNetworkManager::playerDictionary
	Dictionary_2_t129922106 * ___playerDictionary_50;
	// System.Collections.Generic.List`1<Three.ThreePlayer> Three.ThreeNetworkManager::playerList
	List_1_t491217603 * ___playerList_51;
	// Three.ThreeNetworkManager/ConnectType Three.ThreeNetworkManager::<connectType>k__BackingField
	int32_t ___U3CconnectTypeU3Ek__BackingField_52;
	// System.Int32 Three.ThreeNetworkManager::maxPlayerId
	int32_t ___maxPlayerId_53;

public:
	inline static int32_t get_offset_of_playerDictionary_50() { return static_cast<int32_t>(offsetof(ThreeNetworkManager_t274280573, ___playerDictionary_50)); }
	inline Dictionary_2_t129922106 * get_playerDictionary_50() const { return ___playerDictionary_50; }
	inline Dictionary_2_t129922106 ** get_address_of_playerDictionary_50() { return &___playerDictionary_50; }
	inline void set_playerDictionary_50(Dictionary_2_t129922106 * value)
	{
		___playerDictionary_50 = value;
		Il2CppCodeGenWriteBarrier(&___playerDictionary_50, value);
	}

	inline static int32_t get_offset_of_playerList_51() { return static_cast<int32_t>(offsetof(ThreeNetworkManager_t274280573, ___playerList_51)); }
	inline List_1_t491217603 * get_playerList_51() const { return ___playerList_51; }
	inline List_1_t491217603 ** get_address_of_playerList_51() { return &___playerList_51; }
	inline void set_playerList_51(List_1_t491217603 * value)
	{
		___playerList_51 = value;
		Il2CppCodeGenWriteBarrier(&___playerList_51, value);
	}

	inline static int32_t get_offset_of_U3CconnectTypeU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(ThreeNetworkManager_t274280573, ___U3CconnectTypeU3Ek__BackingField_52)); }
	inline int32_t get_U3CconnectTypeU3Ek__BackingField_52() const { return ___U3CconnectTypeU3Ek__BackingField_52; }
	inline int32_t* get_address_of_U3CconnectTypeU3Ek__BackingField_52() { return &___U3CconnectTypeU3Ek__BackingField_52; }
	inline void set_U3CconnectTypeU3Ek__BackingField_52(int32_t value)
	{
		___U3CconnectTypeU3Ek__BackingField_52 = value;
	}

	inline static int32_t get_offset_of_maxPlayerId_53() { return static_cast<int32_t>(offsetof(ThreeNetworkManager_t274280573, ___maxPlayerId_53)); }
	inline int32_t get_maxPlayerId_53() const { return ___maxPlayerId_53; }
	inline int32_t* get_address_of_maxPlayerId_53() { return &___maxPlayerId_53; }
	inline void set_maxPlayerId_53(int32_t value)
	{
		___maxPlayerId_53 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
