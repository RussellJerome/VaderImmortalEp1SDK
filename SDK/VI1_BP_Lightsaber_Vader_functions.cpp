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

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ShouldAimAtPlayer?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Vader_C::ShouldAimAtPlayer_(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ShouldAimAtPlayer?");

	ABP_Lightsaber_Vader_C_ShouldAimAtPlayer__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.AimAtActor?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Vader_C::AimAtActor_(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.AimAtActor?");

	ABP_Lightsaber_Vader_C_AimAtActor__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Vader_C::GetAnimInstance(class UAnimInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.GetAnimInstance");

	ABP_Lightsaber_Vader_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.GetNpcChestLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_Lightsaber_Vader_C::GetNpcChestLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.GetNpcChestLocation");

	ABP_Lightsaber_Vader_C_GetNpcChestLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.GetEnemyType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEnemyType                     EnemyType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Vader_C::GetEnemyType(EEnemyType* EnemyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.GetEnemyType");

	ABP_Lightsaber_Vader_C_GetEnemyType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyType != nullptr)
		*EnemyType = params.EnemyType;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_Vader_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.UserConstructionScript");

	ABP_Lightsaber_Vader_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - SpawnHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_Vader_C::Decals___SpawnHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - SpawnHit");

	ABP_Lightsaber_Vader_C_Decals___SpawnHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - SpawnStab
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_Vader_C::Decals___SpawnStab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - SpawnStab");

	ABP_Lightsaber_Vader_C_Decals___SpawnStab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - SpawnSlash
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_Vader_C::Decals___SpawnSlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - SpawnSlash");

	ABP_Lightsaber_Vader_C_Decals___SpawnSlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.BlueprintTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Vader_C::BlueprintTick(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.BlueprintTick");

	ABP_Lightsaber_Vader_C_BlueprintTick_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Hide Blaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Vader_C::Hide_Blaster(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Hide Blaster");

	ABP_Lightsaber_Vader_C_Hide_Blaster_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.BlueprintAnimationRateOptimization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Vader_C::BlueprintAnimationRateOptimization(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.BlueprintAnimationRateOptimization");

	ABP_Lightsaber_Vader_C_BlueprintAnimationRateOptimization_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ToggleDropShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Vader_C::ToggleDropShadow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ToggleDropShadow");

	ABP_Lightsaber_Vader_C_ToggleDropShadow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Lightsaber_Vader_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ReceiveBeginPlay");

	ABP_Lightsaber_Vader_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - Delete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_Vader_C::Decals___Delete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - Delete");

	ABP_Lightsaber_Vader_C_Decals___Delete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.FireBlaster
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_Vader_C::FireBlaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.FireBlaster");

	ABP_Lightsaber_Vader_C_FireBlaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.RTPC_HumDistanceVolume
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_Vader_C::RTPC_HumDistanceVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.RTPC_HumDistanceVolume");

	ABP_Lightsaber_Vader_C_RTPC_HumDistanceVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.SetBlueprintCollisions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Vader_C::SetBlueprintCollisions(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.SetBlueprintCollisions");

	ABP_Lightsaber_Vader_C_SetBlueprintCollisions_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.SetBlueprintLiteCollisions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Vader_C::SetBlueprintLiteCollisions(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.SetBlueprintLiteCollisions");

	ABP_Lightsaber_Vader_C_SetBlueprintLiteCollisions_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ExecuteUbergraph_BP_Lightsaber_Vader
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Vader_C::ExecuteUbergraph_BP_Lightsaber_Vader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ExecuteUbergraph_BP_Lightsaber_Vader");

	ABP_Lightsaber_Vader_C_ExecuteUbergraph_BP_Lightsaber_Vader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
