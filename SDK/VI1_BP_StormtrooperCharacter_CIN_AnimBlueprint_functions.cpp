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

// Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint_AnimGraphNode_SubInstance_F26D4A52462EE201910878BA0CB06D65
// (BlueprintEvent)

void UBP_StormtrooperCharacter_CIN_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint_AnimGraphNode_SubInstance_F26D4A52462EE201910878BA0CB06D65()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint_AnimGraphNode_SubInstance_F26D4A52462EE201910878BA0CB06D65");

	UBP_StormtrooperCharacter_CIN_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint_AnimGraphNode_SubInstance_F26D4A52462EE201910878BA0CB06D65_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint_AnimGraphNode_TwoWayBlend_23157F514F8EF140A9B2409DEEF4D85B
// (BlueprintEvent)

void UBP_StormtrooperCharacter_CIN_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint_AnimGraphNode_TwoWayBlend_23157F514F8EF140A9B2409DEEF4D85B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint_AnimGraphNode_TwoWayBlend_23157F514F8EF140A9B2409DEEF4D85B");

	UBP_StormtrooperCharacter_CIN_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint_AnimGraphNode_TwoWayBlend_23157F514F8EF140A9B2409DEEF4D85B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.Disable LookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               DistanceLimits                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          HeadLookAtStrength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EyeLookAtStrength              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BodyLookAtStrength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StormtrooperCharacter_CIN_AnimBlueprint_C::Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.Disable LookAt");

	UBP_StormtrooperCharacter_CIN_AnimBlueprint_C_Disable_LookAt_Params params;
	params.Enable = Enable;
	params.TransitionDuration = TransitionDuration;
	params.DistanceLimits = DistanceLimits;
	params.HeadLookAtStrength = HeadLookAtStrength;
	params.EyeLookAtStrength = EyeLookAtStrength;
	params.BodyLookAtStrength = BodyLookAtStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.SetAnimationReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterPerformanceLookAtStruct Settings                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_StormtrooperCharacter_CIN_AnimBlueprint_C::SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.SetAnimationReferences");

	UBP_StormtrooperCharacter_CIN_AnimBlueprint_C_SetAnimationReferences_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.RequestSetSequencerBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StormtrooperCharacter_CIN_AnimBlueprint_C::RequestSetSequencerBlendWeight(float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.RequestSetSequencerBlendWeight");

	UBP_StormtrooperCharacter_CIN_AnimBlueprint_C_RequestSetSequencerBlendWeight_Params params;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.AnimNotify_FireBlaster
// (BlueprintCallable, BlueprintEvent)

void UBP_StormtrooperCharacter_CIN_AnimBlueprint_C::AnimNotify_FireBlaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.AnimNotify_FireBlaster");

	UBP_StormtrooperCharacter_CIN_AnimBlueprint_C_AnimNotify_FireBlaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StormtrooperCharacter_CIN_AnimBlueprint_C::ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C.ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint");

	UBP_StormtrooperCharacter_CIN_AnimBlueprint_C_ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
