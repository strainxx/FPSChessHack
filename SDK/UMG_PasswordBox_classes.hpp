﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_PasswordBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PasswordBox.UMG_PasswordBox_C
// 0x0048 (0x02A8 - 0x0260)
class UUMG_PasswordBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_Button_C*                          CloseButton;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_0;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_91;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Button_C*                          SubmitButton;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(const class FString& Password)> PasswordEntered;                                   // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 Password;                                          // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_PasswordBox(int32 EntryPoint);
	void BndEvt__UMG_PasswordBox_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__UMG_PasswordBox_SubmitButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
	void BndEvt__UMG_PasswordBox_UMG_Button_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PasswordBox_C">();
	}
	static class UUMG_PasswordBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PasswordBox_C>();
	}
};
static_assert(alignof(UUMG_PasswordBox_C) == 0x000008, "Wrong alignment on UUMG_PasswordBox_C");
static_assert(sizeof(UUMG_PasswordBox_C) == 0x0002A8, "Wrong size on UUMG_PasswordBox_C");
static_assert(offsetof(UUMG_PasswordBox_C, UberGraphFrame) == 0x000260, "Member 'UUMG_PasswordBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PasswordBox_C, CloseButton) == 0x000268, "Member 'UUMG_PasswordBox_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UUMG_PasswordBox_C, EditableTextBox_0) == 0x000270, "Member 'UUMG_PasswordBox_C::EditableTextBox_0' has a wrong offset!");
static_assert(offsetof(UUMG_PasswordBox_C, Image_91) == 0x000278, "Member 'UUMG_PasswordBox_C::Image_91' has a wrong offset!");
static_assert(offsetof(UUMG_PasswordBox_C, SubmitButton) == 0x000280, "Member 'UUMG_PasswordBox_C::SubmitButton' has a wrong offset!");
static_assert(offsetof(UUMG_PasswordBox_C, PasswordEntered) == 0x000288, "Member 'UUMG_PasswordBox_C::PasswordEntered' has a wrong offset!");
static_assert(offsetof(UUMG_PasswordBox_C, Password) == 0x000298, "Member 'UUMG_PasswordBox_C::Password' has a wrong offset!");

}

