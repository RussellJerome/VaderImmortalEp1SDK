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

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.GetComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AttachPointName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAkComponent* ABP_CorvaxDroid_C::GetComponent(const struct FName& AttachPointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.GetComponent");

	ABP_CorvaxDroid_C_GetComponent_Params params;
	params.AttachPointName = AttachPointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.PlayDockingMontage (Yaw only)
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           SplitDockingComp__Yaw_         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimationDuration              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::PlayDockingMontage__Yaw_only_(class UAnimMontage* MontageToPlay, const struct FTransform& destTransform, bool SplitDockingComp__Yaw_, float* AnimationDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.PlayDockingMontage (Yaw only)");

	ABP_CorvaxDroid_C_PlayDockingMontage__Yaw_only__Params params;
	params.MontageToPlay = MontageToPlay;
	params.destTransform = destTransform;
	params.SplitDockingComp__Yaw_ = SplitDockingComp__Yaw_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationDuration != nullptr)
		*AnimationDuration = params.AnimationDuration;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.CombatStanceLocationAdjustment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldResolveDockedLocation    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::CombatStanceLocationAdjustment(bool* ShouldResolveDockedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.CombatStanceLocationAdjustment");

	ABP_CorvaxDroid_C_CombatStanceLocationAdjustment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldResolveDockedLocation != nullptr)
		*ShouldResolveDockedLocation = params.ShouldResolveDockedLocation;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.FindStrafeVectorToCombatOpponent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UseStrafing                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InRot                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           RightSide                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_CorvaxDroid_C::FindStrafeVectorToCombatOpponent(bool UseStrafing, const struct FRotator& InRot, bool RightSide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.FindStrafeVectorToCombatOpponent");

	ABP_CorvaxDroid_C_FindStrafeVectorToCombatOpponent_Params params;
	params.UseStrafing = UseStrafing;
	params.InRot = InRot;
	params.RightSide = RightSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.GetCombatOpponentLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ClippedLocation                (Parm, OutParm, IsPlainOldData)

void ABP_CorvaxDroid_C::GetCombatOpponentLocation(struct FVector* ClippedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.GetCombatOpponentLocation");

	ABP_CorvaxDroid_C_GetCombatOpponentLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClippedLocation != nullptr)
		*ClippedLocation = params.ClippedLocation;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.FindMovementForwardTowardsCombatComponent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_CorvaxDroid_C::FindMovementForwardTowardsCombatComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.FindMovementForwardTowardsCombatComponent");

	ABP_CorvaxDroid_C_FindMovementForwardTowardsCombatComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.FindLookAtRotationToCombatOpponent (Yaw)
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_CorvaxDroid_C::FindLookAtRotationToCombatOpponent__Yaw_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.FindLookAtRotationToCombatOpponent (Yaw)");

	ABP_CorvaxDroid_C_FindLookAtRotationToCombatOpponent__Yaw__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.IsCombatOpponentTooClose?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_C::IsCombatOpponentTooClose_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.IsCombatOpponentTooClose?");

	ABP_CorvaxDroid_C_IsCombatOpponentTooClose__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.IsCombatOpponentTooWide?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           WideRight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           WideLeft                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Strafing                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::IsCombatOpponentTooWide_(bool* WideRight, bool* WideLeft, bool* Strafing, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.IsCombatOpponentTooWide?");

	ABP_CorvaxDroid_C_IsCombatOpponentTooWide__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WideRight != nullptr)
		*WideRight = params.WideRight;
	if (WideLeft != nullptr)
		*WideLeft = params.WideLeft;
	if (Strafing != nullptr)
		*Strafing = params.Strafing;
	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.IsCombatOpponentTooFar?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_C::IsCombatOpponentTooFar_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.IsCombatOpponentTooFar?");

	ABP_CorvaxDroid_C_IsCombatOpponentTooFar__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.PlayDockingMontage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           SplitDockingComp__Yaw_         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimationDuration              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::PlayDockingMontage(class UAnimMontage* MontageToPlay, const struct FTransform& destTransform, bool SplitDockingComp__Yaw_, float* AnimationDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.PlayDockingMontage");

	ABP_CorvaxDroid_C_PlayDockingMontage_Params params;
	params.MontageToPlay = MontageToPlay;
	params.destTransform = destTransform;
	params.SplitDockingComp__Yaw_ = SplitDockingComp__Yaw_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationDuration != nullptr)
		*AnimationDuration = params.AnimationDuration;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.UpdateVulnerabilityCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::UpdateVulnerabilityCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.UpdateVulnerabilityCollision");

	ABP_CorvaxDroid_C_UpdateVulnerabilityCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.RagdollActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTimelineComponent*      Timeline                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ImpulseRadius                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpulseStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::RagdollActivate(const struct FVector& InputPin, const struct FName& BoneName, class UTimelineComponent* Timeline, float ImpulseRadius, float ImpulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.RagdollActivate");

	ABP_CorvaxDroid_C_RagdollActivate_Params params;
	params.InputPin = InputPin;
	params.BoneName = BoneName;
	params.Timeline = Timeline;
	params.ImpulseRadius = ImpulseRadius;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.UpdateVulnerabilitySFX
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::UpdateVulnerabilitySFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.UpdateVulnerabilitySFX");

	ABP_CorvaxDroid_C_UpdateVulnerabilitySFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.SetupStandardAK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*            AK_Component                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CorvaxDroid_C::SetupStandardAK(class UAkComponent* AK_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.SetupStandardAK");

	ABP_CorvaxDroid_C_SetupStandardAK_Params params;
	params.AK_Component = AK_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.HandleArmourHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HitCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UStaticMeshComponent*    Armour_Piece                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CorvaxDroid_C::HandleArmourHit(int HitCount, const struct FVector& Location, const struct FVector& Direction, class UStaticMeshComponent* Armour_Piece)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.HandleArmourHit");

	ABP_CorvaxDroid_C_HandleArmourHit_Params params;
	params.HitCount = HitCount;
	params.Location = Location;
	params.Direction = Direction;
	params.Armour_Piece = Armour_Piece;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.SetSequenceBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Interp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::SetSequenceBlendWeight(float Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.SetSequenceBlendWeight");

	ABP_CorvaxDroid_C_SetSequenceBlendWeight_Params params;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.MoveAndFaceCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTargetFaceActor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::MoveAndFaceCharacter(class AActor* NewTargetFaceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.MoveAndFaceCharacter");

	ABP_CorvaxDroid_C_MoveAndFaceCharacter_Params params;
	params.NewTargetFaceActor = NewTargetFaceActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.UserConstructionScript");

	ABP_CorvaxDroid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_UpperBodyRagdoll__FinishedFunc
// (BlueprintEvent)

void ABP_CorvaxDroid_C::Timeline_UpperBodyRagdoll__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_UpperBodyRagdoll__FinishedFunc");

	ABP_CorvaxDroid_C_Timeline_UpperBodyRagdoll__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_UpperBodyRagdoll__UpdateFunc
// (BlueprintEvent)

void ABP_CorvaxDroid_C::Timeline_UpperBodyRagdoll__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_UpperBodyRagdoll__UpdateFunc");

	ABP_CorvaxDroid_C_Timeline_UpperBodyRagdoll__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_FullBodyRagdoll__FinishedFunc
// (BlueprintEvent)

void ABP_CorvaxDroid_C::Timeline_FullBodyRagdoll__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_FullBodyRagdoll__FinishedFunc");

	ABP_CorvaxDroid_C_Timeline_FullBodyRagdoll__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_FullBodyRagdoll__UpdateFunc
// (BlueprintEvent)

void ABP_CorvaxDroid_C::Timeline_FullBodyRagdoll__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_FullBodyRagdoll__UpdateFunc");

	ABP_CorvaxDroid_C_Timeline_FullBodyRagdoll__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnNotifyEnd_60968CF544682BE721930C9FB97EC81D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::OnNotifyEnd_60968CF544682BE721930C9FB97EC81D(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnNotifyEnd_60968CF544682BE721930C9FB97EC81D");

	ABP_CorvaxDroid_C_OnNotifyEnd_60968CF544682BE721930C9FB97EC81D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnNotifyBegin_60968CF544682BE721930C9FB97EC81D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::OnNotifyBegin_60968CF544682BE721930C9FB97EC81D(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnNotifyBegin_60968CF544682BE721930C9FB97EC81D");

	ABP_CorvaxDroid_C_OnNotifyBegin_60968CF544682BE721930C9FB97EC81D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnInterrupted_60968CF544682BE721930C9FB97EC81D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::OnInterrupted_60968CF544682BE721930C9FB97EC81D(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnInterrupted_60968CF544682BE721930C9FB97EC81D");

	ABP_CorvaxDroid_C_OnInterrupted_60968CF544682BE721930C9FB97EC81D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnBlendOut_60968CF544682BE721930C9FB97EC81D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::OnBlendOut_60968CF544682BE721930C9FB97EC81D(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnBlendOut_60968CF544682BE721930C9FB97EC81D");

	ABP_CorvaxDroid_C_OnBlendOut_60968CF544682BE721930C9FB97EC81D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnCompleted_60968CF544682BE721930C9FB97EC81D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::OnCompleted_60968CF544682BE721930C9FB97EC81D(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnCompleted_60968CF544682BE721930C9FB97EC81D");

	ABP_CorvaxDroid_C_OnCompleted_60968CF544682BE721930C9FB97EC81D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.VaderForceKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::VaderForceKill(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.VaderForceKill");

	ABP_CorvaxDroid_C_VaderForceKill_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWKNDDamageInfo*        DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CorvaxDroid_C::OnDeath(struct FWKNDDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnDeath");

	ABP_CorvaxDroid_C_OnDeath_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Ragdoll_CVD
// (BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::Ragdoll_CVD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Ragdoll_CVD");

	ABP_CorvaxDroid_C_Ragdoll_CVD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnComponentHit_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_CorvaxDroid_C::OnComponentHit_Event_1(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnComponentHit_Event_1");

	ABP_CorvaxDroid_C_OnComponentHit_Event_1_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnDeathAnimStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWKNDDamageInfo*        DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CorvaxDroid_C::OnDeathAnimStarted(struct FWKNDDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnDeathAnimStarted");

	ABP_CorvaxDroid_C_OnDeathAnimStarted_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.DestroySaber
// (BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::DestroySaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.DestroySaber");

	ABP_CorvaxDroid_C_DestroySaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnDeathAnimEnded
// (BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::OnDeathAnimEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnDeathAnimEnded");

	ABP_CorvaxDroid_C_OnDeathAnimEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ForceDestroy
// (BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::ForceDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.ForceDestroy");

	ABP_CorvaxDroid_C_ForceDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CorvaxDroid_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.ReceiveBeginPlay");

	ABP_CorvaxDroid_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.ReceiveTick");

	ABP_CorvaxDroid_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FMotionFieldTarget      MotionFieldTarget              (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CorvaxDroid_C::BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature(const struct FMotionFieldTarget& MotionFieldTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature");

	ABP_CorvaxDroid_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature_Params params;
	params.MotionFieldTarget = MotionFieldTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.FTH_UpdateCharIndirectLighting
// (BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::FTH_UpdateCharIndirectLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.FTH_UpdateCharIndirectLighting");

	ABP_CorvaxDroid_C_FTH_UpdateCharIndirectLighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Landed_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::Landed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Landed_Event_1");

	ABP_CorvaxDroid_C_Landed_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Footsteps
// (BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::Footsteps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Footsteps");

	ABP_CorvaxDroid_C_Footsteps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Droid_Destroyed
// (BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::Droid_Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Droid_Destroyed");

	ABP_CorvaxDroid_C_Droid_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnComponentAttached_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         NewlyAttachedComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CorvaxDroid_C::OnComponentAttached_Event_1(class USceneComponent* NewlyAttachedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnComponentAttached_Event_1");

	ABP_CorvaxDroid_C_OnComponentAttached_Event_1_Params params;
	params.NewlyAttachedComponent = NewlyAttachedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.footsteps_gentle
// (BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::footsteps_gentle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.footsteps_gentle");

	ABP_CorvaxDroid_C_footsteps_gentle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OrientHitVel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PFX                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CorvaxDroid_C::OrientHitVel(class UParticleSystemComponent* PFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.OrientHitVel");

	ABP_CorvaxDroid_C_OrientHitVel_Params params;
	params.PFX = PFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event UpperBodyRagdoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_CorvaxDroid_C::Event_UpperBodyRagdoll(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event UpperBodyRagdoll");

	ABP_CorvaxDroid_C_Event_UpperBodyRagdoll_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event FullBodyRagdoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_CorvaxDroid_C::Event_FullBodyRagdoll(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event FullBodyRagdoll");

	ABP_CorvaxDroid_C_Event_FullBodyRagdoll_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event RepositionCombatStance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              destTransform                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           SplitDockingComp__Yaw_         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::Event_RepositionCombatStance(class UAnimMontage* Montage, const struct FTransform& destTransform, bool SplitDockingComp__Yaw_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event RepositionCombatStance");

	ABP_CorvaxDroid_C_Event_RepositionCombatStance_Params params;
	params.Montage = Montage;
	params.destTransform = destTransform;
	params.SplitDockingComp__Yaw_ = SplitDockingComp__Yaw_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event UpdateActiveDocking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              destTransform                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_CorvaxDroid_C::Event_UpdateActiveDocking(const struct FTransform& destTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event UpdateActiveDocking");

	ABP_CorvaxDroid_C_Event_UpdateActiveDocking_Params params;
	params.destTransform = destTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            DamageTaken                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CorvaxDroid_C::BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature");

	ABP_CorvaxDroid_C_BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.UpdateHitEffectFlags
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDamageStrength                DamageStrength                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::UpdateHitEffectFlags(EDamageStrength DamageStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.UpdateHitEffectFlags");

	ABP_CorvaxDroid_C_UpdateHitEffectFlags_Params params;
	params.DamageStrength = DamageStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ExecuteUbergraph_BP_CorvaxDroid
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::ExecuteUbergraph_BP_CorvaxDroid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.ExecuteUbergraph_BP_CorvaxDroid");

	ABP_CorvaxDroid_C_ExecuteUbergraph_BP_CorvaxDroid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Footstep_gentle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::Footstep_gentle__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Footstep_gentle__DelegateSignature");

	ABP_CorvaxDroid_C_Footstep_gentle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Destroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::Destroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Destroyed__DelegateSignature");

	ABP_CorvaxDroid_C_Destroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Footstep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::Footstep__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Footstep__DelegateSignature");

	ABP_CorvaxDroid_C_Footstep__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Landed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_C::Landed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.Landed__DelegateSignature");

	ABP_CorvaxDroid_C_Landed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ArmourHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TotalArmour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Armour_Pieces_Remaining        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::ArmourHit__DelegateSignature(float TotalArmour, float Armour_Pieces_Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.ArmourHit__DelegateSignature");

	ABP_CorvaxDroid_C_ArmourHit__DelegateSignature_Params params;
	params.TotalArmour = TotalArmour;
	params.Armour_Pieces_Remaining = Armour_Pieces_Remaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ValidHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HitPointsRemaining             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::ValidHit__DelegateSignature(int HitPointsRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.ValidHit__DelegateSignature");

	ABP_CorvaxDroid_C_ValidHit__DelegateSignature_Params params;
	params.HitPointsRemaining = HitPointsRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid.BP_CorvaxDroid_C.HasRagdolled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CorvaxDroid_C*       DroidHandle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_C::HasRagdolled__DelegateSignature(class ABP_CorvaxDroid_C* DroidHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid.BP_CorvaxDroid_C.HasRagdolled__DelegateSignature");

	ABP_CorvaxDroid_C_HasRagdolled__DelegateSignature_Params params;
	params.DroidHandle = DroidHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
