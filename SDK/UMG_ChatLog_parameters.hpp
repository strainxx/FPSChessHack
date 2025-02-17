﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_ChatLog

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UMG_ChatLog.UMG_ChatLog_C.ExecuteUbergraph_UMG_ChatLog
// 0x0098 (0x0098 - 0x0000)
struct UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Player1;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0018(0x0018)()
	int32                                         Temp_int_Variable_1;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatMessage_C*                     CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatMessage_C*                     CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatMessage_C*                     CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatMessage_C*                     CallFunc_Array_Get_Item_2;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog) == 0x000008, "Wrong alignment on UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog");
static_assert(sizeof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog) == 0x000098, "Wrong size on UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, EntryPoint) == 0x000000, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, Temp_int_Variable) == 0x000004, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, K2Node_CustomEvent_Player1) == 0x000010, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::K2Node_CustomEvent_Player1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, K2Node_CustomEvent_Text) == 0x000018, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, Temp_int_Variable_1) == 0x000030, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000039, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_Add_IntInt_ReturnValue_2) == 0x00003C, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_Create_ReturnValue) == 0x000040, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000048, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_Array_Get_Item) == 0x000058, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000078, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_Array_Get_Item_2) == 0x000080, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_PlayAnimation_ReturnValue) == 0x000088, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000090, "Member 'UMG_ChatLog_C_ExecuteUbergraph_UMG_ChatLog::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");

// Function UMG_ChatLog.UMG_ChatLog_C.CreateMessage
// 0x0020 (0x0020 - 0x0000)
struct UMG_ChatLog_C_CreateMessage final
{
public:
	bool                                          Player1;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UMG_ChatLog_C_CreateMessage) == 0x000008, "Wrong alignment on UMG_ChatLog_C_CreateMessage");
static_assert(sizeof(UMG_ChatLog_C_CreateMessage) == 0x000020, "Wrong size on UMG_ChatLog_C_CreateMessage");
static_assert(offsetof(UMG_ChatLog_C_CreateMessage, Player1) == 0x000000, "Member 'UMG_ChatLog_C_CreateMessage::Player1' has a wrong offset!");
static_assert(offsetof(UMG_ChatLog_C_CreateMessage, Text) == 0x000008, "Member 'UMG_ChatLog_C_CreateMessage::Text' has a wrong offset!");

}

