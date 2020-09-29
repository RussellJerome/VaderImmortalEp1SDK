#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.IsRiftS
struct UWeekendFunctionLibrary_C_IsRiftS_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRiftS;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.HasRatingIncreased
struct UWeekendFunctionLibrary_C_HasRatingIncreased_Params
{
	ERating                                            RatingA;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERating                                            RatingB;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.FindExtendedDojoWaveManager
struct UWeekendFunctionLibrary_C_FindExtendedDojoWaveManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	class ABP_ExDojoWaveManager_C*                     ExtendedDojoWaveManager;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.FindWaveManager
struct UWeekendFunctionLibrary_C_FindWaveManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	class ABP_WKNDWaveManager_C*                       WaveManager;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.DoesLightsaberHaveEnforcedColor
struct UWeekendFunctionLibrary_C_DoesLightsaberHaveEnforcedColor_Params
{
	class UDataTable*                                  LightsaberDataTable;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LightsaberName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FName                                       EnforcedLightsaberColorName;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.LogPerfLabel
struct UWeekendFunctionLibrary_C_LogPerfLabel_Params
{
	struct FString                                     LabelText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateLookAtComponentTriggerEvent
struct UWeekendFunctionLibrary_C_CreateLookAtComponentTriggerEvent_Params
{
	class USceneComponent*                             NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSingleShot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTolerance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationRequired;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ReportDoneEvent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bTriggerOnlyOnce;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.ConstrainPlayer
struct UWeekendFunctionLibrary_C_ConstrainPlayer_Params
{
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_WKNDPlayerPawn_C*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FreezePlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseTeleportPoint;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Teleport_Point;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.TogglePlayerHandsAndTools
struct UWeekendFunctionLibrary_C_TogglePlayerHandsAndTools_Params
{
	bool                                               hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CameraPreciseTeleport
struct UWeekendFunctionLibrary_C_CameraPreciseTeleport_Params
{
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.UnPauseGame
struct UWeekendFunctionLibrary_C_UnPauseGame_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.PauseGame
struct UWeekendFunctionLibrary_C_PauseGame_Params
{
	bool                                               bShowPauseMenu;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.SetMotionControllerHand
struct UWeekendFunctionLibrary_C_SetMotionControllerHand_Params
{
	class UMotionControllerComponent*                  MotionController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.GetMotionControllerHand
struct UWeekendFunctionLibrary_C_GetMotionControllerHand_Params
{
	class UMotionControllerComponent*                  MotionController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.IsResumingFromCheckpoint
struct UWeekendFunctionLibrary_C_IsResumingFromCheckpoint_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsResumingFromCheckpoint;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.RemoveLookAtTriggerEvent
struct UWeekendFunctionLibrary_C_RemoveLookAtTriggerEvent_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateTeleportToSnapPointTrigger
struct UWeekendFunctionLibrary_C_CreateTeleportToSnapPointTrigger_Params
{
	struct FScriptDelegate                             Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateLookAwayTriggerEvent
struct UWeekendFunctionLibrary_C_CreateLookAwayTriggerEvent_Params
{
	class AActor*                                      NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSingleShot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTolerance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationRequired;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ReportDoneEvent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.CreateLookAtTriggerEvent
struct UWeekendFunctionLibrary_C_CreateLookAtTriggerEvent_Params
{
	class AActor*                                      NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSingleShot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTolerance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationRequired;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ReportDoneEvent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bTriggerOnlyOnce;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.ToggleTeleportSnapPoint
struct UWeekendFunctionLibrary_C_ToggleTeleportSnapPoint_Params
{
	class ATargetPoint*                                Snap_Target_Point;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Fallback_Snap_Location;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Snap_Radius;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable_Snap;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FallbackSnapRotation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               UseRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BlueSnapPoint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.TogglePlayerTeleport
struct UWeekendFunctionLibrary_C_TogglePlayerTeleport_Params
{
	bool                                               Teleport_Enabled;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Blackout_Zone_Radius;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeekendFunctionLibrary.WeekendFunctionLibrary_C.GetNearestActorOfClass
struct UWeekendFunctionLibrary_C_GetNearestActorOfClass_Params
{
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Nearest_Actor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
