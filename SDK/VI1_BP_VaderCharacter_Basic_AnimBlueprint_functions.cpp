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

// Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint_AnimGraphNode_TwoWayBlend_E3BB84D94483ACD2C4C2B6A95D6496C9
// (BlueprintEvent)

void UBP_VaderCharacter_Basic_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint_AnimGraphNode_TwoWayBlend_E3BB84D94483ACD2C4C2B6A95D6496C9()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint_AnimGraphNode_TwoWayBlend_E3BB84D94483ACD2C4C2B6A95D6496C9");

	UBP_VaderCharacter_Basic_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint_AnimGraphNode_TwoWayBlend_E3BB84D94483ACD2C4C2B6A95D6496C9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint_AnimGraphNode_SubInstance_09A7E2094DB5E05D7C0EF1AD9956830C
// (BlueprintEvent)

void UBP_VaderCharacter_Basic_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint_AnimGraphNode_SubInstance_09A7E2094DB5E05D7C0EF1AD9956830C()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint_AnimGraphNode_SubInstance_09A7E2094DB5E05D7C0EF1AD9956830C");

	UBP_VaderCharacter_Basic_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint_AnimGraphNode_SubInstance_09A7E2094DB5E05D7C0EF1AD9956830C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.Disable LookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               DistanceLimits                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          HeadLookAtStrength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EyeLookAtStrength              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BodyLookAtStrength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VaderCharacter_Basic_AnimBlueprint_C::Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.Disable LookAt");

	UBP_VaderCharacter_Basic_AnimBlueprint_C_Disable_LookAt_Params params;
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


// Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.SetAnimationReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterPerformanceLookAtStruct Settings                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_VaderCharacter_Basic_AnimBlueprint_C::SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.SetAnimationReferences");

	UBP_VaderCharacter_Basic_AnimBlueprint_C_SetAnimationReferences_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.RequestSetSequencerBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VaderCharacter_Basic_AnimBlueprint_C::RequestSetSequencerBlendWeight(float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.RequestSetSequencerBlendWeight");

	UBP_VaderCharacter_Basic_AnimBlueprint_C_RequestSetSequencerBlendWeight_Params params;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_VaderCharacter_Basic_AnimBlueprint_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.BlueprintBeginPlay");

	UBP_VaderCharacter_Basic_AnimBlueprint_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VaderCharacter_Basic_AnimBlueprint_C::ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C.ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint");

	UBP_VaderCharacter_Basic_AnimBlueprint_C_ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
