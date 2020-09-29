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

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UseDirectionalHalo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::UseDirectionalHalo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UseDirectionalHalo");

	ABP_WKNDPlayerPawn_C_UseDirectionalHalo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetHitAudioEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDamageType                    DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           AudioEvent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::GetHitAudioEvent(class AActor* weapon, EDamageType DamageType, class UAkAudioEvent** AudioEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetHitAudioEvent");

	ABP_WKNDPlayerPawn_C_GetHitAudioEvent_Params params;
	params.weapon = weapon;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AudioEvent != nullptr)
		*AudioEvent = params.AudioEvent;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetPlayerFloorPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 NewParam                       (Parm, OutParm, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::GetPlayerFloorPosition(struct FVector* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetPlayerFloorPosition");

	ABP_WKNDPlayerPawn_C_GetPlayerFloorPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetClosestRecenteringPoint
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              outTransform                   (Parm, OutParm, IsPlainOldData)
// int                            outIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::GetClosestRecenteringPoint(struct FVector* CheckLocation, struct FTransform* outTransform, int* outIndex, bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetClosestRecenteringPoint");

	ABP_WKNDPlayerPawn_C_GetClosestRecenteringPoint_Params params;
	params.CheckLocation = CheckLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outTransform != nullptr)
		*outTransform = params.outTransform;
	if (outIndex != nullptr)
		*outIndex = params.outIndex;
	if (found != nullptr)
		*found = params.found;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UpdatePlayerLookAtSideFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::UpdatePlayerLookAtSideFocus(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UpdatePlayerLookAtSideFocus");

	ABP_WKNDPlayerPawn_C_UpdatePlayerLookAtSideFocus_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartButtonTutorialComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Tutorial                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   TutorialText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Arrow_fades_when_closer_than_dist (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Arrow_Totally_Fade_Dist        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::StartButtonTutorialComponent(EControllerHand Hand, int Tutorial, class USceneComponent* TargetComponent, const struct FText& TutorialText, float Arrow_fades_when_closer_than_dist, float Arrow_Totally_Fade_Dist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartButtonTutorialComponent");

	ABP_WKNDPlayerPawn_C_StartButtonTutorialComponent_Params params;
	params.Hand = Hand;
	params.Tutorial = Tutorial;
	params.TargetComponent = TargetComponent;
	params.TutorialText = TutorialText;
	params.Arrow_fades_when_closer_than_dist = Arrow_fades_when_closer_than_dist;
	params.Arrow_Totally_Fade_Dist = Arrow_Totally_Fade_Dist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ForceOffTeleportUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceOff                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::ForceOffTeleportUI(bool bForceOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ForceOffTeleportUI");

	ABP_WKNDPlayerPawn_C_ForceOffTeleportUI_Params params;
	params.bForceOff = bForceOff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DrawLocomotionDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::DrawLocomotionDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DrawLocomotionDebug");

	ABP_WKNDPlayerPawn_C_DrawLocomotionDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.IsMandatedPointBlue
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           pointIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WKNDPlayerPawn_C::IsMandatedPointBlue(int* pointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.IsMandatedPointBlue");

	ABP_WKNDPlayerPawn_C_IsMandatedPointBlue_Params params;
	params.pointIndex = pointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BroadcastThrottleAsTeleport
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::BroadcastThrottleAsTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BroadcastThrottleAsTeleport");

	ABP_WKNDPlayerPawn_C_BroadcastThrottleAsTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetClosestMandatedPoint
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              outTransform                   (Parm, OutParm, IsPlainOldData)
// int                            outIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::GetClosestMandatedPoint(struct FVector* CheckLocation, struct FTransform* outTransform, int* outIndex, bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetClosestMandatedPoint");

	ABP_WKNDPlayerPawn_C_GetClosestMandatedPoint_Params params;
	params.CheckLocation = CheckLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outTransform != nullptr)
		*outTransform = params.outTransform;
	if (outIndex != nullptr)
		*outIndex = params.outIndex;
	if (found != nullptr)
		*found = params.found;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SpawnLightsaber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::SpawnLightsaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SpawnLightsaber");

	ABP_WKNDPlayerPawn_C_SpawnLightsaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SpawnMultiTool
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::SpawnMultiTool()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SpawnMultiTool");

	ABP_WKNDPlayerPawn_C_SpawnMultiTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetNavigationRoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::SetNavigationRoot(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetNavigationRoot");

	ABP_WKNDPlayerPawn_C_SetNavigationRoot_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetBlackoutWarningTextTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              SpawnTransform                 (Parm, OutParm, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::GetBlackoutWarningTextTransform(struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetBlackoutWarningTextTransform");

	ABP_WKNDPlayerPawn_C_GetBlackoutWarningTextTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnTransform != nullptr)
		*SpawnTransform = params.SpawnTransform;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetLightsaberToolbeltSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWKNDToolbeltSlotComponent* RightToolbeltSlot              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::GetLightsaberToolbeltSlot(class UWKNDToolbeltSlotComponent** RightToolbeltSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetLightsaberToolbeltSlot");

	ABP_WKNDPlayerPawn_C_GetLightsaberToolbeltSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RightToolbeltSlot != nullptr)
		*RightToolbeltSlot = params.RightToolbeltSlot;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickupDispatch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::PickupDispatch(class AActor* Actor, EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickupDispatch");

	ABP_WKNDPlayerPawn_C_PickupDispatch_Params params;
	params.Actor = Actor;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetNavFilter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::SetNavFilter(class UClass* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetNavFilter");

	ABP_WKNDPlayerPawn_C_SetNavFilter_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.CompleteButtonTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Tutorial                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::CompleteButtonTutorial(EControllerHand Hand, int Tutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.CompleteButtonTutorial");

	ABP_WKNDPlayerPawn_C_CompleteButtonTutorial_Params params;
	params.Hand = Hand;
	params.Tutorial = Tutorial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartButtonTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Tutorial                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TutorialText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  Target_Actor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Arrow_fades_when_closer_than_dist (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Arrow_Totally_Fade_Dist        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::StartButtonTutorial(EControllerHand Hand, int Tutorial, const struct FText& TutorialText, class AActor* Target_Actor, float Arrow_fades_when_closer_than_dist, float Arrow_Totally_Fade_Dist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartButtonTutorial");

	ABP_WKNDPlayerPawn_C_StartButtonTutorial_Params params;
	params.Hand = Hand;
	params.Tutorial = Tutorial;
	params.TutorialText = TutorialText;
	params.Target_Actor = Target_Actor;
	params.Arrow_fades_when_closer_than_dist = Arrow_fades_when_closer_than_dist;
	params.Arrow_Totally_Fade_Dist = Arrow_Totally_Fade_Dist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetNewFacingRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                DesiredRotation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::SetNewFacingRotation(const struct FRotator& DesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetNewFacingRotation");

	ABP_WKNDPlayerPawn_C_SetNewFacingRotation_Params params;
	params.DesiredRotation = DesiredRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetComboDetectionWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARPOCPickupWeapon*       weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::SetComboDetectionWeapon(class ARPOCPickupWeapon* weapon, EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetComboDetectionWeapon");

	ABP_WKNDPlayerPawn_C_SetComboDetectionWeapon_Params params;
	params.weapon = weapon;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetupComboDetection
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::SetupComboDetection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetupComboDetection");

	ABP_WKNDPlayerPawn_C_SetupComboDetection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UserConstructionScript");

	ABP_WKNDPlayerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_3__FinishedFunc");

	ABP_WKNDPlayerPawn_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_3__UpdateFunc");

	ABP_WKNDPlayerPawn_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_1__FinishedFunc");

	ABP_WKNDPlayerPawn_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_1__UpdateFunc");

	ABP_WKNDPlayerPawn_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_0__FinishedFunc");

	ABP_WKNDPlayerPawn_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_0__UpdateFunc");

	ABP_WKNDPlayerPawn_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_4__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::Timeline_4__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_4__FinishedFunc");

	ABP_WKNDPlayerPawn_C_Timeline_4__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_4__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::Timeline_4__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_4__UpdateFunc");

	ABP_WKNDPlayerPawn_C_Timeline_4__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_2__FinishedFunc");

	ABP_WKNDPlayerPawn_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_2__UpdateFunc");

	ABP_WKNDPlayerPawn_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_30(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_30");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_30_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_29(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_29");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_29_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_28(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_28");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_28_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_27(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_27");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_26(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_26");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_25(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_25");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_K_K2Node_InputKeyEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_K_K2Node_InputKeyEvent_24(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_K_K2Node_InputKeyEvent_24");

	ABP_WKNDPlayerPawn_C_InpActEvt_K_K2Node_InputKeyEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_23(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_23");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_22");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_21");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_20");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_19");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_18");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_17");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_16");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_15");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_14");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_13");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_12");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_11");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_10");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_9");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_8");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_7");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_6");

	ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyEnd_402E9D8A4E83FBFB9E6B6AB21A3B3155
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnNotifyEnd_402E9D8A4E83FBFB9E6B6AB21A3B3155(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyEnd_402E9D8A4E83FBFB9E6B6AB21A3B3155");

	ABP_WKNDPlayerPawn_C_OnNotifyEnd_402E9D8A4E83FBFB9E6B6AB21A3B3155_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyBegin_402E9D8A4E83FBFB9E6B6AB21A3B3155
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnNotifyBegin_402E9D8A4E83FBFB9E6B6AB21A3B3155(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyBegin_402E9D8A4E83FBFB9E6B6AB21A3B3155");

	ABP_WKNDPlayerPawn_C_OnNotifyBegin_402E9D8A4E83FBFB9E6B6AB21A3B3155_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnInterrupted_402E9D8A4E83FBFB9E6B6AB21A3B3155
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnInterrupted_402E9D8A4E83FBFB9E6B6AB21A3B3155(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnInterrupted_402E9D8A4E83FBFB9E6B6AB21A3B3155");

	ABP_WKNDPlayerPawn_C_OnInterrupted_402E9D8A4E83FBFB9E6B6AB21A3B3155_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnBlendOut_402E9D8A4E83FBFB9E6B6AB21A3B3155
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnBlendOut_402E9D8A4E83FBFB9E6B6AB21A3B3155(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnBlendOut_402E9D8A4E83FBFB9E6B6AB21A3B3155");

	ABP_WKNDPlayerPawn_C_OnBlendOut_402E9D8A4E83FBFB9E6B6AB21A3B3155_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnCompleted_402E9D8A4E83FBFB9E6B6AB21A3B3155
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnCompleted_402E9D8A4E83FBFB9E6B6AB21A3B3155(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnCompleted_402E9D8A4E83FBFB9E6B6AB21A3B3155");

	ABP_WKNDPlayerPawn_C_OnCompleted_402E9D8A4E83FBFB9E6B6AB21A3B3155_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyEnd_10F73EF14C1DB8ADE521A89279BC3383
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnNotifyEnd_10F73EF14C1DB8ADE521A89279BC3383(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyEnd_10F73EF14C1DB8ADE521A89279BC3383");

	ABP_WKNDPlayerPawn_C_OnNotifyEnd_10F73EF14C1DB8ADE521A89279BC3383_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyBegin_10F73EF14C1DB8ADE521A89279BC3383
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnNotifyBegin_10F73EF14C1DB8ADE521A89279BC3383(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyBegin_10F73EF14C1DB8ADE521A89279BC3383");

	ABP_WKNDPlayerPawn_C_OnNotifyBegin_10F73EF14C1DB8ADE521A89279BC3383_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnInterrupted_10F73EF14C1DB8ADE521A89279BC3383
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnInterrupted_10F73EF14C1DB8ADE521A89279BC3383(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnInterrupted_10F73EF14C1DB8ADE521A89279BC3383");

	ABP_WKNDPlayerPawn_C_OnInterrupted_10F73EF14C1DB8ADE521A89279BC3383_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnBlendOut_10F73EF14C1DB8ADE521A89279BC3383
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnBlendOut_10F73EF14C1DB8ADE521A89279BC3383(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnBlendOut_10F73EF14C1DB8ADE521A89279BC3383");

	ABP_WKNDPlayerPawn_C_OnBlendOut_10F73EF14C1DB8ADE521A89279BC3383_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnCompleted_10F73EF14C1DB8ADE521A89279BC3383
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnCompleted_10F73EF14C1DB8ADE521A89279BC3383(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnCompleted_10F73EF14C1DB8ADE521A89279BC3383");

	ABP_WKNDPlayerPawn_C_OnCompleted_10F73EF14C1DB8ADE521A89279BC3383_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_C_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_C_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_C_K2Node_InputKeyEvent_5");

	ABP_WKNDPlayerPawn_C_InpActEvt_C_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_One_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_One_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_One_K2Node_InputKeyEvent_4");

	ABP_WKNDPlayerPawn_C_InpActEvt_One_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_Two_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_Two_K2Node_InputKeyEvent_3");

	ABP_WKNDPlayerPawn_C_InpActEvt_Two_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_Three_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_Three_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_Three_K2Node_InputKeyEvent_2");

	ABP_WKNDPlayerPawn_C_InpActEvt_Three_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_Four_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::InpActEvt_Four_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_Four_K2Node_InputKeyEvent_1");

	ABP_WKNDPlayerPawn_C_InpActEvt_Four_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UpdateDamagePlane
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::UpdateDamagePlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UpdateDamagePlane");

	ABP_WKNDPlayerPawn_C_UpdateDamagePlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveBeginPlay");

	ABP_WKNDPlayerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveTick");

	ABP_WKNDPlayerPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.VisualAssistHalo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::VisualAssistHalo(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.VisualAssistHalo");

	ABP_WKNDPlayerPawn_C_VisualAssistHalo_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveOnTeleport
// (Event, Public, BlueprintEvent)
// Parameters:
// class AWKNDMotionController**  MotionController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::ReceiveOnTeleport(class AWKNDMotionController** MotionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveOnTeleport");

	ABP_WKNDPlayerPawn_C_ReceiveOnTeleport_Params params;
	params.MotionController = MotionController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StopAllDamageEffects
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::StopAllDamageEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StopAllDamageEffects");

	ABP_WKNDPlayerPawn_C_StopAllDamageEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnHealthRestored__DelegateSignature
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnHealthRestored__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnHealthRestored__DelegateSignature");

	ABP_WKNDPlayerPawn_C_BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnHealthRestored__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PlayDisarmMontage
// (Event, Public, BlueprintEvent)
// Parameters:
// EDisarmType*                   DisarmedHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::PlayDisarmMontage(EDisarmType* DisarmedHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PlayDisarmMontage");

	ABP_WKNDPlayerPawn_C_PlayDisarmMontage_Params params;
	params.DisarmedHand = DisarmedHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickedUpWeaponRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARPOCPickupWeapon*       weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::PickedUpWeaponRight(class ARPOCPickupWeapon* weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickedUpWeaponRight");

	ABP_WKNDPlayerPawn_C_PickedUpWeaponRight_Params params;
	params.weapon = weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DroppedWeaponRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARPOCPickupWeapon*       weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::DroppedWeaponRight(class ARPOCPickupWeapon* weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DroppedWeaponRight");

	ABP_WKNDPlayerPawn_C_DroppedWeaponRight_Params params;
	params.weapon = weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickedUpWeaponLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARPOCPickupWeapon*       weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::PickedUpWeaponLeft(class ARPOCPickupWeapon* weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickedUpWeaponLeft");

	ABP_WKNDPlayerPawn_C_PickedUpWeaponLeft_Params params;
	params.weapon = weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DroppedWeaponLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARPOCPickupWeapon*       weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::DroppedWeaponLeft(class ARPOCPickupWeapon* weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DroppedWeaponLeft");

	ABP_WKNDPlayerPawn_C_DroppedWeaponLeft_Params params;
	params.weapon = weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UpdatePlayerDamageEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Base                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BB                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 col                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::UpdatePlayerDamageEffect(float Base, float BB, const struct FVector& col)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UpdatePlayerDamageEffect");

	ABP_WKNDPlayerPawn_C_UpdatePlayerDamageEffect_Params params;
	params.Base = Base;
	params.BB = BB;
	params.col = col;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveOnBurntHand
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::ReceiveOnBurntHand(struct FVector* Location, struct FVector* Normal, struct FVector* Direction, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveOnBurntHand");

	ABP_WKNDPlayerPawn_C_ReceiveOnBurntHand_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.Direction = Direction;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.QuitToMenuLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::QuitToMenuLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.QuitToMenuLevel");

	ABP_WKNDPlayerPawn_C_QuitToMenuLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartBlockLag
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::StartBlockLag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartBlockLag");

	ABP_WKNDPlayerPawn_C_StartBlockLag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnHitGround_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnHitGround_Event(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnHitGround_Event");

	ABP_WKNDPlayerPawn_C_OnHitGround_Event_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnFallStart_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::OnFallStart_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnFallStart_Event");

	ABP_WKNDPlayerPawn_C_OnFallStart_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_0_NTSnapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ENTSnapDirection>  Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_0_NTSnapSignature__DelegateSignature(TEnumAsByte<ENTSnapDirection> Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_0_NTSnapSignature__DelegateSignature");

	ABP_WKNDPlayerPawn_C_BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_0_NTSnapSignature__DelegateSignature_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_1_NTSnapFinishedSignature__DelegateSignature
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_1_NTSnapFinishedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_1_NTSnapFinishedSignature__DelegateSignature");

	ABP_WKNDPlayerPawn_C_BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_1_NTSnapFinishedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.EndLocomotion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::EndLocomotion(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.EndLocomotion");

	ABP_WKNDPlayerPawn_C_EndLocomotion_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            DamageTaken                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature");

	ABP_WKNDPlayerPawn_C_BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartLocomotion
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::StartLocomotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartLocomotion");

	ABP_WKNDPlayerPawn_C_StartLocomotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.AbortPlayerDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARPOCPickup_Lightsaber*  Saber1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARPOCPickup_Lightsaber*  Saber2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RewindTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSaberClashData         Clash                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerPawn_C::AbortPlayerDamage(class ARPOCPickup_Lightsaber* Saber1, class ARPOCPickup_Lightsaber* Saber2, float RewindTime, const struct FSaberClashData& Clash)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.AbortPlayerDamage");

	ABP_WKNDPlayerPawn_C_AbortPlayerDamage_Params params;
	params.Saber1 = Saber1;
	params.Saber2 = Saber2;
	params.RewindTime = RewindTime;
	params.Clash = Clash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_3_BlackoutEndedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_3_BlackoutEndedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_3_BlackoutEndedDelegate__DelegateSignature");

	ABP_WKNDPlayerPawn_C_BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_3_BlackoutEndedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_5_BlackoutStartedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_5_BlackoutStartedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_5_BlackoutStartedDelegate__DelegateSignature");

	ABP_WKNDPlayerPawn_C_BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_5_BlackoutStartedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BroadcastMandatedSlideAsTeleport
// (Event, Public, BlueprintEvent)
// Parameters:
// class AWKNDMotionController**  teleportingController          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::BroadcastMandatedSlideAsTeleport(class AWKNDMotionController** teleportingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BroadcastMandatedSlideAsTeleport");

	ABP_WKNDPlayerPawn_C_BroadcastMandatedSlideAsTeleport_Params params;
	params.teleportingController = teleportingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnGamePaused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowPauseMenu                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnGamePaused(bool bShowPauseMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnGamePaused");

	ABP_WKNDPlayerPawn_C_OnGamePaused_Params params;
	params.bShowPauseMenu = bShowPauseMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnGameUnPaused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowPauseMenu                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::OnGameUnPaused(bool bShowPauseMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnGameUnPaused");

	ABP_WKNDPlayerPawn_C_OnGameUnPaused_Params params;
	params.bShowPauseMenu = bShowPauseMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_4_BlackoutStateChangedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_4_BlackoutStateChangedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_4_BlackoutStateChangedDelegate__DelegateSignature");

	ABP_WKNDPlayerPawn_C_BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_4_BlackoutStateChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_0_BlackoutStateChangedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_0_BlackoutStateChangedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_0_BlackoutStateChangedDelegate__DelegateSignature");

	ABP_WKNDPlayerPawn_C_BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_0_BlackoutStateChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.CameraTeleport
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator*               Rotator                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::CameraTeleport(struct FVector* Location, struct FRotator* Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.CameraTeleport");

	ABP_WKNDPlayerPawn_C_CameraTeleport_Params params;
	params.Location = Location;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__VRNotificationComponent_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_WKNDPlayerPawn_C::BndEvt__VRNotificationComponent_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__VRNotificationComponent_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature");

	ABP_WKNDPlayerPawn_C_BndEvt__VRNotificationComponent_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BeginFallHaptics
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         FallDistance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::BeginFallHaptics(float* FallDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BeginFallHaptics");

	ABP_WKNDPlayerPawn_C_BeginFallHaptics_Params params;
	params.FallDistance = FallDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DeflectProjectile
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bParried                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::DeflectProjectile(class AActor** Projectile, bool* bParried)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DeflectProjectile");

	ABP_WKNDPlayerPawn_C_DeflectProjectile_Params params;
	params.Projectile = Projectile;
	params.bParried = bParried;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ExecuteUbergraph_BP_WKNDPlayerPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::ExecuteUbergraph_BP_WKNDPlayerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ExecuteUbergraph_BP_WKNDPlayerPawn");

	ABP_WKNDPlayerPawn_C_ExecuteUbergraph_BP_WKNDPlayerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.TakeBlasterHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::TakeBlasterHit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.TakeBlasterHit__DelegateSignature");

	ABP_WKNDPlayerPawn_C_TakeBlasterHit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.TakeSaberHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Saber                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::TakeSaberHit__DelegateSignature(class AActor* Saber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.TakeSaberHit__DelegateSignature");

	ABP_WKNDPlayerPawn_C_TakeSaberHit__DelegateSignature_Params params;
	params.Saber = Saber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickedUpMultiTool__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::PickedUpMultiTool__DelegateSignature(EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickedUpMultiTool__DelegateSignature");

	ABP_WKNDPlayerPawn_C_PickedUpMultiTool__DelegateSignature_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PoseLost__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PoseName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::PoseLost__DelegateSignature(const struct FName& PoseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PoseLost__DelegateSignature");

	ABP_WKNDPlayerPawn_C_PoseLost__DelegateSignature_Params params;
	params.PoseName = PoseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.NewMoveSuccessful__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MoveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::NewMoveSuccessful__DelegateSignature(const struct FName& MoveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.NewMoveSuccessful__DelegateSignature");

	ABP_WKNDPlayerPawn_C_NewMoveSuccessful__DelegateSignature_Params params;
	params.MoveName = MoveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PoseFound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PoseName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerPawn_C::PoseFound__DelegateSignature(const struct FName& PoseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PoseFound__DelegateSignature");

	ABP_WKNDPlayerPawn_C_PoseFound__DelegateSignature_Params params;
	params.PoseName = PoseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PlayerHitEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::PlayerHitEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PlayerHitEvent__DelegateSignature");

	ABP_WKNDPlayerPawn_C_PlayerHitEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DebugStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::DebugStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DebugStart__DelegateSignature");

	ABP_WKNDPlayerPawn_C_DebugStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbEnd_L__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::ClimbEnd_L__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbEnd_L__DelegateSignature");

	ABP_WKNDPlayerPawn_C_ClimbEnd_L__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbStart_L__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::ClimbStart_L__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbStart_L__DelegateSignature");

	ABP_WKNDPlayerPawn_C_ClimbStart_L__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbEnd_R__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::ClimbEnd_R__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbEnd_R__DelegateSignature");

	ABP_WKNDPlayerPawn_C_ClimbEnd_R__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbStart_R__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerPawn_C::ClimbStart_R__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbStart_R__DelegateSignature");

	ABP_WKNDPlayerPawn_C_ClimbStart_R__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
