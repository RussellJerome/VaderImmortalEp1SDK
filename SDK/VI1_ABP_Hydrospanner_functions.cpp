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

// Function ABP_Hydrospanner.ABP_Hydrospanner_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hydrospanner_AnimGraphNode_ModifyBone_B1F3D0F24FA83726E31D9392E8EB5175
// (BlueprintEvent)

void UABP_Hydrospanner_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hydrospanner_AnimGraphNode_ModifyBone_B1F3D0F24FA83726E31D9392E8EB5175()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Hydrospanner.ABP_Hydrospanner_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hydrospanner_AnimGraphNode_ModifyBone_B1F3D0F24FA83726E31D9392E8EB5175");

	UABP_Hydrospanner_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hydrospanner_AnimGraphNode_ModifyBone_B1F3D0F24FA83726E31D9392E8EB5175_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Hydrospanner.ABP_Hydrospanner_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Hydrospanner_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Hydrospanner.ABP_Hydrospanner_C.BlueprintUpdateAnimation");

	UABP_Hydrospanner_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Hydrospanner.ABP_Hydrospanner_C.ExecuteUbergraph_ABP_Hydrospanner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Hydrospanner_C::ExecuteUbergraph_ABP_Hydrospanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Hydrospanner.ABP_Hydrospanner_C.ExecuteUbergraph_ABP_Hydrospanner");

	UABP_Hydrospanner_C_ExecuteUbergraph_ABP_Hydrospanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
