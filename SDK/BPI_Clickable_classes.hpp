﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Clickable

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Clickable.BPI_Clickable_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Clickable_C final : public IInterface
{
public:
	void Clicked();
	void Selected(bool isSelected);
	void BackSequence();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Clickable_C">();
	}
	static class IBPI_Clickable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Clickable_C>();
	}
};
static_assert(alignof(IBPI_Clickable_C) == 0x000008, "Wrong alignment on IBPI_Clickable_C");
static_assert(sizeof(IBPI_Clickable_C) == 0x000028, "Wrong size on IBPI_Clickable_C");

}

