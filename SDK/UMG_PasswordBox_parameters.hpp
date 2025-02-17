﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_PasswordBox

#include "Basic.hpp"


namespace SDK::Params
{

// Function UMG_PasswordBox.UMG_PasswordBox_C.ExecuteUbergraph_UMG_PasswordBox
// 0x0030 (0x0030 - 0x0000)
struct UMG_PasswordBox_C_ExecuteUbergraph_UMG_PasswordBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0008(0x0018)(ConstParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PasswordBox_C_ExecuteUbergraph_UMG_PasswordBox) == 0x000008, "Wrong alignment on UMG_PasswordBox_C_ExecuteUbergraph_UMG_PasswordBox");
static_assert(sizeof(UMG_PasswordBox_C_ExecuteUbergraph_UMG_PasswordBox) == 0x000030, "Wrong size on UMG_PasswordBox_C_ExecuteUbergraph_UMG_PasswordBox");
static_assert(offsetof(UMG_PasswordBox_C_ExecuteUbergraph_UMG_PasswordBox, EntryPoint) == 0x000000, "Member 'UMG_PasswordBox_C_ExecuteUbergraph_UMG_PasswordBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_PasswordBox_C_ExecuteUbergraph_UMG_PasswordBox, K2Node_ComponentBoundEvent_Text) == 0x000008, "Member 'UMG_PasswordBox_C_ExecuteUbergraph_UMG_PasswordBox::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(UMG_PasswordBox_C_ExecuteUbergraph_UMG_PasswordBox, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'UMG_PasswordBox_C_ExecuteUbergraph_UMG_PasswordBox::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function UMG_PasswordBox.UMG_PasswordBox_C.BndEvt__UMG_PasswordBox_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct UMG_PasswordBox_C_BndEvt__UMG_PasswordBox_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UMG_PasswordBox_C_BndEvt__UMG_PasswordBox_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UMG_PasswordBox_C_BndEvt__UMG_PasswordBox_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(UMG_PasswordBox_C_BndEvt__UMG_PasswordBox_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on UMG_PasswordBox_C_BndEvt__UMG_PasswordBox_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(UMG_PasswordBox_C_BndEvt__UMG_PasswordBox_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'UMG_PasswordBox_C_BndEvt__UMG_PasswordBox_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

}

