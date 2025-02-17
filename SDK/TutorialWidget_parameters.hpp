﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function TutorialWidget.TutorialWidget_C.ExecuteUbergraph_TutorialWidget
// 0x0018 (0x0018 - 0x0000)
struct TutorialWidget_C_ExecuteUbergraph_TutorialWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTutorialWidget_C*                      K2Node_CustomEvent_TutorialWidget_C_3;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TutorialWidget_C_ExecuteUbergraph_TutorialWidget) == 0x000008, "Wrong alignment on TutorialWidget_C_ExecuteUbergraph_TutorialWidget");
static_assert(sizeof(TutorialWidget_C_ExecuteUbergraph_TutorialWidget) == 0x000018, "Wrong size on TutorialWidget_C_ExecuteUbergraph_TutorialWidget");
static_assert(offsetof(TutorialWidget_C_ExecuteUbergraph_TutorialWidget, EntryPoint) == 0x000000, "Member 'TutorialWidget_C_ExecuteUbergraph_TutorialWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(TutorialWidget_C_ExecuteUbergraph_TutorialWidget, K2Node_CustomEvent_TutorialWidget_C_3) == 0x000008, "Member 'TutorialWidget_C_ExecuteUbergraph_TutorialWidget::K2Node_CustomEvent_TutorialWidget_C_3' has a wrong offset!");
static_assert(offsetof(TutorialWidget_C_ExecuteUbergraph_TutorialWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'TutorialWidget_C_ExecuteUbergraph_TutorialWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function TutorialWidget.TutorialWidget_C.TutorialWidget_C_3_Event_0
// 0x0008 (0x0008 - 0x0000)
struct TutorialWidget_C_TutorialWidget_C_3_Event_0 final
{
public:
	class UTutorialWidget_C*                      TutorialWidget_C_3;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TutorialWidget_C_TutorialWidget_C_3_Event_0) == 0x000008, "Wrong alignment on TutorialWidget_C_TutorialWidget_C_3_Event_0");
static_assert(sizeof(TutorialWidget_C_TutorialWidget_C_3_Event_0) == 0x000008, "Wrong size on TutorialWidget_C_TutorialWidget_C_3_Event_0");
static_assert(offsetof(TutorialWidget_C_TutorialWidget_C_3_Event_0, TutorialWidget_C_3) == 0x000000, "Member 'TutorialWidget_C_TutorialWidget_C_3_Event_0::TutorialWidget_C_3' has a wrong offset!");

// Function TutorialWidget.TutorialWidget_C.Set Text
// 0x0028 (0x0028 - 0x0000)
struct TutorialWidget_C_Set_Text final
{
public:
	class FString                                 Text;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(TutorialWidget_C_Set_Text) == 0x000008, "Wrong alignment on TutorialWidget_C_Set_Text");
static_assert(sizeof(TutorialWidget_C_Set_Text) == 0x000028, "Wrong size on TutorialWidget_C_Set_Text");
static_assert(offsetof(TutorialWidget_C_Set_Text, Text) == 0x000000, "Member 'TutorialWidget_C_Set_Text::Text' has a wrong offset!");
static_assert(offsetof(TutorialWidget_C_Set_Text, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'TutorialWidget_C_Set_Text::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function TutorialWidget.TutorialWidget_C.Set Font Size
// 0x0060 (0x0060 - 0x0000)
struct TutorialWidget_C_Set_Font_Size final
{
public:
	int32                                         In_Font_Info_Size;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0008(0x0058)(HasGetValueTypeHash)
};
static_assert(alignof(TutorialWidget_C_Set_Font_Size) == 0x000008, "Wrong alignment on TutorialWidget_C_Set_Font_Size");
static_assert(sizeof(TutorialWidget_C_Set_Font_Size) == 0x000060, "Wrong size on TutorialWidget_C_Set_Font_Size");
static_assert(offsetof(TutorialWidget_C_Set_Font_Size, In_Font_Info_Size) == 0x000000, "Member 'TutorialWidget_C_Set_Font_Size::In_Font_Info_Size' has a wrong offset!");
static_assert(offsetof(TutorialWidget_C_Set_Font_Size, K2Node_MakeStruct_SlateFontInfo) == 0x000008, "Member 'TutorialWidget_C_Set_Font_Size::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function TutorialWidget.TutorialWidget_C.SequenceEvent__ENTRYPOINTTutorialWidget_0
// 0x0008 (0x0008 - 0x0000)
struct TutorialWidget_C_SequenceEvent__ENTRYPOINTTutorialWidget_0 final
{
public:
	class UTutorialWidget_C*                      TutorialWidget_C_3;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TutorialWidget_C_SequenceEvent__ENTRYPOINTTutorialWidget_0) == 0x000008, "Wrong alignment on TutorialWidget_C_SequenceEvent__ENTRYPOINTTutorialWidget_0");
static_assert(sizeof(TutorialWidget_C_SequenceEvent__ENTRYPOINTTutorialWidget_0) == 0x000008, "Wrong size on TutorialWidget_C_SequenceEvent__ENTRYPOINTTutorialWidget_0");
static_assert(offsetof(TutorialWidget_C_SequenceEvent__ENTRYPOINTTutorialWidget_0, TutorialWidget_C_3) == 0x000000, "Member 'TutorialWidget_C_SequenceEvent__ENTRYPOINTTutorialWidget_0::TutorialWidget_C_3' has a wrong offset!");

}

