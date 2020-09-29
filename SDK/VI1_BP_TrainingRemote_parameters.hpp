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

// Function BP_TrainingRemote.BP_TrainingRemote_C.GetEnemyType
struct ABP_TrainingRemote_C_GetEnemyType_Params
{
	EEnemyType                                         EnemyType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.Explode
struct ABP_TrainingRemote_C_Explode_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.IsDestroyed
struct ABP_TrainingRemote_C_IsDestroyed_Params
{
	bool                                               IsDestroyed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.InitSpawned
struct ABP_TrainingRemote_C_InitSpawned_Params
{
	int                                                MaxHits;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.SelectPointOnPlane
struct ABP_TrainingRemote_C_SelectPointOnPlane_Params
{
	struct FVector                                     Point_on_Plane;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.DebugPrint
struct ABP_TrainingRemote_C_DebugPrint_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.FilterShotReports
struct ABP_TrainingRemote_C_FilterShotReports_Params
{
	class AActor*                                      TestShot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllAccountedFor;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.InitAttackSequence
struct ABP_TrainingRemote_C_InitAttackSequence_Params
{
	int                                                NewDesiredShots;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time_Between_Shots;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrainingRemoteFiringMode>             FiringMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.UserConstructionScript
struct ABP_TrainingRemote_C_UserConstructionScript_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyEnd_CD699DB947320AEDEFDC3A98B0E8948C
struct ABP_TrainingRemote_C_OnNotifyEnd_CD699DB947320AEDEFDC3A98B0E8948C_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyBegin_CD699DB947320AEDEFDC3A98B0E8948C
struct ABP_TrainingRemote_C_OnNotifyBegin_CD699DB947320AEDEFDC3A98B0E8948C_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.OnInterrupted_CD699DB947320AEDEFDC3A98B0E8948C
struct ABP_TrainingRemote_C_OnInterrupted_CD699DB947320AEDEFDC3A98B0E8948C_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.OnBlendOut_CD699DB947320AEDEFDC3A98B0E8948C
struct ABP_TrainingRemote_C_OnBlendOut_CD699DB947320AEDEFDC3A98B0E8948C_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.OnCompleted_CD699DB947320AEDEFDC3A98B0E8948C
struct ABP_TrainingRemote_C_OnCompleted_CD699DB947320AEDEFDC3A98B0E8948C_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyEnd_F75823894AE21CCDCEFE1288A0F4EDB9
struct ABP_TrainingRemote_C_OnNotifyEnd_F75823894AE21CCDCEFE1288A0F4EDB9_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyBegin_F75823894AE21CCDCEFE1288A0F4EDB9
struct ABP_TrainingRemote_C_OnNotifyBegin_F75823894AE21CCDCEFE1288A0F4EDB9_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.OnInterrupted_F75823894AE21CCDCEFE1288A0F4EDB9
struct ABP_TrainingRemote_C_OnInterrupted_F75823894AE21CCDCEFE1288A0F4EDB9_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.OnBlendOut_F75823894AE21CCDCEFE1288A0F4EDB9
struct ABP_TrainingRemote_C_OnBlendOut_F75823894AE21CCDCEFE1288A0F4EDB9_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.OnCompleted_F75823894AE21CCDCEFE1288A0F4EDB9
struct ABP_TrainingRemote_C_OnCompleted_F75823894AE21CCDCEFE1288A0F4EDB9_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.ReceiveBeginPlay
struct ABP_TrainingRemote_C_ReceiveBeginPlay_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.BndEvt__WKNDBlaster_K2Node_ComponentBoundEvent_0_BlasterShotFiredSignature__DelegateSignature
struct ABP_TrainingRemote_C_BndEvt__WKNDBlaster_K2Node_ComponentBoundEvent_0_BlasterShotFiredSignature__DelegateSignature_Params
{
	class AActor*                                      Shooter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.DoAttackSequence
struct ABP_TrainingRemote_C_DoAttackSequence_Params
{
	int                                                NewDesiredShots;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time_Between_Shots;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrainingRemoteFiringMode>             FiringMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.ReleaseToMove
struct ABP_TrainingRemote_C_ReleaseToMove_Params
{
	class AActor*                                      Shot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.ShotTimeOut
struct ABP_TrainingRemote_C_ShotTimeOut_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.BeginShots
struct ABP_TrainingRemote_C_BeginShots_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.ProjDeflected
struct ABP_TrainingRemote_C_ProjDeflected_Params
{
	class AActor*                                      ProjActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DeflectingActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bParried;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.ProjCollidingHit
struct ABP_TrainingRemote_C_ProjCollidingHit_Params
{
	class AActor*                                      ProjActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.EndBarrage
struct ABP_TrainingRemote_C_EndBarrage_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.RecoveredFromHit
struct ABP_TrainingRemote_C_RecoveredFromHit_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.StopBarrage
struct ABP_TrainingRemote_C_StopBarrage_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.FlightLoop
struct ABP_TrainingRemote_C_FlightLoop_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.StopFlightLoop
struct ABP_TrainingRemote_C_StopFlightLoop_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.SpawnHitDecal
struct ABP_TrainingRemote_C_SpawnHitDecal_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature
struct ABP_TrainingRemote_C_BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.GoToRestowPosition
struct ABP_TrainingRemote_C_GoToRestowPosition_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.Restow
struct ABP_TrainingRemote_C_Restow_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.ApplyBlasterDamage
struct ABP_TrainingRemote_C_ApplyBlasterDamage_Params
{
	class AActor*                                      Hit_Actor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_1_OnTakeDamage__DelegateSignature
struct ABP_TrainingRemote_C_BndEvt__Health_Component_K2Node_ComponentBoundEvent_1_OnTakeDamage__DelegateSignature_Params
{
	int                                                DamageTaken;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.ExecuteUbergraph_BP_TrainingRemote
struct ABP_TrainingRemote_C_ExecuteUbergraph_BP_TrainingRemote_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.ReadyForRestow__DelegateSignature
struct ABP_TrainingRemote_C_ReadyForRestow__DelegateSignature_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.SingleBarrageEnded__DelegateSignature
struct ABP_TrainingRemote_C_SingleBarrageEnded__DelegateSignature_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.Missed__DelegateSignature
struct ABP_TrainingRemote_C_Missed__DelegateSignature_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.Deflected__DelegateSignature
struct ABP_TrainingRemote_C_Deflected__DelegateSignature_Params
{
};

// Function BP_TrainingRemote.BP_TrainingRemote_C.Destroyed__DelegateSignature
struct ABP_TrainingRemote_C_Destroyed__DelegateSignature_Params
{
	class ABP_TrainingRemote_C*                        Remote_Drone;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
