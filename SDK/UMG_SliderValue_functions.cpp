﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_SliderValue

#include "Basic.hpp"

#include "UMG_SliderValue_classes.hpp"
#include "UMG_SliderValue_parameters.hpp"


namespace SDK
{

// Function UMG_SliderValue.UMG_SliderValue_C.ExecuteUbergraph_UMG_SliderValue
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SliderValue_C::ExecuteUbergraph_UMG_SliderValue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SliderValue_C", "ExecuteUbergraph_UMG_SliderValue");

	Params::UMG_SliderValue_C_ExecuteUbergraph_UMG_SliderValue Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SliderValue.UMG_SliderValue_C.BndEvt__UMG_SliderValue_EditableText_65_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SliderValue_C::BndEvt__UMG_SliderValue_EditableText_65_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SliderValue_C", "BndEvt__UMG_SliderValue_EditableText_65_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UMG_SliderValue_C_BndEvt__UMG_SliderValue_EditableText_65_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SliderValue.UMG_SliderValue_C.BndEvt__UMG_Slider_Slider_56_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_SliderValue_C::BndEvt__UMG_Slider_Slider_56_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SliderValue_C", "BndEvt__UMG_Slider_Slider_56_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SliderValue.UMG_SliderValue_C.BndEvt__UMG_Slider_Slider_56_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_SliderValue_C::BndEvt__UMG_Slider_Slider_56_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SliderValue_C", "BndEvt__UMG_Slider_Slider_56_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SliderValue.UMG_SliderValue_C.BndEvt__Slider_56_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SliderValue_C::BndEvt__Slider_56_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SliderValue_C", "BndEvt__Slider_56_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UMG_SliderValue_C_BndEvt__Slider_56_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SliderValue.UMG_SliderValue_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SliderValue_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SliderValue_C", "PreConstruct");

	Params::UMG_SliderValue_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SliderValue.UMG_SliderValue_C.SetSliderProperty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Min_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Max_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Default_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SliderValue_C::SetSliderProperty(float Min_0, float Max_0, float Default_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SliderValue_C", "SetSliderProperty");

	Params::UMG_SliderValue_C_SetSliderProperty Parms{};

	Parms.Min_0 = Min_0;
	Parms.Max_0 = Max_0;
	Parms.Default_0 = Default_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SliderValue.UMG_SliderValue_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Val                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SliderValue_C::SetValue(float Val)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SliderValue_C", "SetValue");

	Params::UMG_SliderValue_C_SetValue Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);
}

}

