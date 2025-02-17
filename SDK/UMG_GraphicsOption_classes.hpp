﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_GraphicsOption

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_GraphicsOption.UMG_GraphicsOption_C
// 0x0098 (0x02F8 - 0x0260)
class UUMG_GraphicsOption_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UUMG_Selector_C*                        AntiAliasing;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Button_C*                          AutoDetect;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Selector_C*                        EffectsQuality;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Selector_C*                        FoliageQuality;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Selector_C*                        PostProcess;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Selector_C*                        Resolution;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SliderValue_C*                     ResolutionScale;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Selector_C*                        ShadowQuality;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Selector_C*                        TextureQuality;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SliderValue_C*                     UMG_Framerate;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Selector_C*                        Vsync;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Selector_C*                        WindowMode;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FIntPoint>                      ResolutionOptions;                                 // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         DefaultNames;                                      // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 FramerateOptions;                                  // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_UMG_GraphicsOption(int32 EntryPoint);
	void BndEvt__UMG_GraphicsOption_ResolutionScale_K2Node_ComponentBoundEvent_10_ValueChanged__DelegateSignature(float Value);
	void BndEvt__UMG_GraphicsOption_UMG_Framerate_K2Node_ComponentBoundEvent_11_ValueChanged__DelegateSignature(float Value);
	void Construct();
	void BndEvt__UMG_GraphicsOption_Vsync_K2Node_ComponentBoundEvent_9_OnValueChange__DelegateSignature(int32 Index_0);
	void BndEvt__AutoDetect_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature();
	void BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_8_OnValueChange__DelegateSignature(int32 Index_0);
	void BndEvt__EffectsQuality_K2Node_ComponentBoundEvent_6_OnValueChange__DelegateSignature(int32 Index_0);
	void BndEvt__TextureQuality_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature(int32 Index_0);
	void BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_4_OnValueChange__DelegateSignature(int32 Index_0);
	void BndEvt__PostProcess_K2Node_ComponentBoundEvent_3_OnValueChange__DelegateSignature(int32 Index_0);
	void BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_2_OnValueChange__DelegateSignature(int32 Index_0);
	void BndEvt__Resolution_K2Node_ComponentBoundEvent_1_OnValueChange__DelegateSignature(int32 Index_0);
	void BndEvt__WindowMode_K2Node_ComponentBoundEvent_0_OnValueChange__DelegateSignature(int32 Index_0);
	void ConstructSelectors();
	void Detect_Settings();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_GraphicsOption_C">();
	}
	static class UUMG_GraphicsOption_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_GraphicsOption_C>();
	}
};
static_assert(alignof(UUMG_GraphicsOption_C) == 0x000008, "Wrong alignment on UUMG_GraphicsOption_C");
static_assert(sizeof(UUMG_GraphicsOption_C) == 0x0002F8, "Wrong size on UUMG_GraphicsOption_C");
static_assert(offsetof(UUMG_GraphicsOption_C, UberGraphFrame) == 0x000260, "Member 'UUMG_GraphicsOption_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, AntiAliasing) == 0x000268, "Member 'UUMG_GraphicsOption_C::AntiAliasing' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, AutoDetect) == 0x000270, "Member 'UUMG_GraphicsOption_C::AutoDetect' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, EffectsQuality) == 0x000278, "Member 'UUMG_GraphicsOption_C::EffectsQuality' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, FoliageQuality) == 0x000280, "Member 'UUMG_GraphicsOption_C::FoliageQuality' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, PostProcess) == 0x000288, "Member 'UUMG_GraphicsOption_C::PostProcess' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, Resolution) == 0x000290, "Member 'UUMG_GraphicsOption_C::Resolution' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, ResolutionScale) == 0x000298, "Member 'UUMG_GraphicsOption_C::ResolutionScale' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, ShadowQuality) == 0x0002A0, "Member 'UUMG_GraphicsOption_C::ShadowQuality' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, TextureQuality) == 0x0002A8, "Member 'UUMG_GraphicsOption_C::TextureQuality' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, UMG_Framerate) == 0x0002B0, "Member 'UUMG_GraphicsOption_C::UMG_Framerate' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, Vsync) == 0x0002B8, "Member 'UUMG_GraphicsOption_C::Vsync' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, WindowMode) == 0x0002C0, "Member 'UUMG_GraphicsOption_C::WindowMode' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, ResolutionOptions) == 0x0002C8, "Member 'UUMG_GraphicsOption_C::ResolutionOptions' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, DefaultNames) == 0x0002D8, "Member 'UUMG_GraphicsOption_C::DefaultNames' has a wrong offset!");
static_assert(offsetof(UUMG_GraphicsOption_C, FramerateOptions) == 0x0002E8, "Member 'UUMG_GraphicsOption_C::FramerateOptions' has a wrong offset!");

}

