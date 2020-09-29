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

// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.DrawReferenceAxis
struct ABP_PlayerCombatPointManager_C_DrawReferenceAxis_Params
{
};

// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.VisualizeSpecificCombatPoint
struct ABP_PlayerCombatPointManager_C_VisualizeSpecificCombatPoint_Params
{
};

// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.DrawCombatPoint
struct ABP_PlayerCombatPointManager_C_DrawCombatPoint_Params
{
	struct FKFCircleCombatPoint                        KFCircleCombatPoint;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.StopVisualizer
struct ABP_PlayerCombatPointManager_C_StopVisualizer_Params
{
};

// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.VisualizeCombatPoints
struct ABP_PlayerCombatPointManager_C_VisualizeCombatPoints_Params
{
	TArray<struct FKFCircleCombatPoint>                InCombatPoints;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.Visualize 360 CombatPoints
struct ABP_PlayerCombatPointManager_C_Visualize_360_CombatPoints_Params
{
};

// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.VisualizeStandardCombatPoints
struct ABP_PlayerCombatPointManager_C_VisualizeStandardCombatPoints_Params
{
};

// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.UserConstructionScript
struct ABP_PlayerCombatPointManager_C_UserConstructionScript_Params
{
};

// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.ReceiveBeginPlay
struct ABP_PlayerCombatPointManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.ExecuteUbergraph_BP_PlayerCombatPointManager
struct ABP_PlayerCombatPointManager_C_ExecuteUbergraph_BP_PlayerCombatPointManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
