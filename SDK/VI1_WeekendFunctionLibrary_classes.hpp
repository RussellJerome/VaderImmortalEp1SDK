#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeekendFunctionLibrary.WeekendFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UWeekendFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeekendFunctionLibrary.WeekendFunctionLibrary_C");
		return ptr;
	}


	void STATIC_IsRiftS(class UObject* __WorldContext, bool* IsRiftS);
	bool STATIC_HasRatingIncreased(ERating RatingA, ERating RatingB, class UObject* __WorldContext);
	bool STATIC_FindExtendedDojoWaveManager(class UObject* __WorldContext, class ABP_ExDojoWaveManager_C** ExtendedDojoWaveManager);
	bool STATIC_FindWaveManager(class UObject* __WorldContext, class ABP_WKNDWaveManager_C** WaveManager);
	bool STATIC_DoesLightsaberHaveEnforcedColor(class UDataTable* LightsaberDataTable, const struct FName& LightsaberName, class UObject* __WorldContext, struct FName* EnforcedLightsaberColorName);
	void STATIC_LogPerfLabel(const struct FString& LabelText, class UObject* __WorldContext);
	void STATIC_CreateLookAtComponentTriggerEvent(class USceneComponent* NewTarget, bool bSingleShot, float AngleTolerance, float DurationRequired, const struct FScriptDelegate& ReportDoneEvent, bool bTriggerOnlyOnce, class UObject* __WorldContext);
	void STATIC_ConstrainPlayer(float Radius, class ABP_WKNDPlayerPawn_C* Player, bool FreezePlayer, bool UseTeleportPoint, const struct FTransform& Teleport_Point, class UObject* __WorldContext);
	void STATIC_TogglePlayerHandsAndTools(bool hidden, class UObject* __WorldContext);
	void STATIC_CameraPreciseTeleport(const struct FVector& TargetLocation, const struct FRotator& TargetRotation, class UObject* __WorldContext);
	void STATIC_UnPauseGame(class UObject* __WorldContext, bool* bSuccess);
	void STATIC_PauseGame(bool bShowPauseMenu, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_SetMotionControllerHand(class UMotionControllerComponent* MotionController, EControllerHand Hand, class UObject* __WorldContext);
	void STATIC_GetMotionControllerHand(class UMotionControllerComponent* MotionController, class UObject* __WorldContext, EControllerHand* Hand);
	void STATIC_IsResumingFromCheckpoint(class UObject* __WorldContext, bool* bIsResumingFromCheckpoint);
	void STATIC_RemoveLookAtTriggerEvent(class AActor* Target, class UObject* __WorldContext);
	void STATIC_CreateTeleportToSnapPointTrigger(const struct FScriptDelegate& Event, class UObject* __WorldContext);
	void STATIC_CreateLookAwayTriggerEvent(class AActor* NewTarget, bool bSingleShot, float AngleTolerance, float DurationRequired, const struct FScriptDelegate& ReportDoneEvent, class UObject* __WorldContext);
	void STATIC_CreateLookAtTriggerEvent(class AActor* NewTarget, bool bSingleShot, float AngleTolerance, float DurationRequired, const struct FScriptDelegate& ReportDoneEvent, bool bTriggerOnlyOnce, class UObject* __WorldContext);
	void STATIC_ToggleTeleportSnapPoint(class ATargetPoint* Snap_Target_Point, const struct FVector& Fallback_Snap_Location, float Snap_Radius, bool Enable_Snap, int NewId, const struct FRotator& FallbackSnapRotation, bool UseRotation, bool BlueSnapPoint, class UObject* __WorldContext);
	void STATIC_TogglePlayerTeleport(bool Teleport_Enabled, float Blackout_Zone_Radius, class UObject* __WorldContext);
	void STATIC_GetNearestActorOfClass(class UClass* ActorClass, class UObject* __WorldContext, class AActor** Nearest_Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
