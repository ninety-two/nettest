#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_Networking_UnityEngine_Networking_Netwo696867603.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct List_1_t346742854;
// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct Stack_1_t2065349876;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t3779449791;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.LocalClient
struct  LocalClient_t4139140194  : public NetworkClient_t696867603
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs
	List_1_t346742854 * ___m_InternalMsgs_24;
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs2
	List_1_t346742854 * ___m_InternalMsgs2_25;
	// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_FreeMessages
	Stack_1_t2065349876 * ___m_FreeMessages_26;
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.LocalClient::m_LocalServer
	NetworkServer_t3779449791 * ___m_LocalServer_27;
	// System.Boolean UnityEngine.Networking.LocalClient::m_Connected
	bool ___m_Connected_28;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.LocalClient::s_InternalMessage
	NetworkMessage_t2339216573 * ___s_InternalMessage_29;

public:
	inline static int32_t get_offset_of_m_InternalMsgs_24() { return static_cast<int32_t>(offsetof(LocalClient_t4139140194, ___m_InternalMsgs_24)); }
	inline List_1_t346742854 * get_m_InternalMsgs_24() const { return ___m_InternalMsgs_24; }
	inline List_1_t346742854 ** get_address_of_m_InternalMsgs_24() { return &___m_InternalMsgs_24; }
	inline void set_m_InternalMsgs_24(List_1_t346742854 * value)
	{
		___m_InternalMsgs_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_InternalMsgs_24, value);
	}

	inline static int32_t get_offset_of_m_InternalMsgs2_25() { return static_cast<int32_t>(offsetof(LocalClient_t4139140194, ___m_InternalMsgs2_25)); }
	inline List_1_t346742854 * get_m_InternalMsgs2_25() const { return ___m_InternalMsgs2_25; }
	inline List_1_t346742854 ** get_address_of_m_InternalMsgs2_25() { return &___m_InternalMsgs2_25; }
	inline void set_m_InternalMsgs2_25(List_1_t346742854 * value)
	{
		___m_InternalMsgs2_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_InternalMsgs2_25, value);
	}

	inline static int32_t get_offset_of_m_FreeMessages_26() { return static_cast<int32_t>(offsetof(LocalClient_t4139140194, ___m_FreeMessages_26)); }
	inline Stack_1_t2065349876 * get_m_FreeMessages_26() const { return ___m_FreeMessages_26; }
	inline Stack_1_t2065349876 ** get_address_of_m_FreeMessages_26() { return &___m_FreeMessages_26; }
	inline void set_m_FreeMessages_26(Stack_1_t2065349876 * value)
	{
		___m_FreeMessages_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_FreeMessages_26, value);
	}

	inline static int32_t get_offset_of_m_LocalServer_27() { return static_cast<int32_t>(offsetof(LocalClient_t4139140194, ___m_LocalServer_27)); }
	inline NetworkServer_t3779449791 * get_m_LocalServer_27() const { return ___m_LocalServer_27; }
	inline NetworkServer_t3779449791 ** get_address_of_m_LocalServer_27() { return &___m_LocalServer_27; }
	inline void set_m_LocalServer_27(NetworkServer_t3779449791 * value)
	{
		___m_LocalServer_27 = value;
		Il2CppCodeGenWriteBarrier(&___m_LocalServer_27, value);
	}

	inline static int32_t get_offset_of_m_Connected_28() { return static_cast<int32_t>(offsetof(LocalClient_t4139140194, ___m_Connected_28)); }
	inline bool get_m_Connected_28() const { return ___m_Connected_28; }
	inline bool* get_address_of_m_Connected_28() { return &___m_Connected_28; }
	inline void set_m_Connected_28(bool value)
	{
		___m_Connected_28 = value;
	}

	inline static int32_t get_offset_of_s_InternalMessage_29() { return static_cast<int32_t>(offsetof(LocalClient_t4139140194, ___s_InternalMessage_29)); }
	inline NetworkMessage_t2339216573 * get_s_InternalMessage_29() const { return ___s_InternalMessage_29; }
	inline NetworkMessage_t2339216573 ** get_address_of_s_InternalMessage_29() { return &___s_InternalMessage_29; }
	inline void set_s_InternalMessage_29(NetworkMessage_t2339216573 * value)
	{
		___s_InternalMessage_29 = value;
		Il2CppCodeGenWriteBarrier(&___s_InternalMessage_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
