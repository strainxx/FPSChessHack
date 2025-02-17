﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_SliderValue

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SliderValue.UMG_SliderValue_C
// 0x0058 (0x02B8 - 0x0260)
class UUMG_SliderValue_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UEditableText*                          EditableText_65;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameTextBox;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_56;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(float Value)>   ValueChanged;                                      // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   Name_0;                                            // 0x0290(0x0018)(Edit, BlueprintVisible)
	float                                         Min;                                               // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Max;                                               // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Default;                                           // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_SliderValue(int32 EntryPoint);
	void BndEvt__UMG_SliderValue_EditableText_65_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__UMG_Slider_Slider_56_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__UMG_Slider_Slider_56_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__Slider_56_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void PreConstruct(bool IsDesignTime);
	void SetSliderProperty(float Min_0, float Max_0, float Default_0);
	void SetValue(float Val);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SliderValue_C">();
	}
	static class UUMG_SliderValue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SliderValue_C>();
	}
};
static_assert(alignof(UUMG_SliderValue_C) == 0x000008, "Wrong alignment on UUMG_SliderValue_C");
static_assert(sizeof(UUMG_SliderValue_C) == 0x0002B8, "Wrong size on UUMG_SliderValue_C");
static_assert(offsetof(UUMG_SliderValue_C, UberGraphFrame) == 0x000260, "Member 'UUMG_SliderValue_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SliderValue_C, EditableText_65) == 0x000268, "Member 'UUMG_SliderValue_C::EditableText_65' has a wrong offset!");
static_assert(offsetof(UUMG_SliderValue_C, NameTextBox) == 0x000270, "Member 'UUMG_SliderValue_C::NameTextBox' has a wrong offset!");
static_assert(offsetof(UUMG_SliderValue_C, Slider_56) == 0x000278, "Member 'UUMG_SliderValue_C::Slider_56' has a wrong offset!");
static_assert(offsetof(UUMG_SliderValue_C, ValueChanged) == 0x000280, "Member 'UUMG_SliderValue_C::ValueChanged' has a wrong offset!");
static_assert(offsetof(UUMG_SliderValue_C, Name_0) == 0x000290, "Member 'UUMG_SliderValue_C::Name_0' has a wrong offset!");
static_assert(offsetof(UUMG_SliderValue_C, Min) == 0x0002A8, "Member 'UUMG_SliderValue_C::Min' has a wrong offset!");
static_assert(offsetof(UUMG_SliderValue_C, Max) == 0x0002AC, "Member 'UUMG_SliderValue_C::Max' has a wrong offset!");
static_assert(offsetof(UUMG_SliderValue_C, Default) == 0x0002B0, "Member 'UUMG_SliderValue_C::Default' has a wrong offset!");

}

