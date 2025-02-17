﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_CreateLocal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_CreateLocal.UMG_CreateLocal_C
// 0x0038 (0x0298 - 0x0260)
class UUMG_CreateLocal_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeInErrorText;                                   // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUMG_Button_C*                          BackButton;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              CheckBSide;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              CheckMapEditor;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Button_C*                          CreateButton;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_CreateLocal(int32 EntryPoint);
	void BndEvt__UMG_HostRoom_BackButton_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
	void BndEvt__UMG_HostRoom_CreateButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_CreateLocal_C">();
	}
	static class UUMG_CreateLocal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_CreateLocal_C>();
	}
};
static_assert(alignof(UUMG_CreateLocal_C) == 0x000008, "Wrong alignment on UUMG_CreateLocal_C");
static_assert(sizeof(UUMG_CreateLocal_C) == 0x000298, "Wrong size on UUMG_CreateLocal_C");
static_assert(offsetof(UUMG_CreateLocal_C, UberGraphFrame) == 0x000260, "Member 'UUMG_CreateLocal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_CreateLocal_C, FadeInErrorText) == 0x000268, "Member 'UUMG_CreateLocal_C::FadeInErrorText' has a wrong offset!");
static_assert(offsetof(UUMG_CreateLocal_C, BackButton) == 0x000270, "Member 'UUMG_CreateLocal_C::BackButton' has a wrong offset!");
static_assert(offsetof(UUMG_CreateLocal_C, Background) == 0x000278, "Member 'UUMG_CreateLocal_C::Background' has a wrong offset!");
static_assert(offsetof(UUMG_CreateLocal_C, CheckBSide) == 0x000280, "Member 'UUMG_CreateLocal_C::CheckBSide' has a wrong offset!");
static_assert(offsetof(UUMG_CreateLocal_C, CheckMapEditor) == 0x000288, "Member 'UUMG_CreateLocal_C::CheckMapEditor' has a wrong offset!");
static_assert(offsetof(UUMG_CreateLocal_C, CreateButton) == 0x000290, "Member 'UUMG_CreateLocal_C::CreateButton' has a wrong offset!");

}

