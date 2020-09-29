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

// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.GetHeightAdjustment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          heightBlend                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TrainingDroid_AnimBlueprint_C::GetHeightAdjustment(float* heightBlend)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.GetHeightAdjustment");

	UBP_TrainingDroid_AnimBlueprint_C_GetHeightAdjustment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (heightBlend != nullptr)
		*heightBlend = params.heightBlend;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.DrawSaber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Draw                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            col                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Thick                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TrainingDroid_AnimBlueprint_C::DrawSaber(bool Draw, const struct FLinearColor& col, float Thick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.DrawSaber");

	UBP_TrainingDroid_AnimBlueprint_C_DrawSaber_Params params;
	params.Draw = Draw;
	params.col = col;
	params.Thick = Thick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.FloatingBob
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Period                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Amplitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TrainingDroid_AnimBlueprint_C::FloatingBob(float Time, float Period, float Amplitude, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.FloatingBob");

	UBP_TrainingDroid_AnimBlueprint_C_FloatingBob_Params params;
	params.Time = Time;
	params.Period = Period;
	params.Amplitude = Amplitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ApplyAdditive_CB360C304C5248B554F335B4D5B36D3B
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ApplyAdditive_CB360C304C5248B554F335B4D5B36D3B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ApplyAdditive_CB360C304C5248B554F335B4D5B36D3B");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ApplyAdditive_CB360C304C5248B554F335B4D5B36D3B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ApplyAdditive_42E230FD4723355CE1BC2DA20DD45C09
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ApplyAdditive_42E230FD4723355CE1BC2DA20DD45C09()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ApplyAdditive_42E230FD4723355CE1BC2DA20DD45C09");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ApplyAdditive_42E230FD4723355CE1BC2DA20DD45C09_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_784B03054E98BF4B790433B1F0409F85
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_784B03054E98BF4B790433B1F0409F85()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_784B03054E98BF4B790433B1F0409F85");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_784B03054E98BF4B790433B1F0409F85_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_NTMotionField_338EC61B4EF51FC818BF1B83C7790187
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_NTMotionField_338EC61B4EF51FC818BF1B83C7790187()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_NTMotionField_338EC61B4EF51FC818BF1B83C7790187");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_NTMotionField_338EC61B4EF51FC818BF1B83C7790187_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_SequencePlayer_E8FA5225451DC7D7F3EE72AC76ABC53D
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_SequencePlayer_E8FA5225451DC7D7F3EE72AC76ABC53D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_SequencePlayer_E8FA5225451DC7D7F3EE72AC76ABC53D");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_SequencePlayer_E8FA5225451DC7D7F3EE72AC76ABC53D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_7621AF8446766144D99156B586BDA86D
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_7621AF8446766144D99156B586BDA86D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_7621AF8446766144D99156B586BDA86D");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_7621AF8446766144D99156B586BDA86D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_979AD0F04F792B4A45DA2A988CCD4FA1
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_979AD0F04F792B4A45DA2A988CCD4FA1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_979AD0F04F792B4A45DA2A988CCD4FA1");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_979AD0F04F792B4A45DA2A988CCD4FA1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_CBE306034F61EAFE914FAEAA9AF401A1
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_CBE306034F61EAFE914FAEAA9AF401A1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_CBE306034F61EAFE914FAEAA9AF401A1");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_CBE306034F61EAFE914FAEAA9AF401A1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_TransitionResult_125B05A042BD3A5EF95B1FA2550F3A13
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_TransitionResult_125B05A042BD3A5EF95B1FA2550F3A13()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_TransitionResult_125B05A042BD3A5EF95B1FA2550F3A13");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_TransitionResult_125B05A042BD3A5EF95B1FA2550F3A13_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_54DACB9D4E1BE55E9CB114985F98A3AF
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_54DACB9D4E1BE55E9CB114985F98A3AF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_54DACB9D4E1BE55E9CB114985F98A3AF");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_54DACB9D4E1BE55E9CB114985F98A3AF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TrainingDroid_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.BlueprintUpdateAnimation");

	UBP_TrainingDroid_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_AllowBlock
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_AllowBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_AllowBlock");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_AllowBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_AllowStopBlade
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_AllowStopBlade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_AllowStopBlade");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_AllowStopBlade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_EndAllowStopBlade
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_EndAllowStopBlade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_EndAllowStopBlade");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_EndAllowStopBlade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_EndAllowBlock
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_EndAllowBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_EndAllowBlock");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_EndAllowBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.BlueprintBeginPlay");

	UBP_TrainingDroid_AnimBlueprint_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.activateDroid
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::activateDroid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.activateDroid");

	UBP_TrainingDroid_AnimBlueprint_C_activateDroid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_droidOn
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_droidOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_droidOn");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_droidOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_SaberOn
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_SaberOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_SaberOn");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_SaberOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_AtkChargeOn
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_AtkChargeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_AtkChargeOn");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_AtkChargeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_AtkChargeOff
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_AtkChargeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_AtkChargeOff");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_AtkChargeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_WeaponMalfunction
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_WeaponMalfunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_WeaponMalfunction");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_WeaponMalfunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_WeaponRestore
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_WeaponRestore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_WeaponRestore");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_WeaponRestore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_SaberOff
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_SaberOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_SaberOff");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_SaberOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_BlendListByBool_4CCEDE644041A21C38D2C6AC8C152650
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_BlendListByBool_4CCEDE644041A21C38D2C6AC8C152650()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_BlendListByBool_4CCEDE644041A21C38D2C6AC8C152650");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_BlendListByBool_4CCEDE644041A21C38D2C6AC8C152650_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_BlendListByBool_5598A7624FD8E3F1CD6753A5D6529418
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_BlendListByBool_5598A7624FD8E3F1CD6753A5D6529418()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_BlendListByBool_5598A7624FD8E3F1CD6753A5D6529418");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_BlendListByBool_5598A7624FD8E3F1CD6753A5D6529418_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_253A7F7647C789D0A6BA64AC0F8E3D0B
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_253A7F7647C789D0A6BA64AC0F8E3D0B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_253A7F7647C789D0A6BA64AC0F8E3D0B");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_253A7F7647C789D0A6BA64AC0F8E3D0B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_GrillOff
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_GrillOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_GrillOff");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_GrillOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.CustomEvent_1");

	UBP_TrainingDroid_AnimBlueprint_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Saber                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TrainingDroid_AnimBlueprint_C::CustomEvent_2(class AActor* Saber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.CustomEvent_2");

	UBP_TrainingDroid_AnimBlueprint_C_CustomEvent_2_Params params;
	params.Saber = Saber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.ClashOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARPOCPickup_Lightsaber*  Saber1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARPOCPickup_Lightsaber*  Saber2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RewindTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSaberClashData         Clash                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TrainingDroid_AnimBlueprint_C::ClashOn(class ARPOCPickup_Lightsaber* Saber1, class ARPOCPickup_Lightsaber* Saber2, float RewindTime, const struct FSaberClashData& Clash)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.ClashOn");

	UBP_TrainingDroid_AnimBlueprint_C_ClashOn_Params params;
	params.Saber1 = Saber1;
	params.Saber2 = Saber2;
	params.RewindTime = RewindTime;
	params.Clash = Clash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_PowerGlow
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_PowerGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_PowerGlow");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_PowerGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.Deactivate");

	UBP_TrainingDroid_AnimBlueprint_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_Activate
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_Activate");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_Deactivate
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_Deactivate");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_RestowFinished
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_RestowFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_RestowFinished");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_RestowFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.flinch
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::flinch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.flinch");

	UBP_TrainingDroid_AnimBlueprint_C_flinch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_TransitionResult_F406730C494DE6D4A329208644DBA41A
// (BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_TransitionResult_F406730C494DE6D4A329208644DBA41A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_TransitionResult_F406730C494DE6D4A329208644DBA41A");

	UBP_TrainingDroid_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_TransitionResult_F406730C494DE6D4A329208644DBA41A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_PreRagdoll
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_PreRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_PreRagdoll");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_PreRagdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_Explode
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_Explode");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_DisableMovement
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::AnimNotify_DisableMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.AnimNotify_DisableMovement");

	UBP_TrainingDroid_AnimBlueprint_C_AnimNotify_DisableMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TrainingDroid_AnimBlueprint_C::ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint");

	UBP_TrainingDroid_AnimBlueprint_C_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.RestowAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::RestowAnimFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.RestowAnimFinished__DelegateSignature");

	UBP_TrainingDroid_AnimBlueprint_C_RestowAnimFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.UnstowAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_TrainingDroid_AnimBlueprint_C::UnstowAnimFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C.UnstowAnimFinished__DelegateSignature");

	UBP_TrainingDroid_AnimBlueprint_C_UnstowAnimFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
