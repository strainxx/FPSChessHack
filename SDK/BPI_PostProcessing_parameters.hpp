﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PostProcessing

#include "Basic.hpp"

#include "E_PP_Effect_structs.hpp"


namespace SDK::Params
{

// Function BPI_PostProcessing.BPI_PostProcessing_C.ActivatePostProcessing
// 0x0001 (0x0001 - 0x0000)
struct BPI_PostProcessing_C_ActivatePostProcessing final
{
public:
	E_PP_Effect                                   Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_PostProcessing_C_ActivatePostProcessing) == 0x000001, "Wrong alignment on BPI_PostProcessing_C_ActivatePostProcessing");
static_assert(sizeof(BPI_PostProcessing_C_ActivatePostProcessing) == 0x000001, "Wrong size on BPI_PostProcessing_C_ActivatePostProcessing");
static_assert(offsetof(BPI_PostProcessing_C_ActivatePostProcessing, Type) == 0x000000, "Member 'BPI_PostProcessing_C_ActivatePostProcessing::Type' has a wrong offset!");

// Function BPI_PostProcessing.BPI_PostProcessing_C.DeactivatePostProcessing
// 0x0001 (0x0001 - 0x0000)
struct BPI_PostProcessing_C_DeactivatePostProcessing final
{
public:
	E_PP_Effect                                   Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_PostProcessing_C_DeactivatePostProcessing) == 0x000001, "Wrong alignment on BPI_PostProcessing_C_DeactivatePostProcessing");
static_assert(sizeof(BPI_PostProcessing_C_DeactivatePostProcessing) == 0x000001, "Wrong size on BPI_PostProcessing_C_DeactivatePostProcessing");
static_assert(offsetof(BPI_PostProcessing_C_DeactivatePostProcessing, Type) == 0x000000, "Member 'BPI_PostProcessing_C_DeactivatePostProcessing::Type' has a wrong offset!");

}

