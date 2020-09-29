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

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.GetNpcChestLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UBP_CharacterActionEvent_Interface_C::GetNpcChestLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.GetNpcChestLocation");

	UBP_CharacterActionEvent_Interface_C_GetNpcChestLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.ToggleDropShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterActionEvent_Interface_C::ToggleDropShadow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.ToggleDropShadow");

	UBP_CharacterActionEvent_Interface_C_ToggleDropShadow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.BlueprintAnimationRateOptimization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterActionEvent_Interface_C::BlueprintAnimationRateOptimization(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.BlueprintAnimationRateOptimization");

	UBP_CharacterActionEvent_Interface_C_BlueprintAnimationRateOptimization_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Hide Blaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterActionEvent_Interface_C::Hide_Blaster(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Hide Blaster");

	UBP_CharacterActionEvent_Interface_C_Hide_Blaster_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterActionEvent_Interface_C::GetAnimInstance(class UAnimInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.GetAnimInstance");

	UBP_CharacterActionEvent_Interface_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.BlueprintTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterActionEvent_Interface_C::BlueprintTick(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.BlueprintTick");

	UBP_CharacterActionEvent_Interface_C_BlueprintTick_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - SpawnSlash
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterActionEvent_Interface_C::Decals___SpawnSlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - SpawnSlash");

	UBP_CharacterActionEvent_Interface_C_Decals___SpawnSlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - SpawnStab
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterActionEvent_Interface_C::Decals___SpawnStab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - SpawnStab");

	UBP_CharacterActionEvent_Interface_C_Decals___SpawnStab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - SpawnHit
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterActionEvent_Interface_C::Decals___SpawnHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - SpawnHit");

	UBP_CharacterActionEvent_Interface_C_Decals___SpawnHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - Delete
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterActionEvent_Interface_C::Decals___Delete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - Delete");

	UBP_CharacterActionEvent_Interface_C_Decals___Delete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.AimAtActor?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterActionEvent_Interface_C::AimAtActor_(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.AimAtActor?");

	UBP_CharacterActionEvent_Interface_C_AimAtActor__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.ShouldAimAtPlayer?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterActionEvent_Interface_C::ShouldAimAtPlayer_(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.ShouldAimAtPlayer?");

	UBP_CharacterActionEvent_Interface_C_ShouldAimAtPlayer__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.FireBlaster
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterActionEvent_Interface_C::FireBlaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.FireBlaster");

	UBP_CharacterActionEvent_Interface_C_FireBlaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
