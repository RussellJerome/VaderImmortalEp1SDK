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

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ShouldAimAtPlayer?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ITOCharacter_Basic_C::ShouldAimAtPlayer_(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ShouldAimAtPlayer?");

	ABP_ITOCharacter_Basic_C_ShouldAimAtPlayer__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.AimAtActor?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ITOCharacter_Basic_C::AimAtActor_(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.AimAtActor?");

	ABP_ITOCharacter_Basic_C_AimAtActor__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ITOCharacter_Basic_C::GetAnimInstance(class UAnimInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.GetAnimInstance");

	ABP_ITOCharacter_Basic_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.GetNpcChestLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_ITOCharacter_Basic_C::GetNpcChestLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.GetNpcChestLocation");

	ABP_ITOCharacter_Basic_C_GetNpcChestLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.SetSequenceBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Interp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ITOCharacter_Basic_C::SetSequenceBlendWeight(float Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.SetSequenceBlendWeight");

	ABP_ITOCharacter_Basic_C_SetSequenceBlendWeight_Params params;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ITOCharacter_Basic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.UserConstructionScript");

	ABP_ITOCharacter_Basic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.FireBlaster
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ITOCharacter_Basic_C::FireBlaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.FireBlaster");

	ABP_ITOCharacter_Basic_C_FireBlaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - Delete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ITOCharacter_Basic_C::Decals___Delete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - Delete");

	ABP_ITOCharacter_Basic_C_Decals___Delete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - SpawnHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ITOCharacter_Basic_C::Decals___SpawnHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - SpawnHit");

	ABP_ITOCharacter_Basic_C_Decals___SpawnHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - SpawnStab
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ITOCharacter_Basic_C::Decals___SpawnStab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - SpawnStab");

	ABP_ITOCharacter_Basic_C_Decals___SpawnStab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - SpawnSlash
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ITOCharacter_Basic_C::Decals___SpawnSlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - SpawnSlash");

	ABP_ITOCharacter_Basic_C_Decals___SpawnSlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.BlueprintTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ITOCharacter_Basic_C::BlueprintTick(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.BlueprintTick");

	ABP_ITOCharacter_Basic_C_BlueprintTick_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Hide Blaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ITOCharacter_Basic_C::Hide_Blaster(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Hide Blaster");

	ABP_ITOCharacter_Basic_C_Hide_Blaster_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.BlueprintAnimationRateOptimization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ITOCharacter_Basic_C::BlueprintAnimationRateOptimization(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.BlueprintAnimationRateOptimization");

	ABP_ITOCharacter_Basic_C_BlueprintAnimationRateOptimization_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ToggleDropShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ITOCharacter_Basic_C::ToggleDropShadow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ToggleDropShadow");

	ABP_ITOCharacter_Basic_C_ToggleDropShadow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ITOCharacter_Basic_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ReceiveTick");

	ABP_ITOCharacter_Basic_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ITOCharacter_Basic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ReceiveBeginPlay");

	ABP_ITOCharacter_Basic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ExecuteUbergraph_BP_ITOCharacter_Basic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ITOCharacter_Basic_C::ExecuteUbergraph_BP_ITOCharacter_Basic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ExecuteUbergraph_BP_ITOCharacter_Basic");

	ABP_ITOCharacter_Basic_C_ExecuteUbergraph_BP_ITOCharacter_Basic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
