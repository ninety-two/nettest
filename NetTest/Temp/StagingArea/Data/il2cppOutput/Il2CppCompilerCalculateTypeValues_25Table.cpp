#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_RanoGame_events_EventManager1486817501.h"
#include "AssemblyU2DCSharp_RanoGame_events_RealtimeEventLis4103198251.h"
#include "AssemblyU2DCSharp_RanoGame_events_EventType872040378.h"
#include "AssemblyU2DCSharp_RanoGame_events_BaseEventData3336829727.h"
#include "AssemblyU2DCSharp_RanoGame_events_EventSnooper4039770580.h"
#include "AssemblyU2DCSharp_RanoGame_events_RequestNewActorEv228841088.h"
#include "AssemblyU2DCSharp_RanoGame_events_CheatCodeEvent1031128624.h"
#include "AssemblyU2DCSharp_RanoGame_events_NewActorEvent3161428657.h"
#include "AssemblyU2DCSharp_RanoGame_events_RemoveActorEvent861573145.h"
#include "AssemblyU2DCSharp_RanoGame_file_ResCache2338779870.h"
#include "AssemblyU2DCSharp_RanoGame_file_ResHandle3695248050.h"
#include "AssemblyU2DCSharp_RanoGame_file_Resource3778615714.h"
#include "AssemblyU2DCSharp_RanoGame_file_ResourceLoadManage1818564931.h"
#include "AssemblyU2DCSharp_RanoGame_file_ResourceLoadManage2397856393.h"
#include "AssemblyU2DCSharp_RanoGame_file_ResourceRawFile935709038.h"
#include "AssemblyU2DCSharp_RanoGame_file_TextureResHandle2241651773.h"
#include "AssemblyU2DCSharp_RanoGame_file_TextureResource3157361721.h"
#include "AssemblyU2DCSharp_RanoGame_file_XmlResHandle3477719003.h"
#include "AssemblyU2DCSharp_RanoGame_file_XmlResource2256948379.h"
#include "AssemblyU2DCSharp_RanoGame_input_GamepadEventType3997027989.h"
#include "AssemblyU2DCSharp_RanoGame_input_GamepadEvent1910427645.h"
#include "AssemblyU2DCSharp_RanoGame_input_DirectionFlags3309339330.h"
#include "AssemblyU2DCSharp_RanoGame_input_ButtonId2541379053.h"
#include "AssemblyU2DCSharp_RanoGame_input_KeyboardEvent4016158943.h"
#include "AssemblyU2DCSharp_RanoGame_input_KeyboardEvent_Typ1311021052.h"
#include "AssemblyU2DCSharp_RanoGame_input_MouseEventType1607445563.h"
#include "AssemblyU2DCSharp_RanoGame_input_MouseEvent1810145203.h"
#include "AssemblyU2DCSharp_RanoGame_process_Process3557407437.h"
#include "AssemblyU2DCSharp_RanoGame_process_ProcessManager3484849990.h"
#include "AssemblyU2DCSharp_RanoGame_process_RealTimeProcess967514942.h"
#include "AssemblyU2DCSharp_RanoGame_process_WaitProcess2472866890.h"
#include "AssemblyU2DCSharp_RanoGame_process_WaitProcess_Tim1651012013.h"
#include "AssemblyU2DCSharp_RanoGame_text_TextUtil652814313.h"
#include "AssemblyU2DCSharp_RanoGame_text_DrawText3004850299.h"
#include "AssemblyU2DCSharp_RanoGame_text_DrawText_DrawTextLi581669366.h"
#include "AssemblyU2DCSharp_RanoGame_text_TextData2575386453.h"
#include "AssemblyU2DCSharp_RanoGame_text_TextField4007813085.h"
#include "AssemblyU2DCSharp_RanoGame_text_TextFormat3723913664.h"
#include "AssemblyU2DCSharp_RanoGameUnity_Events_BaseEventDat435892687.h"
#include "AssemblyU2DCSharp_RanoGameUnity_Events_EventManager784179693.h"
#include "AssemblyU2DCSharp_RanoGameUnity_Events_EventManage1042468026.h"
#include "AssemblyU2DCSharp_RanoGameUnity_SequencialEventPro1347955999.h"
#include "AssemblyU2DCSharp_RanoGameUnity_SequencialEventProc551241905.h"
#include "AssemblyU2DCSharp_RanoGameUnity_SequencialEventPro2591265394.h"
#include "AssemblyU2DCSharp_Three_StoneType545242453.h"
#include "AssemblyU2DCSharp_Three_Board1255348386.h"
#include "AssemblyU2DCSharp_Three_DebugView1338551212.h"
#include "AssemblyU2DCSharp_Three_EventLogger1829065426.h"
#include "AssemblyU2DCSharp_Three_Events_NetworkEvent4045567872.h"
#include "AssemblyU2DCSharp_Three_Events_NetworkEvent_Type3211994638.h"
#include "AssemblyU2DCSharp_Three_Events_TextEvent2394933535.h"
#include "AssemblyU2DCSharp_Three_Events_RequestGameStart1521154469.h"
#include "AssemblyU2DCSharp_Three_Events_GameStartEvent1686493032.h"
#include "AssemblyU2DCSharp_Three_Events_GameSetEvent3124710082.h"
#include "AssemblyU2DCSharp_Three_Events_RequestSetStoneEvent525954366.h"
#include "AssemblyU2DCSharp_Three_Events_SetStoneEvent3226529453.h"
#include "AssemblyU2DCSharp_Three_Events_PhaseStartEvent3333453105.h"
#include "AssemblyU2DCSharp_Three_ThreeLogic4251521356.h"
#include "AssemblyU2DCSharp_Three_ThreeNetworkManager274280573.h"
#include "AssemblyU2DCSharp_Three_ThreeNetworkManager_Connec2446630618.h"
#include "AssemblyU2DCSharp_Three_ThreePlayer1122096471.h"
#include "AssemblyU2DCSharp_Three_ThreePlayerCtoS2339079358.h"
#include "AssemblyU2DCSharp_Three_ThreePlayerStoC80479358.h"
#include "AssemblyU2DCSharp_Three_ThreeUtil3271624362.h"
#include "AssemblyU2DCSharp_Three_ThreeView1927256141.h"
#include "AssemblyU2DCSharp_Three_ThreeView_State2712302601.h"
#include "AssemblyU2DCSharp_Three_ThreeView_PlayerInfo1610544511.h"
#include "AssemblyU2DCSharp_Three_ThreeView_U3COnNetworkDisc3910051051.h"
#include "AssemblyU2DCSharp_Three_ThreeView_U3C_OnRecieveU3Ec610321557.h"
#include "AssemblyU2DCSharp_Three_ThreeView_U3C_OnRecieveU3E3339204912.h"
#include "AssemblyU2DCSharp_Three_ThreeView_U3C_OnRecieveU3E1773120971.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (EventManager_t1486817501), -1, sizeof(EventManager_t1486817501_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2500[10] = 
{
	0,
	EventManager_t1486817501_StaticFields::get_offset_of_s_WildcardEventType_1(),
	EventManager_t1486817501::get_offset_of_U3CNameU3Ek__BackingField_2(),
	EventManager_t1486817501::get_offset_of_U3CSetAsGlobalU3Ek__BackingField_3(),
	EventManager_t1486817501::get_offset_of_eventTypeSet_4(),
	EventManager_t1486817501::get_offset_of_registry_5(),
	0,
	EventManager_t1486817501::get_offset_of_eventQueue_7(),
	EventManager_t1486817501::get_offset_of_activeQueueIndex_8(),
	EventManager_t1486817501::get_offset_of_realtimeEventQueue_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (RealtimeEventListener_t4103198251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2501[1] = 
{
	RealtimeEventListener_t4103198251::get_offset_of_realtimeEventQueue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (EventType_t872040378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2502[2] = 
{
	EventType_t872040378::get_offset_of_U3CNameU3Ek__BackingField_0(),
	EventType_t872040378::get_offset_of_U3CHashedNameU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (BaseEventData_t3336829727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2504[2] = 
{
	BaseEventData_t3336829727::get_offset_of_U3CTypeU3Ek__BackingField_0(),
	BaseEventData_t3336829727::get_offset_of_U3CTimeStampU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (EventSnooper_t4039770580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2506[1] = 
{
	EventSnooper_t4039770580::get_offset_of_writer_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (RequestNewActorEvent_t228841088), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2507[2] = 
{
	0,
	RequestNewActorEvent_t228841088::get_offset_of_U3CactorParamsU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (CheatCodeEvent_t1031128624), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2508[2] = 
{
	0,
	CheatCodeEvent_t1031128624::get_offset_of_U3CcodeU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (NewActorEvent_t3161428657), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2509[2] = 
{
	0,
	NewActorEvent_t3161428657::get_offset_of_U3CactorParamsU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (RemoveActorEvent_t861573145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2510[2] = 
{
	0,
	RemoveActorEvent_t861573145::get_offset_of_U3CactorParamsU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (ResCache_t2338779870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2513[2] = 
{
	ResCache_t2338779870::get_offset_of_lockKey_0(),
	ResCache_t2338779870::get_offset_of_m_File_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (ResHandle_t3695248050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2514[2] = 
{
	ResHandle_t3695248050::get_offset_of_U3CresourceU3Ek__BackingField_0(),
	ResHandle_t3695248050::get_offset_of_U3CbufferU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (Resource_t3778615714), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2515[1] = 
{
	Resource_t3778615714::get_offset_of_U3CnameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (ResourceLoadManager_t1818564931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2516[6] = 
{
	ResourceLoadManager_t1818564931::get_offset_of_m_ResCache_0(),
	ResourceLoadManager_t1818564931::get_offset_of_m_bQuit_1(),
	ResourceLoadManager_t1818564931::get_offset_of_m_LoadResList_2(),
	ResourceLoadManager_t1818564931::get_offset_of_m_WaitLoaders_3(),
	ResourceLoadManager_t1818564931::get_offset_of_LockKey_4(),
	ResourceLoadManager_t1818564931::get_offset_of_m_Thread_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2518[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { sizeof (CachedLoader_t2397856393), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2521[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2522[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { sizeof (ResourceRawFile_t935709038), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2523[1] = 
{
	ResourceRawFile_t935709038::get_offset_of_U3CdirPathU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2524 = { sizeof (TextureResHandle_t2241651773), -1, sizeof(TextureResHandle_t2241651773_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2524[1] = 
{
	TextureResHandle_t2241651773_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2525 = { sizeof (TextureResource_t3157361721), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2526 = { sizeof (XmlResHandle_t3477719003), -1, sizeof(XmlResHandle_t3477719003_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2526[1] = 
{
	XmlResHandle_t3477719003_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2527 = { sizeof (XmlResource_t2256948379), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2528 = { sizeof (GamepadEventType_t3997027989)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2528[6] = 
{
	GamepadEventType_t3997027989::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2529 = { sizeof (GamepadEvent_t1910427645), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2529[3] = 
{
	GamepadEvent_t1910427645::get_offset_of_U3CtypeU3Ek__BackingField_0(),
	GamepadEvent_t1910427645::get_offset_of_U3CbuttonU3Ek__BackingField_1(),
	GamepadEvent_t1910427645::get_offset_of_U3CdirectionU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2530 = { sizeof (DirectionFlags_t3309339330)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2530[10] = 
{
	DirectionFlags_t3309339330::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2531 = { sizeof (ButtonId_t2541379053)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2531[23] = 
{
	ButtonId_t2541379053::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2532 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2533 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2534 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2535 = { sizeof (KeyboardEvent_t4016158943), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2535[2] = 
{
	KeyboardEvent_t4016158943::get_offset_of_U3CtypeU3Ek__BackingField_0(),
	KeyboardEvent_t4016158943::get_offset_of_U3CkeyCodeU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2536 = { sizeof (Type_t1311021052)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2536[3] = 
{
	Type_t1311021052::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2537 = { sizeof (MouseEventType_t1607445563)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2537[14] = 
{
	MouseEventType_t1607445563::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2538 = { sizeof (MouseEvent_t1810145203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2538[6] = 
{
	MouseEvent_t1810145203::get_offset_of_U3CtypeU3Ek__BackingField_0(),
	MouseEvent_t1810145203::get_offset_of_U3CLocalXU3Ek__BackingField_1(),
	MouseEvent_t1810145203::get_offset_of_U3CLocalYU3Ek__BackingField_2(),
	MouseEvent_t1810145203::get_offset_of_U3CScreenXU3Ek__BackingField_3(),
	MouseEvent_t1810145203::get_offset_of_U3CScreenYU3Ek__BackingField_4(),
	MouseEvent_t1810145203::get_offset_of_U3CwheelU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2539 = { sizeof (Process_t3557407437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2539[9] = 
{
	Process_t3557407437::get_offset_of_m_nType_0(),
	Process_t3557407437::get_offset_of_m_bKill_1(),
	Process_t3557407437::get_offset_of_m_bActive_2(),
	Process_t3557407437::get_offset_of_m_bPaused_3(),
	Process_t3557407437::get_offset_of_m_bInitialUpdate_4(),
	Process_t3557407437::get_offset_of_m_Next_5(),
	Process_t3557407437::get_offset_of_m_ProcessFlags_6(),
	Process_t3557407437::get_offset_of_OnAttached_7(),
	Process_t3557407437::get_offset_of_OnDetached_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2540 = { sizeof (ProcessManager_t3484849990), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2540[1] = 
{
	ProcessManager_t3484849990::get_offset_of_m_Processes_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2541 = { sizeof (RealTimeProcess_t967514942), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2541[2] = 
{
	RealTimeProcess_t967514942::get_offset_of_U3CthreadU3Ek__BackingField_9(),
	RealTimeProcess_t967514942::get_offset_of_U3CactionU3Ek__BackingField_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2542 = { sizeof (WaitProcess_t2472866890), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2542[3] = 
{
	WaitProcess_t2472866890::get_offset_of_timeUnit_9(),
	WaitProcess_t2472866890::get_offset_of_m_Start_10(),
	WaitProcess_t2472866890::get_offset_of_m_Stop_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2543 = { sizeof (TimeUnit_t1651012013)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2543[4] = 
{
	TimeUnit_t1651012013::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2544 = { sizeof (TextUtil_t652814313), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2545 = { sizeof (DrawText_t3004850299), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2545[8] = 
{
	DrawText_t3004850299::get_offset_of_m_fWaitTime_0(),
	DrawText_t3004850299::get_offset_of_m_nPageLines_1(),
	DrawText_t3004850299::get_offset_of_m_iPageHeadLine_2(),
	DrawText_t3004850299::get_offset_of_m_DrawTextLines_3(),
	DrawText_t3004850299::get_offset_of_m_iDrawTextLines_4(),
	DrawText_t3004850299::get_offset_of_OnComplete_5(),
	DrawText_t3004850299::get_offset_of_OnPageEnd_6(),
	DrawText_t3004850299::get_offset_of_OnDrawLetter_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2546 = { sizeof (DrawTextLine_t581669366), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2546[6] = 
{
	DrawTextLine_t581669366::get_offset_of_m_fTime_0(),
	DrawTextLine_t581669366::get_offset_of_m_nMaxScale_1(),
	DrawTextLine_t581669366::get_offset_of_m_iText_2(),
	DrawTextLine_t581669366::get_offset_of_m_iTextDataList_3(),
	DrawTextLine_t581669366::get_offset_of_m_TextDataList_4(),
	DrawTextLine_t581669366::get_offset_of_OnDrawLetter_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2547 = { sizeof (TextData_t2575386453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2547[4] = 
{
	TextData_t2575386453::get_offset_of_text_0(),
	TextData_t2575386453::get_offset_of_ruby_1(),
	TextData_t2575386453::get_offset_of_color_2(),
	TextData_t2575386453::get_offset_of_fontSize_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2548 = { sizeof (TextField_t4007813085), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2549 = { sizeof (TextFormat_t3723913664), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2549[2] = 
{
	TextFormat_t3723913664::get_offset_of_color_0(),
	TextFormat_t3723913664::get_offset_of_size_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2550 = { sizeof (BaseEventData_t435892687), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2551 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2552 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2553 = { sizeof (EventManager_t784179693), -1, sizeof(EventManager_t784179693_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2553[7] = 
{
	EventManager_t784179693_StaticFields::get_offset_of_U3CsingletonU3Ek__BackingField_2(),
	EventManager_t784179693::get_offset_of_OnTrigger_3(),
	EventManager_t784179693::get_offset_of_OnQueue_4(),
	EventManager_t784179693::get_offset_of_eventTargetSet_5(),
	EventManager_t784179693::get_offset_of_eventQueue_6(),
	EventManager_t784179693_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
	EventManager_t784179693_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2554 = { sizeof (EventQueueItem_t1042468026), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2554[1] = 
{
	EventQueueItem_t1042468026::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2555 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2555[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2556 = { sizeof (SequencialEventProcess_t1347955999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2556[2] = 
{
	SequencialEventProcess_t1347955999::get_offset_of_eventItemQueue_2(),
	SequencialEventProcess_t1347955999::get_offset_of_eventRoutine_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2557 = { sizeof (EventQueueItem_t551241905), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2558 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2558[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2559 = { sizeof (U3CExecuteEventQueueU3Ec__Iterator0_t2591265394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2559[6] = 
{
	U3CExecuteEventQueueU3Ec__Iterator0_t2591265394::get_offset_of_U3CitemU3E__1_0(),
	U3CExecuteEventQueueU3Ec__Iterator0_t2591265394::get_offset_of_U3CroutineU3E__1_1(),
	U3CExecuteEventQueueU3Ec__Iterator0_t2591265394::get_offset_of_U24this_2(),
	U3CExecuteEventQueueU3Ec__Iterator0_t2591265394::get_offset_of_U24current_3(),
	U3CExecuteEventQueueU3Ec__Iterator0_t2591265394::get_offset_of_U24disposing_4(),
	U3CExecuteEventQueueU3Ec__Iterator0_t2591265394::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2560 = { sizeof (StoneType_t545242453)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2560[4] = 
{
	StoneType_t545242453::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2561 = { sizeof (Board_t1255348386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2561[4] = 
{
	0,
	0,
	0,
	Board_t1255348386::get_offset_of_cells_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2562 = { sizeof (DebugView_t1338551212), -1, sizeof(DebugView_t1338551212_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2562[4] = 
{
	DebugView_t1338551212_StaticFields::get_offset_of_U3CsingletonU3Ek__BackingField_2(),
	DebugView_t1338551212::get_offset_of_enable_3(),
	DebugView_t1338551212_StaticFields::get_offset_of_text_4(),
	DebugView_t1338551212::get_offset_of_input_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2563 = { sizeof (EventLogger_t1829065426), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2564 = { sizeof (NetworkEvent_t4045567872), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2564[1] = 
{
	NetworkEvent_t4045567872::get_offset_of_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2565 = { sizeof (Type_t3211994638)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2565[3] = 
{
	Type_t3211994638::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2566 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2567 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2568 = { sizeof (TextEvent_t2394933535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2568[1] = 
{
	TextEvent_t2394933535::get_offset_of_text_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2569 = { sizeof (RequestGameStart_t1521154469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2569[1] = 
{
	RequestGameStart_t1521154469::get_offset_of_U3CplayerIdListU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2570 = { sizeof (GameStartEvent_t1686493032), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2570[3] = 
{
	GameStartEvent_t1686493032::get_offset_of_U3CboardU3Ek__BackingField_0(),
	GameStartEvent_t1686493032::get_offset_of_U3CplayerIdListU3Ek__BackingField_1(),
	GameStartEvent_t1686493032::get_offset_of_U3CorderU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2571 = { sizeof (GameSetEvent_t3124710082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2571[1] = 
{
	GameSetEvent_t3124710082::get_offset_of_U3CwinnerU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2572 = { sizeof (RequestSetStoneEvent_t525954366), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2572[3] = 
{
	RequestSetStoneEvent_t525954366::get_offset_of_U3CstoneTypeU3Ek__BackingField_0(),
	RequestSetStoneEvent_t525954366::get_offset_of_U3CxU3Ek__BackingField_1(),
	RequestSetStoneEvent_t525954366::get_offset_of_U3CyU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2573 = { sizeof (SetStoneEvent_t3226529453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2573[3] = 
{
	SetStoneEvent_t3226529453::get_offset_of_U3CstoneTypeU3Ek__BackingField_0(),
	SetStoneEvent_t3226529453::get_offset_of_U3CxU3Ek__BackingField_1(),
	SetStoneEvent_t3226529453::get_offset_of_U3CyU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2574 = { sizeof (PhaseStartEvent_t3333453105), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2574[1] = 
{
	PhaseStartEvent_t3333453105::get_offset_of_U3CphaseU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2575 = { sizeof (ThreeLogic_t4251521356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2575[4] = 
{
	ThreeLogic_t4251521356::get_offset_of_board_2(),
	ThreeLogic_t4251521356::get_offset_of_playerIdList_3(),
	ThreeLogic_t4251521356::get_offset_of_phaseOrder_4(),
	ThreeLogic_t4251521356::get_offset_of_phaseOrderIndex_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2576 = { sizeof (ThreeNetworkManager_t274280573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2576[4] = 
{
	ThreeNetworkManager_t274280573::get_offset_of_playerDictionary_50(),
	ThreeNetworkManager_t274280573::get_offset_of_playerList_51(),
	ThreeNetworkManager_t274280573::get_offset_of_U3CconnectTypeU3Ek__BackingField_52(),
	ThreeNetworkManager_t274280573::get_offset_of_maxPlayerId_53(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2577 = { sizeof (ConnectType_t2446630618)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2577[5] = 
{
	ConnectType_t2446630618::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2578 = { sizeof (ThreePlayer_t1122096471), -1, sizeof(ThreePlayer_t1122096471_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2578[4] = 
{
	ThreePlayer_t1122096471::get_offset_of_playerId_8(),
	ThreePlayer_t1122096471_StaticFields::get_offset_of__Players_9(),
	ThreePlayer_t1122096471_StaticFields::get_offset_of_kCmdCmdToServer_10(),
	ThreePlayer_t1122096471_StaticFields::get_offset_of_kRpcRpcToClient_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2579 = { sizeof (ThreePlayerCtoS_t2339079358), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2580 = { sizeof (ThreePlayerStoC_t80479358), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2581 = { sizeof (ThreeUtil_t3271624362), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2582 = { sizeof (ThreeView_t1927256141), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2582[14] = 
{
	ThreeView_t1927256141::get_offset_of_gameDecided_2(),
	ThreeView_t1927256141::get_offset_of_state_3(),
	ThreeView_t1927256141::get_offset_of_board_4(),
	ThreeView_t1927256141::get_offset_of_playerList_5(),
	ThreeView_t1927256141::get_offset_of_cursor_6(),
	ThreeView_t1927256141::get_offset_of_boardView_7(),
	ThreeView_t1927256141::get_offset_of_logo_8(),
	ThreeView_t1927256141::get_offset_of_circleSprite_9(),
	ThreeView_t1927256141::get_offset_of_crossSprite_10(),
	ThreeView_t1927256141::get_offset_of_cells_11(),
	ThreeView_t1927256141::get_offset_of_ownStone_12(),
	ThreeView_t1927256141::get_offset_of_currentPhase_13(),
	ThreeView_t1927256141::get_offset_of_networkConnectType_14(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2583 = { sizeof (State_t2712302601)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2583[3] = 
{
	State_t2712302601::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2584 = { sizeof (PlayerInfo_t1610544511)+ sizeof (Il2CppObject), sizeof(PlayerInfo_t1610544511 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2584[2] = 
{
	PlayerInfo_t1610544511::get_offset_of_id_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PlayerInfo_t1610544511::get_offset_of_stone_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2585 = { sizeof (U3COnNetworkDisconnectedU3Ec__Iterator0_t3910051051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2585[4] = 
{
	U3COnNetworkDisconnectedU3Ec__Iterator0_t3910051051::get_offset_of_U24this_0(),
	U3COnNetworkDisconnectedU3Ec__Iterator0_t3910051051::get_offset_of_U24current_1(),
	U3COnNetworkDisconnectedU3Ec__Iterator0_t3910051051::get_offset_of_U24disposing_2(),
	U3COnNetworkDisconnectedU3Ec__Iterator0_t3910051051::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2586 = { sizeof (U3C_OnRecieveU3Ec__Iterator1_t610321557), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2586[7] = 
{
	U3C_OnRecieveU3Ec__Iterator1_t610321557::get_offset_of_U3CoPlayerIdU3E__0_0(),
	U3C_OnRecieveU3Ec__Iterator1_t610321557::get_offset_of_U3CplayerIdU3E__0_1(),
	U3C_OnRecieveU3Ec__Iterator1_t610321557::get_offset_of_data_2(),
	U3C_OnRecieveU3Ec__Iterator1_t610321557::get_offset_of_U24this_3(),
	U3C_OnRecieveU3Ec__Iterator1_t610321557::get_offset_of_U24current_4(),
	U3C_OnRecieveU3Ec__Iterator1_t610321557::get_offset_of_U24disposing_5(),
	U3C_OnRecieveU3Ec__Iterator1_t610321557::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2587 = { sizeof (U3C_OnRecieveU3Ec__Iterator2_t3339204912), -1, sizeof(U3C_OnRecieveU3Ec__Iterator2_t3339204912_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2587[6] = 
{
	U3C_OnRecieveU3Ec__Iterator2_t3339204912::get_offset_of_data_0(),
	U3C_OnRecieveU3Ec__Iterator2_t3339204912::get_offset_of_U24this_1(),
	U3C_OnRecieveU3Ec__Iterator2_t3339204912::get_offset_of_U24current_2(),
	U3C_OnRecieveU3Ec__Iterator2_t3339204912::get_offset_of_U24disposing_3(),
	U3C_OnRecieveU3Ec__Iterator2_t3339204912::get_offset_of_U24PC_4(),
	U3C_OnRecieveU3Ec__Iterator2_t3339204912_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2588 = { sizeof (U3C_OnRecieveU3Ec__Iterator3_t1773120971), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2588[5] = 
{
	U3C_OnRecieveU3Ec__Iterator3_t1773120971::get_offset_of_data_0(),
	U3C_OnRecieveU3Ec__Iterator3_t1773120971::get_offset_of_U24this_1(),
	U3C_OnRecieveU3Ec__Iterator3_t1773120971::get_offset_of_U24current_2(),
	U3C_OnRecieveU3Ec__Iterator3_t1773120971::get_offset_of_U24disposing_3(),
	U3C_OnRecieveU3Ec__Iterator3_t1773120971::get_offset_of_U24PC_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
