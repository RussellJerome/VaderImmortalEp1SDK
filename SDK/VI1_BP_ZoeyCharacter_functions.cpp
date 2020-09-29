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

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ShouldAimAtPlayer?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::ShouldAimAtPlayer_(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ShouldAimAtPlayer?");

	ABP_ZoeyCharacter_C_ShouldAimAtPlayer__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AimAtActor?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::AimAtActor_(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AimAtActor?");

	ABP_ZoeyCharacter_C_AimAtActor__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::GetAnimInstance(class UAnimInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.GetAnimInstance");

	ABP_ZoeyCharacter_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.GetNpcChestLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_ZoeyCharacter_C::GetNpcChestLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.GetNpcChestLocation");

	ABP_ZoeyCharacter_C_GetNpcChestLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.GetComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AttachPointName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAkComponent* ABP_ZoeyCharacter_C::GetComponent(const struct FName& AttachPointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.GetComponent");

	ABP_ZoeyCharacter_C_GetComponent_Params params;
	params.AttachPointName = AttachPointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AutoOptimizeCollisionSettingsByPlayerDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoeyCharacter_C::AutoOptimizeCollisionSettingsByPlayerDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AutoOptimizeCollisionSettingsByPlayerDistance");

	ABP_ZoeyCharacter_C_AutoOptimizeCollisionSettingsByPlayerDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.DebugDrawPredictedStoppingLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoeyCharacter_C::DebugDrawPredictedStoppingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.DebugDrawPredictedStoppingLocation");

	ABP_ZoeyCharacter_C_DebugDrawPredictedStoppingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.OnEndCut
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CuttingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                BladeDirection                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ZoeyCharacter_C::OnEndCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* BladeDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.OnEndCut");

	ABP_ZoeyCharacter_C_OnEndCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutComponent = CutComponent;
	params.BladeDirection = BladeDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.OnStartCut
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CuttingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                CutEntryLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ZoeyCharacter_C::OnStartCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FName* BoneName, struct FVector* CutEntryLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.OnStartCut");

	ABP_ZoeyCharacter_C_OnStartCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutComponent = CutComponent;
	params.BoneName = BoneName;
	params.CutEntryLocation = CutEntryLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.OnUpdateCut
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CuttingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                CutEntryLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                CutEntryNormal                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D*              CollisionUV                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                CutExitLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ZoeyCharacter_C::OnUpdateCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* CutEntryLocation, struct FVector* CutEntryNormal, struct FVector2D* CollisionUV, struct FName* BoneName, struct FVector* CutExitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.OnUpdateCut");

	ABP_ZoeyCharacter_C_OnUpdateCut_Params params;
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


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.UsesCuttingFX
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ZoeyCharacter_C::UsesCuttingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.UsesCuttingFX");

	ABP_ZoeyCharacter_C_UsesCuttingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.DrawAKComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DrawComponents                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::DrawAKComponents(bool DrawComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.DrawAKComponents");

	ABP_ZoeyCharacter_C_DrawAKComponents_Params params;
	params.DrawComponents = DrawComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.SetSequenceBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Interp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::SetSequenceBlendWeight(float Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.SetSequenceBlendWeight");

	ABP_ZoeyCharacter_C_SetSequenceBlendWeight_Params params;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoeyCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.UserConstructionScript");

	ABP_ZoeyCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.FireBlaster
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoeyCharacter_C::FireBlaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.FireBlaster");

	ABP_ZoeyCharacter_C_FireBlaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - Delete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoeyCharacter_C::Decals___Delete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - Delete");

	ABP_ZoeyCharacter_C_Decals___Delete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - SpawnHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoeyCharacter_C::Decals___SpawnHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - SpawnHit");

	ABP_ZoeyCharacter_C_Decals___SpawnHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - SpawnStab
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoeyCharacter_C::Decals___SpawnStab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - SpawnStab");

	ABP_ZoeyCharacter_C_Decals___SpawnStab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - SpawnSlash
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoeyCharacter_C::Decals___SpawnSlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - SpawnSlash");

	ABP_ZoeyCharacter_C_Decals___SpawnSlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.BlueprintTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::BlueprintTick(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.BlueprintTick");

	ABP_ZoeyCharacter_C_BlueprintTick_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Hide Blaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::Hide_Blaster(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Hide Blaster");

	ABP_ZoeyCharacter_C_Hide_Blaster_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.BlueprintAnimationRateOptimization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::BlueprintAnimationRateOptimization(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.BlueprintAnimationRateOptimization");

	ABP_ZoeyCharacter_C_BlueprintAnimationRateOptimization_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ToggleDropShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::ToggleDropShadow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ToggleDropShadow");

	ABP_ZoeyCharacter_C_ToggleDropShadow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.SetAnimationReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterPerformanceLookAtStruct Settings                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ZoeyCharacter_C::SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.SetAnimationReferences");

	ABP_ZoeyCharacter_C_SetAnimationReferences_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.RequestSetSequencerBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::RequestSetSequencerBlendWeight(float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.RequestSetSequencerBlendWeight");

	ABP_ZoeyCharacter_C_RequestSetSequencerBlendWeight_Params params;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectThrow
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         throwDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::AnimProxy_ObjectThrow(bool* oneHand, float* throwDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectThrow");

	ABP_ZoeyCharacter_C_AnimProxy_ObjectThrow_Params params;
	params.oneHand = oneHand;
	params.throwDistance = throwDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectPickup
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::AnimProxy_ObjectPickup(bool* oneHand, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectPickup");

	ABP_ZoeyCharacter_C_AnimProxy_ObjectPickup_Params params;
	params.oneHand = oneHand;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectHandOver
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::AnimProxy_ObjectHandOver(bool* oneHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectHandOver");

	ABP_ZoeyCharacter_C_AnimProxy_ObjectHandOver_Params params;
	params.oneHand = oneHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectCatchSuccess
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         catchAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::AnimProxy_ObjectCatchSuccess(bool* oneHand, float* catchAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectCatchSuccess");

	ABP_ZoeyCharacter_C_AnimProxy_ObjectCatchSuccess_Params params;
	params.oneHand = oneHand;
	params.catchAngle = catchAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectCatchReady
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         catchAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::AnimProxy_ObjectCatchReady(bool* oneHand, float* catchAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectCatchReady");

	ABP_ZoeyCharacter_C_AnimProxy_ObjectCatchReady_Params params;
	params.oneHand = oneHand;
	params.catchAngle = catchAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectCatchFail
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::AnimProxy_ObjectCatchFail(bool* oneHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectCatchFail");

	ABP_ZoeyCharacter_C_AnimProxy_ObjectCatchFail_Params params;
	params.oneHand = oneHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectLetGo
// (Event, Public, BlueprintEvent)

void ABP_ZoeyCharacter_C::AnimProxy_ObjectLetGo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectLetGo");

	ABP_ZoeyCharacter_C_AnimProxy_ObjectLetGo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ReceiveTick");

	ABP_ZoeyCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.TickInstrumentFoleyUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoeyCharacter_C::TickInstrumentFoleyUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.TickInstrumentFoleyUpdate");

	ABP_ZoeyCharacter_C_TickInstrumentFoleyUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Disable LookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               DistanceLimits                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          HeadLookAtStrength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EyeLookAtStrength              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BodyLookAtStrength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Disable LookAt");

	ABP_ZoeyCharacter_C_Disable_LookAt_Params params;
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


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZoeyCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ReceiveBeginPlay");

	ABP_ZoeyCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Set_Zoe_indirect_lighting
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoeyCharacter_C::Set_Zoe_indirect_lighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Set_Zoe_indirect_lighting");

	ABP_ZoeyCharacter_C_Set_Zoe_indirect_lighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Event PhysicalAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::Event_PhysicalAnimation(bool Enable, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Event PhysicalAnimation");

	ABP_ZoeyCharacter_C_Event_PhysicalAnimation_Params params;
	params.Enable = Enable;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Fortress_TurnOffUnneededComps
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoeyCharacter_C::Fortress_TurnOffUnneededComps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Fortress_TurnOffUnneededComps");

	ABP_ZoeyCharacter_C_Fortress_TurnOffUnneededComps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ExecuteUbergraph_BP_ZoeyCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyCharacter_C::ExecuteUbergraph_BP_ZoeyCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ExecuteUbergraph_BP_ZoeyCharacter");

	ABP_ZoeyCharacter_C_ExecuteUbergraph_BP_ZoeyCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
