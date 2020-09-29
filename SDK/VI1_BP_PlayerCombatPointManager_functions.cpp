// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.DrawReferenceAxis
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCombatPointManager_C::DrawReferenceAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.DrawReferenceAxis");

	ABP_PlayerCombatPointManager_C_DrawReferenceAxis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.VisualizeSpecificCombatPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCombatPointManager_C::VisualizeSpecificCombatPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.VisualizeSpecificCombatPoint");

	ABP_PlayerCombatPointManager_C_VisualizeSpecificCombatPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.DrawCombatPoint
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKFCircleCombatPoint    KFCircleCombatPoint            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCombatPointManager_C::DrawCombatPoint(const struct FKFCircleCombatPoint& KFCircleCombatPoint, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.DrawCombatPoint");

	ABP_PlayerCombatPointManager_C_DrawCombatPoint_Params params;
	params.KFCircleCombatPoint = KFCircleCombatPoint;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.StopVisualizer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCombatPointManager_C::StopVisualizer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.StopVisualizer");

	ABP_PlayerCombatPointManager_C_StopVisualizer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.VisualizeCombatPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FKFCircleCombatPoint> InCombatPoints                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PlayerCombatPointManager_C::VisualizeCombatPoints(TArray<struct FKFCircleCombatPoint>* InCombatPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.VisualizeCombatPoints");

	ABP_PlayerCombatPointManager_C_VisualizeCombatPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCombatPoints != nullptr)
		*InCombatPoints = params.InCombatPoints;
}


// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.Visualize 360 CombatPoints
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCombatPointManager_C::Visualize_360_CombatPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.Visualize 360 CombatPoints");

	ABP_PlayerCombatPointManager_C_Visualize_360_CombatPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.VisualizeStandardCombatPoints
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCombatPointManager_C::VisualizeStandardCombatPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.VisualizeStandardCombatPoints");

	ABP_PlayerCombatPointManager_C_VisualizeStandardCombatPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCombatPointManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.UserConstructionScript");

	ABP_PlayerCombatPointManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerCombatPointManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.ReceiveBeginPlay");

	ABP_PlayerCombatPointManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.ExecuteUbergraph_BP_PlayerCombatPointManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCombatPointManager_C::ExecuteUbergraph_BP_PlayerCombatPointManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C.ExecuteUbergraph_BP_PlayerCombatPointManager");

	ABP_PlayerCombatPointManager_C_ExecuteUbergraph_BP_PlayerCombatPointManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
