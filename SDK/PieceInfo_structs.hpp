﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PieceInfo

#include "Basic.hpp"

#include "PieceTypes_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct PieceInfo.PieceInfo
// 0x0010 (0x0010 - 0x0000)
struct FPieceInfo final
{
public:
	EPieceTypes                                   type_2_BC1E779D4809D02E35E208AADDD9E944;           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              location_6_15ED60E44B060A60903CAA8278C9C0BD;       // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWhite_9_A03C098940C7B2A31A5A9E842465BE45;        // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          BSide_11_9257C9D148FB8E80C3468DA0D3FB8392;         // 0x000D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FPieceInfo) == 0x000004, "Wrong alignment on FPieceInfo");
static_assert(sizeof(FPieceInfo) == 0x000010, "Wrong size on FPieceInfo");
static_assert(offsetof(FPieceInfo, type_2_BC1E779D4809D02E35E208AADDD9E944) == 0x000000, "Member 'FPieceInfo::type_2_BC1E779D4809D02E35E208AADDD9E944' has a wrong offset!");
static_assert(offsetof(FPieceInfo, location_6_15ED60E44B060A60903CAA8278C9C0BD) == 0x000004, "Member 'FPieceInfo::location_6_15ED60E44B060A60903CAA8278C9C0BD' has a wrong offset!");
static_assert(offsetof(FPieceInfo, IsWhite_9_A03C098940C7B2A31A5A9E842465BE45) == 0x00000C, "Member 'FPieceInfo::IsWhite_9_A03C098940C7B2A31A5A9E842465BE45' has a wrong offset!");
static_assert(offsetof(FPieceInfo, BSide_11_9257C9D148FB8E80C3468DA0D3FB8392) == 0x00000D, "Member 'FPieceInfo::BSide_11_9257C9D148FB8E80C3468DA0D3FB8392' has a wrong offset!");

}

