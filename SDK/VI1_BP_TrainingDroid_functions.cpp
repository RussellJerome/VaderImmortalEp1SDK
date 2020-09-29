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

// Function BP_TrainingDroid.BP_TrainingDroid_C.GetComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AttachPointName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAkComponent* ABP_TrainingDroid_C::GetComponent(const struct FName& AttachPointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.GetComponent");

	ABP_TrainingDroid_C_GetComponent_Params params;
	params.AttachPointName = AttachPointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateHitFXTimestamps
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::UpdateHitFXTimestamps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateHitFXTimestamps");

	ABP_TrainingDroid_C_UpdateHitFXTimestamps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.PlayValidHitFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            HitCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::PlayValidHitFX(const struct FWKNDDamageInfo& DamageInfo, int HitCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.PlayValidHitFX");

	ABP_TrainingDroid_C_PlayValidHitFX_Params params;
	params.DamageInfo = DamageInfo;
	params.HitCount = HitCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.PlayHitFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           SFX                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTwoHanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* TwoHandedVFX                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UParticleSystem*         OneHandedVFX                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isWeak                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           TwoHandedSFX                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           WeakSFX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::PlayHitFX(class UAkAudioEvent* SFX, bool IsTwoHanded, class UParticleSystemComponent* TwoHandedVFX, class UParticleSystem* OneHandedVFX, bool isWeak, class UAkAudioEvent* TwoHandedSFX, class UAkAudioEvent* WeakSFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.PlayHitFX");

	ABP_TrainingDroid_C_PlayHitFX_Params params;
	params.SFX = SFX;
	params.IsTwoHanded = IsTwoHanded;
	params.TwoHandedVFX = TwoHandedVFX;
	params.OneHandedVFX = OneHandedVFX;
	params.isWeak = isWeak;
	params.TwoHandedSFX = TwoHandedSFX;
	params.WeakSFX = WeakSFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateVulnerabilitySFX
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::UpdateVulnerabilitySFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateVulnerabilitySFX");

	ABP_TrainingDroid_C_UpdateVulnerabilitySFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnEndCut
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CuttingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                BladeDirection                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingDroid_C::OnEndCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* BladeDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnEndCut");

	ABP_TrainingDroid_C_OnEndCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutComponent = CutComponent;
	params.BladeDirection = BladeDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnStartCut
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CuttingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                CutEntryLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingDroid_C::OnStartCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FName* BoneName, struct FVector* CutEntryLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnStartCut");

	ABP_TrainingDroid_C_OnStartCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutComponent = CutComponent;
	params.BoneName = BoneName;
	params.CutEntryLocation = CutEntryLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnUpdateCut
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CuttingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                CutEntryLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                CutEntryNormal                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D*              CollisionUV                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                CutExitLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingDroid_C::OnUpdateCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* CutEntryLocation, struct FVector* CutEntryNormal, struct FVector2D* CollisionUV, struct FName* BoneName, struct FVector* CutExitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnUpdateCut");

	ABP_TrainingDroid_C_OnUpdateCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutComponent = CutComponent;
	params.CutEntryLocation = CutEntryLocation;
	params.CutEntryNormal = CutEntryNormal;
	params.CollisionUV = CollisionUV;
	params.BoneName = BoneName;
	params.CutExitLocation = CutExitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.UsesCuttingFX
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingDroid_C::UsesCuttingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.UsesCuttingFX");

	ABP_TrainingDroid_C_UsesCuttingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateHeadSpinRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::UpdateHeadSpinRate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateHeadSpinRate");

	ABP_TrainingDroid_C_UpdateHeadSpinRate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateMiddleSpinRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::UpdateMiddleSpinRate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateMiddleSpinRate");

	ABP_TrainingDroid_C_UpdateMiddleSpinRate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.DroidCleanUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::DroidCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.DroidCleanUp");

	ABP_TrainingDroid_C_DroidCleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.CheckHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_TrainingDroid_C::CheckHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.CheckHealth");

	ABP_TrainingDroid_C_CheckHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.SetAsDeflectionTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::SetAsDeflectionTarget(bool Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.SetAsDeflectionTarget");

	ABP_TrainingDroid_C_SetAsDeflectionTarget_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnBurnt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 DirectionX                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SparksOnly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::OnBurnt(const struct FVector& Location, const struct FVector& Normal, const struct FVector& DirectionX, const struct FName& BoneName, bool SparksOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnBurnt");

	ABP_TrainingDroid_C_OnBurnt_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.DirectionX = DirectionX;
	params.BoneName = BoneName;
	params.SparksOnly = SparksOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.UserConstructionScript");

	ABP_TrainingDroid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Projection__FinishedFunc
// (BlueprintEvent)

void ABP_TrainingDroid_C::Projection__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Projection__FinishedFunc");

	ABP_TrainingDroid_C_Projection__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Projection__UpdateFunc
// (BlueprintEvent)

void ABP_TrainingDroid_C::Projection__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Projection__UpdateFunc");

	ABP_TrainingDroid_C_Projection__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_TrainingDroid_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_0__FinishedFunc");

	ABP_TrainingDroid_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_TrainingDroid_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_0__UpdateFunc");

	ABP_TrainingDroid_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_TrainingDroid_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_1__FinishedFunc");

	ABP_TrainingDroid_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_TrainingDroid_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_1__UpdateFunc");

	ABP_TrainingDroid_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_TrainingDroid_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_2__FinishedFunc");

	ABP_TrainingDroid_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_TrainingDroid_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_2__UpdateFunc");

	ABP_TrainingDroid_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void ABP_TrainingDroid_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_3__FinishedFunc");

	ABP_TrainingDroid_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void ABP_TrainingDroid_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_3__UpdateFunc");

	ABP_TrainingDroid_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocationAndYaw_3A3A6E494A53F1904798658209DD81B7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MovedActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::OnReachedLocationAndYaw_3A3A6E494A53F1904798658209DD81B7(class AActor* MovedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocationAndYaw_3A3A6E494A53F1904798658209DD81B7");

	ABP_TrainingDroid_C_OnReachedLocationAndYaw_3A3A6E494A53F1904798658209DD81B7_Params params;
	params.MovedActor = MovedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocation_3A3A6E494A53F1904798658209DD81B7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MovedActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::OnReachedLocation_3A3A6E494A53F1904798658209DD81B7(class AActor* MovedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocation_3A3A6E494A53F1904798658209DD81B7");

	ABP_TrainingDroid_C_OnReachedLocation_3A3A6E494A53F1904798658209DD81B7_Params params;
	params.MovedActor = MovedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocationAndYaw_4883F11F4CFBFB700901E29EE6FBD497
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MovedActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::OnReachedLocationAndYaw_4883F11F4CFBFB700901E29EE6FBD497(class AActor* MovedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocationAndYaw_4883F11F4CFBFB700901E29EE6FBD497");

	ABP_TrainingDroid_C_OnReachedLocationAndYaw_4883F11F4CFBFB700901E29EE6FBD497_Params params;
	params.MovedActor = MovedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocation_4883F11F4CFBFB700901E29EE6FBD497
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MovedActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::OnReachedLocation_4883F11F4CFBFB700901E29EE6FBD497(class AActor* MovedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocation_4883F11F4CFBFB700901E29EE6FBD497");

	ABP_TrainingDroid_C_OnReachedLocation_4883F11F4CFBFB700901E29EE6FBD497_Params params;
	params.MovedActor = MovedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnDeathAnimStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWKNDDamageInfo*        DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TrainingDroid_C::OnDeathAnimStarted(struct FWKNDDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnDeathAnimStarted");

	ABP_TrainingDroid_C_OnDeathAnimStarted_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnDeathAnimEnded
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::OnDeathAnimEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnDeathAnimEnded");

	ABP_TrainingDroid_C_OnDeathAnimEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.DoRagdoll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRagdollInfo>    BonesToRagdoll                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_TrainingDroid_C::DoRagdoll(TArray<struct FRagdollInfo>* BonesToRagdoll)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.DoRagdoll");

	ABP_TrainingDroid_C_DoRagdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BonesToRagdoll != nullptr)
		*BonesToRagdoll = params.BonesToRagdoll;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.RagdollBones
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRagdollInfo>    Array                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_TrainingDroid_C::RagdollBones(TArray<struct FRagdollInfo> Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.RagdollBones");

	ABP_TrainingDroid_C_RagdollBones_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnRagdollComponentHit
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_TrainingDroid_C::OnRagdollComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnRagdollComponentHit");

	ABP_TrainingDroid_C_OnRagdollComponentHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Explode");

	ABP_TrainingDroid_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Ragdoll_TD
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::Ragdoll_TD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Ragdoll_TD");

	ABP_TrainingDroid_C_Ragdoll_TD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TrainingDroid_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.ReceiveBeginPlay");

	ABP_TrainingDroid_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.ReceiveTick");

	ABP_TrainingDroid_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FMotionFieldTarget      MotionFieldTarget              (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TrainingDroid_C::BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature(const struct FMotionFieldTarget& MotionFieldTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature");

	ABP_TrainingDroid_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature_Params params;
	params.MotionFieldTarget = MotionFieldTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ECombatStageType               CompletedStage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RemainingStageCount            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature(ECombatStageType CompletedStage, const struct FName& Token, int RemainingStageCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature");

	ABP_TrainingDroid_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature_Params params;
	params.CompletedStage = CompletedStage;
	params.Token = Token;
	params.RemainingStageCount = RemainingStageCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.StartProjection
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::StartProjection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.StartProjection");

	ABP_TrainingDroid_C_StartProjection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.StopProjection
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::StopProjection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.StopProjection");

	ABP_TrainingDroid_C_StopProjection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.audio_ActivateDroidHover
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::audio_ActivateDroidHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.audio_ActivateDroidHover");

	ABP_TrainingDroid_C_audio_ActivateDroidHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.audio_DroidVoice_Activated
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::audio_DroidVoice_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.audio_DroidVoice_Activated");

	ABP_TrainingDroid_C_audio_DroidVoice_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.ChargeStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::ChargeStatus(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.ChargeStatus");

	ABP_TrainingDroid_C_ChargeStatus_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.WeaponMalfunction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::WeaponMalfunction(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.WeaponMalfunction");

	ABP_TrainingDroid_C_WeaponMalfunction_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.DetachSaber
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::DetachSaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.DetachSaber");

	ABP_TrainingDroid_C_DetachSaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.CombatStageStarted_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECombatStageType               StartingStage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::CombatStageStarted_Event_1(ECombatStageType StartingStage, const struct FName& Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.CombatStageStarted_Event_1");

	ABP_TrainingDroid_C_CombatStageStarted_Event_1_Params params;
	params.StartingStage = StartingStage;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_TrainingDroid_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_TrainingDroid_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.BreakArm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 DirectionStrike                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_TrainingDroid_C::BreakArm(const struct FVector& DirectionStrike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.BreakArm");

	ABP_TrainingDroid_C_BreakArm_Params params;
	params.DirectionStrike = DirectionStrike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.PowerAttackGlow
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::PowerAttackGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.PowerAttackGlow");

	ABP_TrainingDroid_C_PowerAttackGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.DamagedGlow
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::DamagedGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.DamagedGlow");

	ABP_TrainingDroid_C_DamagedGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.RestowDroid
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::RestowDroid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.RestowDroid");

	ABP_TrainingDroid_C_RestowDroid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyTwoHandedBlockFailedSig__DelegateSignature
// (BlueprintEvent)

void ABP_TrainingDroid_C::BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyTwoHandedBlockFailedSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyTwoHandedBlockFailedSig__DelegateSignature");

	ABP_TrainingDroid_C_BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyTwoHandedBlockFailedSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.ReceiveBlasterHit
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 StrikingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::ReceiveBlasterHit(class AActor** StrikingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.ReceiveBlasterHit");

	ABP_TrainingDroid_C_ReceiveBlasterHit_Params params;
	params.StrikingActor = StrikingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.RestowFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::RestowFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.RestowFinished");

	ABP_TrainingDroid_C_RestowFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.Droid_Dissolve
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::Droid_Dissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.Droid_Dissolve");

	ABP_TrainingDroid_C_Droid_Dissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.DamageState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::DamageState(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.DamageState");

	ABP_TrainingDroid_C_DamageState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.SpawnHitDecal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_TrainingDroid_C::SpawnHitDecal(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.SpawnHitDecal");

	ABP_TrainingDroid_C_SpawnHitDecal_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OrientHitVel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PFX                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_TrainingDroid_C::OrientHitVel(class UParticleSystemComponent* PFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OrientHitVel");

	ABP_TrainingDroid_C_OrientHitVel_Params params;
	params.PFX = PFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.EyeFlickerTicker
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::EyeFlickerTicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.EyeFlickerTicker");

	ABP_TrainingDroid_C_EyeFlickerTicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.OnComponentAttached_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         NewlyAttachedComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_TrainingDroid_C::OnComponentAttached_Event_1(class USceneComponent* NewlyAttachedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.OnComponentAttached_Event_1");

	ABP_TrainingDroid_C_OnComponentAttached_Event_1_Params params;
	params.NewlyAttachedComponent = NewlyAttachedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.GoToRestowPosition
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::GoToRestowPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.GoToRestowPosition");

	ABP_TrainingDroid_C_GoToRestowPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            DamageTaken                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TrainingDroid_C::BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature");

	ABP_TrainingDroid_C_BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.PlayEffectsForStrength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            HitCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::PlayEffectsForStrength(const struct FWKNDDamageInfo& DamageInfo, int HitCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.PlayEffectsForStrength");

	ABP_TrainingDroid_C_PlayEffectsForStrength_Params params;
	params.DamageInfo = DamageInfo;
	params.HitCount = HitCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.ExecuteUbergraph_BP_TrainingDroid
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::ExecuteUbergraph_BP_TrainingDroid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.ExecuteUbergraph_BP_TrainingDroid");

	ABP_TrainingDroid_C_ExecuteUbergraph_BP_TrainingDroid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.DeathSequenceFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TrainingDroid_C*     TrainingDroid                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::DeathSequenceFinished__DelegateSignature(class ABP_TrainingDroid_C* TrainingDroid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.DeathSequenceFinished__DelegateSignature");

	ABP_TrainingDroid_C_DeathSequenceFinished__DelegateSignature_Params params;
	params.TrainingDroid = TrainingDroid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.DeathSequenceStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TrainingDroid_C*     Droid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::DeathSequenceStarted__DelegateSignature(class ABP_TrainingDroid_C* Droid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.DeathSequenceStarted__DelegateSignature");

	ABP_TrainingDroid_C_DeathSequenceStarted__DelegateSignature_Params params;
	params.Droid = Droid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.HasRestowed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::HasRestowed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.HasRestowed__DelegateSignature");

	ABP_TrainingDroid_C_HasRestowed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.HitByDeflectedBlaster__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TrainingDroid_C*     Droid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::HitByDeflectedBlaster__DelegateSignature(class ABP_TrainingDroid_C* Droid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.HitByDeflectedBlaster__DelegateSignature");

	ABP_TrainingDroid_C_HitByDeflectedBlaster__DelegateSignature_Params params;
	params.Droid = Droid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.TwoHandedBlockFail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::TwoHandedBlockFail__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.TwoHandedBlockFail__DelegateSignature");

	ABP_TrainingDroid_C_TwoHandedBlockFail__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.InRestowPosition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::InRestowPosition__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.InRestowPosition__DelegateSignature");

	ABP_TrainingDroid_C_InRestowPosition__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.TakenAHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TrainingDroid_C*     Droid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::TakenAHit__DelegateSignature(class ABP_TrainingDroid_C* Droid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.TakenAHit__DelegateSignature");

	ABP_TrainingDroid_C_TakenAHit__DelegateSignature_Params params;
	params.Droid = Droid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.DamageStateCounter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Hits                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::DamageStateCounter__DelegateSignature(int Hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.DamageStateCounter__DelegateSignature");

	ABP_TrainingDroid_C_DamageStateCounter__DelegateSignature_Params params;
	params.Hits = Hits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.HasRagdolled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_C::HasRagdolled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.HasRagdolled__DelegateSignature");

	ABP_TrainingDroid_C_HasRagdolled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid.BP_TrainingDroid_C.CompletedCombatSequenceLoop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECombatStageType               NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_C::CompletedCombatSequenceLoop__DelegateSignature(ECombatStageType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid.BP_TrainingDroid_C.CompletedCombatSequenceLoop__DelegateSignature");

	ABP_TrainingDroid_C_CompletedCombatSequenceLoop__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
