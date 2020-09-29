#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MenuItemIterator.BP_MenuItemIterator_C.GetNextIteration
struct UBP_MenuItemIterator_C_GetNextIteration_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MenuItemIterator.BP_MenuItemIterator_C.SetInitialIteration
struct UBP_MenuItemIterator_C_SetInitialIteration_Params
{
	int                                                InitialIteration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuItemIterator.BP_MenuItemIterator_C.OverrideMinMax
struct UBP_MenuItemIterator_C_OverrideMinMax_Params
{
	int                                                Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuItemIterator.BP_MenuItemIterator_C.Iterate
struct UBP_MenuItemIterator_C_Iterate_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuItemIterator.BP_MenuItemIterator_C.StopIterating
struct UBP_MenuItemIterator_C_StopIterating_Params
{
};

// Function BP_MenuItemIterator.BP_MenuItemIterator_C.StartIterating
struct UBP_MenuItemIterator_C_StartIterating_Params
{
	bool                                               ShouldIncrease;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuItemIterator.BP_MenuItemIterator_C.GetCurrentIteration
struct UBP_MenuItemIterator_C_GetCurrentIteration_Params
{
	int                                                CurrentIteration;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuItemIterator.BP_MenuItemIterator_C.OnSelectionUpdated__DelegateSignature
struct UBP_MenuItemIterator_C_OnSelectionUpdated__DelegateSignature_Params
{
	int                                                NewSelection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
