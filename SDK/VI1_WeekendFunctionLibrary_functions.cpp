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

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.IsRiftS
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRiftS                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_IsRiftS(class UObject* __WorldContext, bool* IsRiftS)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.IsRiftS");

	UWeekendFunctionLibrary_C_IsRiftS_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRiftS != nullptr)
		*IsRiftS = params.IsRiftS;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.HasRatingIncreased
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ERating                        RatingA                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERating                        RatingB                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeekendFunctionLibrary_C::STATIC_HasRatingIncreased(ERating RatingA, ERating RatingB, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.HasRatingIncreased");

	UWeekendFunctionLibrary_C_HasRatingIncreased_Params params;
	params.RatingA = RatingA;
	params.RatingB = RatingB;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.FindExtendedDojoWaveManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class ABP_ExDojoWaveManager_C* ExtendedDojoWaveManager        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool UWeekendFunctionLibrary_C::STATIC_FindExtendedDojoWaveManager(class UObject* __WorldContext, class ABP_ExDojoWaveManager_C** ExtendedDojoWaveManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.FindExtendedDojoWaveManager");

	UWeekendFunctionLibrary_C_FindExtendedDojoWaveManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtendedDojoWaveManager != nullptr)
		*ExtendedDojoWaveManager = params.ExtendedDojoWaveManager;

	return params.ReturnValue;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.FindWaveManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class ABP_WKNDWaveManager_C*   WaveManager                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool UWeekendFunctionLibrary_C::STATIC_FindWaveManager(class UObject* __WorldContext, class ABP_WKNDWaveManager_C** WaveManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.FindWaveManager");

	UWeekendFunctionLibrary_C_FindWaveManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaveManager != nullptr)
		*WaveManager = params.WaveManager;

	return params.ReturnValue;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.DoesLightsaberHaveEnforcedColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDataTable*              LightsaberDataTable            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LightsaberName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FName                   EnforcedLightsaberColorName    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool UWeekendFunctionLibrary_C::STATIC_DoesLightsaberHaveEnforcedColor(class UDataTable* LightsaberDataTable, const struct FName& LightsaberName, class UObject* __WorldContext, struct FName* EnforcedLightsaberColorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.DoesLightsaberHaveEnforcedColor");

	UWeekendFunctionLibrary_C_DoesLightsaberHaveEnforcedColor_Params params;
	params.LightsaberDataTable = LightsaberDataTable;
	params.LightsaberName = LightsaberName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnforcedLightsaberColorName != nullptr)
		*EnforcedLightsaberColorName = params.EnforcedLightsaberColorName;

	return params.ReturnValue;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.LogPerfLabel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LabelText                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_LogPerfLabel(const struct FString& LabelText, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.LogPerfLabel");

	UWeekendFunctionLibrary_C_LogPerfLabel_Params params;
	params.LabelText = LabelText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateLookAtComponentTriggerEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSingleShot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationRequired               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ReportDoneEvent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bTriggerOnlyOnce               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_CreateLookAtComponentTriggerEvent(class USceneComponent* NewTarget, bool bSingleShot, float AngleTolerance, float DurationRequired, const struct FScriptDelegate& ReportDoneEvent, bool bTriggerOnlyOnce, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateLookAtComponentTriggerEvent");

	UWeekendFunctionLibrary_C_CreateLookAtComponentTriggerEvent_Params params;
	params.NewTarget = NewTarget;
	params.bSingleShot = bSingleShot;
	params.AngleTolerance = AngleTolerance;
	params.DurationRequired = DurationRequired;
	params.ReportDoneEvent = ReportDoneEvent;
	params.bTriggerOnlyOnce = bTriggerOnlyOnce;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.ConstrainPlayer
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_WKNDPlayerPawn_C*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FreezePlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseTeleportPoint               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Teleport_Point                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_ConstrainPlayer(float Radius, class ABP_WKNDPlayerPawn_C* Player, bool FreezePlayer, bool UseTeleportPoint, const struct FTransform& Teleport_Point, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.ConstrainPlayer");

	UWeekendFunctionLibrary_C_ConstrainPlayer_Params params;
	params.Radius = Radius;
	params.Player = Player;
	params.FreezePlayer = FreezePlayer;
	params.UseTeleportPoint = UseTeleportPoint;
	params.Teleport_Point = Teleport_Point;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.TogglePlayerHandsAndTools
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_TogglePlayerHandsAndTools(bool hidden, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.TogglePlayerHandsAndTools");

	UWeekendFunctionLibrary_C_TogglePlayerHandsAndTools_Params params;
	params.hidden = hidden;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CameraPreciseTeleport
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_CameraPreciseTeleport(const struct FVector& TargetLocation, const struct FRotator& TargetRotation, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CameraPreciseTeleport");

	UWeekendFunctionLibrary_C_CameraPreciseTeleport_Params params;
	params.TargetLocation = TargetLocation;
	params.TargetRotation = TargetRotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.UnPauseGame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_UnPauseGame(class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.UnPauseGame");

	UWeekendFunctionLibrary_C_UnPauseGame_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.PauseGame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowPauseMenu                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_PauseGame(bool bShowPauseMenu, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.PauseGame");

	UWeekendFunctionLibrary_C_PauseGame_Params params;
	params.bShowPauseMenu = bShowPauseMenu;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.SetMotionControllerHand
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMotionControllerComponent* MotionController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_SetMotionControllerHand(class UMotionControllerComponent* MotionController, EControllerHand Hand, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.SetMotionControllerHand");

	UWeekendFunctionLibrary_C_SetMotionControllerHand_Params params;
	params.MotionController = MotionController;
	params.Hand = Hand;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.GetMotionControllerHand
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMotionControllerComponent* MotionController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_GetMotionControllerHand(class UMotionControllerComponent* MotionController, class UObject* __WorldContext, EControllerHand* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.GetMotionControllerHand");

	UWeekendFunctionLibrary_C_GetMotionControllerHand_Params params;
	params.MotionController = MotionController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hand != nullptr)
		*Hand = params.Hand;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.IsResumingFromCheckpoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsResumingFromCheckpoint      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_IsResumingFromCheckpoint(class UObject* __WorldContext, bool* bIsResumingFromCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.IsResumingFromCheckpoint");

	UWeekendFunctionLibrary_C_IsResumingFromCheckpoint_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsResumingFromCheckpoint != nullptr)
		*bIsResumingFromCheckpoint = params.bIsResumingFromCheckpoint;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.RemoveLookAtTriggerEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_RemoveLookAtTriggerEvent(class AActor* Target, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.RemoveLookAtTriggerEvent");

	UWeekendFunctionLibrary_C_RemoveLookAtTriggerEvent_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateTeleportToSnapPointTrigger
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_CreateTeleportToSnapPointTrigger(const struct FScriptDelegate& Event, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateTeleportToSnapPointTrigger");

	UWeekendFunctionLibrary_C_CreateTeleportToSnapPointTrigger_Params params;
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateLookAwayTriggerEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSingleShot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationRequired               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ReportDoneEvent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_CreateLookAwayTriggerEvent(class AActor* NewTarget, bool bSingleShot, float AngleTolerance, float DurationRequired, const struct FScriptDelegate& ReportDoneEvent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateLookAwayTriggerEvent");

	UWeekendFunctionLibrary_C_CreateLookAwayTriggerEvent_Params params;
	params.NewTarget = NewTarget;
	params.bSingleShot = bSingleShot;
	params.AngleTolerance = AngleTolerance;
	params.DurationRequired = DurationRequired;
	params.ReportDoneEvent = ReportDoneEvent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateLookAtTriggerEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSingleShot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationRequired               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ReportDoneEvent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bTriggerOnlyOnce               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_CreateLookAtTriggerEvent(class AActor* NewTarget, bool bSingleShot, float AngleTolerance, float DurationRequired, const struct FScriptDelegate& ReportDoneEvent, bool bTriggerOnlyOnce, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateLookAtTriggerEvent");

	UWeekendFunctionLibrary_C_CreateLookAtTriggerEvent_Params params;
	params.NewTarget = NewTarget;
	params.bSingleShot = bSingleShot;
	params.AngleTolerance = AngleTolerance;
	params.DurationRequired = DurationRequired;
	params.ReportDoneEvent = ReportDoneEvent;
	params.bTriggerOnlyOnce = bTriggerOnlyOnce;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.ToggleTeleportSnapPoint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATargetPoint*            Snap_Target_Point              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Fallback_Snap_Location         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Snap_Radius                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable_Snap                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                FallbackSnapRotation           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           UseRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BlueSnapPoint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_ToggleTeleportSnapPoint(class ATargetPoint* Snap_Target_Point, const struct FVector& Fallback_Snap_Location, float Snap_Radius, bool Enable_Snap, int NewId, const struct FRotator& FallbackSnapRotation, bool UseRotation, bool BlueSnapPoint, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.ToggleTeleportSnapPoint");

	UWeekendFunctionLibrary_C_ToggleTeleportSnapPoint_Params params;
	params.Snap_Target_Point = Snap_Target_Point;
	params.Fallback_Snap_Location = Fallback_Snap_Location;
	params.Snap_Radius = Snap_Radius;
	params.Enable_Snap = Enable_Snap;
	params.NewId = NewId;
	params.FallbackSnapRotation = FallbackSnapRotation;
	params.UseRotation = UseRotation;
	params.BlueSnapPoint = BlueSnapPoint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.TogglePlayerTeleport
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Teleport_Enabled               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Blackout_Zone_Radius           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_TogglePlayerTeleport(bool Teleport_Enabled, float Blackout_Zone_Radius, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.TogglePlayerTeleport");

	UWeekendFunctionLibrary_C_TogglePlayerTeleport_Params params;
	params.Teleport_Enabled = Teleport_Enabled;
	params.Blackout_Zone_Radius = Blackout_Zone_Radius;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.GetNearestActorOfClass
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Nearest_Actor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeekendFunctionLibrary_C::STATIC_GetNearestActorOfClass(class UClass* ActorClass, class UObject* __WorldContext, class AActor** Nearest_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.GetNearestActorOfClass");

	UWeekendFunctionLibrary_C_GetNearestActorOfClass_Params params;
	params.ActorClass = ActorClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Nearest_Actor != nullptr)
		*Nearest_Actor = params.Nearest_Actor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
