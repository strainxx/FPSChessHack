﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Knight

#include "Basic.hpp"

#include "BP_Piece_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Knight.BP_Knight_C
// 0x0000 (0x02B0 - 0x02B0)
class ABP_Knight_C final : public ABP_Piece_C
{
public:
	void NewFunction_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Knight_C">();
	}
	static class ABP_Knight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Knight_C>();
	}
};
static_assert(alignof(ABP_Knight_C) == 0x000008, "Wrong alignment on ABP_Knight_C");
static_assert(sizeof(ABP_Knight_C) == 0x0002B0, "Wrong size on ABP_Knight_C");

}

