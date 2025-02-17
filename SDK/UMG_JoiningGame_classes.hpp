﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_JoiningGame

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_JoiningGame.UMG_JoiningGame_C
// 0x0008 (0x0268 - 0x0260)
class UUMG_JoiningGame_C final : public UUserWidget
{
public:
	class UCircularThrobber*                      CircularThrobber_0;                                // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_JoiningGame_C">();
	}
	static class UUMG_JoiningGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_JoiningGame_C>();
	}
};
static_assert(alignof(UUMG_JoiningGame_C) == 0x000008, "Wrong alignment on UUMG_JoiningGame_C");
static_assert(sizeof(UUMG_JoiningGame_C) == 0x000268, "Wrong size on UUMG_JoiningGame_C");
static_assert(offsetof(UUMG_JoiningGame_C, CircularThrobber_0) == 0x000260, "Member 'UUMG_JoiningGame_C::CircularThrobber_0' has a wrong offset!");

}

