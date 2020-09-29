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

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ShouldAimAtPlayer?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_CorvaxDroid_C::ShouldAimAtPlayer_(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ShouldAimAtPlayer?");

	ABP_Lightsaber_CorvaxDroid_C_ShouldAimAtPlayer__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.AimAtActor?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_CorvaxDroid_C::AimAtActor_(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.AimAtActor?");

	ABP_Lightsaber_CorvaxDroid_C_AimAtActor__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_CorvaxDroid_C::GetAnimInstance(class UAnimInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.GetAnimInstance");

	ABP_Lightsaber_CorvaxDroid_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.GetNpcChestLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_Lightsaber_CorvaxDroid_C::GetNpcChestLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.GetNpcChestLocation");

	ABP_Lightsaber_CorvaxDroid_C_GetNpcChestLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.UserConstructionScript");

	ABP_Lightsaber_CorvaxDroid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_0_0__FinishedFunc
// (BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::Timeline_0_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_0_0__FinishedFunc");

	ABP_Lightsaber_CorvaxDroid_C_Timeline_0_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_0_0__UpdateFunc
// (BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::Timeline_0_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_0_0__UpdateFunc");

	ABP_Lightsaber_CorvaxDroid_C_Timeline_0_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_1__FinishedFunc");

	ABP_Lightsaber_CorvaxDroid_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_1__UpdateFunc");

	ABP_Lightsaber_CorvaxDroid_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_CorvaxDroid_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ReceiveTick");

	ABP_Lightsaber_CorvaxDroid_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.TrainingDroidUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         BladeProgress                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_CorvaxDroid_C::TrainingDroidUpdate(float* BladeProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.TrainingDroidUpdate");

	ABP_Lightsaber_CorvaxDroid_C_TrainingDroidUpdate_Params params;
	params.BladeProgress = BladeProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.StartCharge
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::StartCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.StartCharge");

	ABP_Lightsaber_CorvaxDroid_C_StartCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.EndCharge
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::EndCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.EndCharge");

	ABP_Lightsaber_CorvaxDroid_C_EndCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Recoil
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::Recoil()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Recoil");

	ABP_Lightsaber_CorvaxDroid_C_Recoil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ReceiveBeginPlay");

	ABP_Lightsaber_CorvaxDroid_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.RecoilRecover
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::RecoilRecover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.RecoilRecover");

	ABP_Lightsaber_CorvaxDroid_C_RecoilRecover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.TD_FXOff
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::TD_FXOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.TD_FXOff");

	ABP_Lightsaber_CorvaxDroid_C_TD_FXOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.TD_FXOn
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::TD_FXOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.TD_FXOn");

	ABP_Lightsaber_CorvaxDroid_C_TD_FXOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.RTPC_HumDistanceVolume
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::RTPC_HumDistanceVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.RTPC_HumDistanceVolume");

	ABP_Lightsaber_CorvaxDroid_C_RTPC_HumDistanceVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.AK_LoadBank
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::AK_LoadBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.AK_LoadBank");

	ABP_Lightsaber_CorvaxDroid_C_AK_LoadBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.FadeInSaber
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::FadeInSaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.FadeInSaber");

	ABP_Lightsaber_CorvaxDroid_C_FadeInSaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.FadeOutSaber
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::FadeOutSaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.FadeOutSaber");

	ABP_Lightsaber_CorvaxDroid_C_FadeOutSaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.IntensityGlowUp
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::IntensityGlowUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.IntensityGlowUp");

	ABP_Lightsaber_CorvaxDroid_C_IntensityGlowUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.IntensityGlowDown
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::IntensityGlowDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.IntensityGlowDown");

	ABP_Lightsaber_CorvaxDroid_C_IntensityGlowDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.InitialSparkBurst
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_CorvaxDroid_C::InitialSparkBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.InitialSparkBurst");

	ABP_Lightsaber_CorvaxDroid_C_InitialSparkBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.BlueprintTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_CorvaxDroid_C::BlueprintTick(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.BlueprintTick");

	ABP_Lightsaber_CorvaxDroid_C_BlueprintTick_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ExecuteUbergraph_BP_Lightsaber_CorvaxDroid
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_CorvaxDroid_C::ExecuteUbergraph_BP_Lightsaber_CorvaxDroid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ExecuteUbergraph_BP_Lightsaber_CorvaxDroid");

	ABP_Lightsaber_CorvaxDroid_C_ExecuteUbergraph_BP_Lightsaber_CorvaxDroid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
