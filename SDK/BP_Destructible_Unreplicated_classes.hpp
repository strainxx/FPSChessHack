﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Destructible_Unreplicated

#include "Basic.hpp"

#include "BP_Destructible_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Destructible_Unreplicated.BP_Destructible_Unreplicated_C
// 0x0000 (0x0260 - 0x0260)
class ABP_Destructible_Unreplicated_C final : public ABP_Destructible_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Destructible_Unreplicated_C">();
	}
	static class ABP_Destructible_Unreplicated_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Destructible_Unreplicated_C>();
	}
};
static_assert(alignof(ABP_Destructible_Unreplicated_C) == 0x000008, "Wrong alignment on ABP_Destructible_Unreplicated_C");
static_assert(sizeof(ABP_Destructible_Unreplicated_C) == 0x000260, "Wrong size on ABP_Destructible_Unreplicated_C");

}

