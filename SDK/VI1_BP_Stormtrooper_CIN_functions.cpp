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

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.GetNpcChestLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::GetNpcChestLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.GetNpcChestLocation");

	ABP_Stormtrooper_CIN_C_GetNpcChestLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::GetAnimInstance(class UAnimInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.GetAnimInstance");

	ABP_Stormtrooper_CIN_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.AimAtActor?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::AimAtActor_(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.AimAtActor?");

	ABP_Stormtrooper_CIN_C_AimAtActor__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ShouldAimAtPlayer?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::ShouldAimAtPlayer_(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ShouldAimAtPlayer?");

	ABP_Stormtrooper_CIN_C_ShouldAimAtPlayer__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Temp_OffsetBlaster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Stormtrooper_CIN_C::Temp_OffsetBlaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Temp_OffsetBlaster");

	ABP_Stormtrooper_CIN_C_Temp_OffsetBlaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.OffsetBlaster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Stormtrooper_CIN_C::OffsetBlaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.OffsetBlaster");

	ABP_Stormtrooper_CIN_C_OffsetBlaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ShowBlaster
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Stormtrooper_CIN_C::ShowBlaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ShowBlaster");

	ABP_Stormtrooper_CIN_C_ShowBlaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.HideBlaster
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Stormtrooper_CIN_C::HideBlaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.HideBlaster");

	ABP_Stormtrooper_CIN_C_HideBlaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.SetSequenceBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Interp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::SetSequenceBlendWeight(float Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.SetSequenceBlendWeight");

	ABP_Stormtrooper_CIN_C_SetSequenceBlendWeight_Params params;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Stormtrooper_CIN_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.UserConstructionScript");

	ABP_Stormtrooper_CIN_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.BlueprintAnimationRateOptimization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::BlueprintAnimationRateOptimization(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.BlueprintAnimationRateOptimization");

	ABP_Stormtrooper_CIN_C_BlueprintAnimationRateOptimization_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.SetAnimationReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterPerformanceLookAtStruct Settings                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Stormtrooper_CIN_C::SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.SetAnimationReferences");

	ABP_Stormtrooper_CIN_C_SetAnimationReferences_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.RequestSetSequencerBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::RequestSetSequencerBlendWeight(float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.RequestSetSequencerBlendWeight");

	ABP_Stormtrooper_CIN_C_RequestSetSequencerBlendWeight_Params params;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Stormtrooper_CIN_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ReceiveBeginPlay");

	ABP_Stormtrooper_CIN_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ReceiveTick");

	ABP_Stormtrooper_CIN_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Disable LookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               DistanceLimits                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          HeadLookAtStrength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EyeLookAtStrength              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BodyLookAtStrength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Disable LookAt");

	ABP_Stormtrooper_CIN_C_Disable_LookAt_Params params;
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


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.FireBlaster
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Stormtrooper_CIN_C::FireBlaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.FireBlaster");

	ABP_Stormtrooper_CIN_C_FireBlaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.BlueprintTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::BlueprintTick(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.BlueprintTick");

	ABP_Stormtrooper_CIN_C_BlueprintTick_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Hide Blaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::Hide_Blaster(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Hide Blaster");

	ABP_Stormtrooper_CIN_C_Hide_Blaster_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ToggleDropShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::ToggleDropShadow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ToggleDropShadow");

	ABP_Stormtrooper_CIN_C_ToggleDropShadow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - SpawnStab
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Stormtrooper_CIN_C::Decals___SpawnStab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - SpawnStab");

	ABP_Stormtrooper_CIN_C_Decals___SpawnStab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - SpawnSlash
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Stormtrooper_CIN_C::Decals___SpawnSlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - SpawnSlash");

	ABP_Stormtrooper_CIN_C_Decals___SpawnSlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - SpawnHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Stormtrooper_CIN_C::Decals___SpawnHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - SpawnHit");

	ABP_Stormtrooper_CIN_C_Decals___SpawnHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - Delete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Stormtrooper_CIN_C::Decals___Delete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - Delete");

	ABP_Stormtrooper_CIN_C_Decals___Delete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ExecuteUbergraph_BP_Stormtrooper_CIN
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Stormtrooper_CIN_C::ExecuteUbergraph_BP_Stormtrooper_CIN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ExecuteUbergraph_BP_Stormtrooper_CIN");

	ABP_Stormtrooper_CIN_C_ExecuteUbergraph_BP_Stormtrooper_CIN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
