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

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ShouldAimAtPlayer?
struct ABP_VaderCharacter_Basic_C_ShouldAimAtPlayer__Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.AimAtActor?
struct ABP_VaderCharacter_Basic_C_AimAtActor__Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetAnimInstance
struct ABP_VaderCharacter_Basic_C_GetAnimInstance_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetNpcChestLocation
struct ABP_VaderCharacter_Basic_C_GetNpcChestLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SetupLookAtSettings
struct ABP_VaderCharacter_Basic_C_SetupLookAtSettings_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.UpdateLookAtTick
struct ABP_VaderCharacter_Basic_C_UpdateLookAtTick_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.UpdateWindTransform
struct ABP_VaderCharacter_Basic_C_UpdateWindTransform_Params
{
	bool                                               bDebug;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.StartWindTimeline
struct ABP_VaderCharacter_Basic_C_StartWindTimeline_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.CreateLocalWind
struct ABP_VaderCharacter_Basic_C_CreateLocalWind_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.StoreOnLoadMinLod
struct ABP_VaderCharacter_Basic_C_StoreOnLoadMinLod_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetWKNDRMotionController
struct ABP_VaderCharacter_Basic_C_GetWKNDRMotionController_Params
{
	class ABP_WKNDMotionController_C*                  MotionController;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetWKNDLMotionController
struct ABP_VaderCharacter_Basic_C_GetWKNDLMotionController_Params
{
	class ABP_WKNDMotionController_C*                  MotionController;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.DrawDebugOrientation
struct ABP_VaderCharacter_Basic_C_DrawDebugOrientation_Params
{
	struct FTransform                                  Orientation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Saber;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SaberToBelt
struct ABP_VaderCharacter_Basic_C_SaberToBelt_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SaberToRHand
struct ABP_VaderCharacter_Basic_C_SaberToRHand_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.HideSaber
struct ABP_VaderCharacter_Basic_C_HideSaber_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ShowSaber
struct ABP_VaderCharacter_Basic_C_ShowSaber_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.DeactivateSaber
struct ABP_VaderCharacter_Basic_C_DeactivateSaber_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ActivateSaber
struct ABP_VaderCharacter_Basic_C_ActivateSaber_Params
{
	bool                                               IncludeGrabbedSaber_;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SetSequenceBlendWeight
struct ABP_VaderCharacter_Basic_C_SetSequenceBlendWeight_Params
{
	float                                              Interp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.UserConstructionScript
struct ABP_VaderCharacter_Basic_C_UserConstructionScript_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Timeline_WindSpeed__FinishedFunc
struct ABP_VaderCharacter_Basic_C_Timeline_WindSpeed__FinishedFunc_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Timeline_WindSpeed__UpdateFunc
struct ABP_VaderCharacter_Basic_C_Timeline_WindSpeed__UpdateFunc_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.FireBlaster
struct ABP_VaderCharacter_Basic_C_FireBlaster_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - Delete
struct ABP_VaderCharacter_Basic_C_Decals___Delete_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - SpawnHit
struct ABP_VaderCharacter_Basic_C_Decals___SpawnHit_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - SpawnStab
struct ABP_VaderCharacter_Basic_C_Decals___SpawnStab_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - SpawnSlash
struct ABP_VaderCharacter_Basic_C_Decals___SpawnSlash_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Hide Blaster
struct ABP_VaderCharacter_Basic_C_Hide_Blaster_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.BlueprintAnimationRateOptimization
struct ABP_VaderCharacter_Basic_C_BlueprintAnimationRateOptimization_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ToggleDropShadow
struct ABP_VaderCharacter_Basic_C_ToggleDropShadow_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SetAnimationReferences
struct ABP_VaderCharacter_Basic_C_SetAnimationReferences_Params
{
	struct FCharacterPerformanceLookAtStruct           Settings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.RequestSetSequencerBlendWeight
struct ABP_VaderCharacter_Basic_C_RequestSetSequencerBlendWeight_Params
{
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ReceiveBeginPlay
struct ABP_VaderCharacter_Basic_C_ReceiveBeginPlay_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SpawnPuzzleBox
struct ABP_VaderCharacter_Basic_C_SpawnPuzzleBox_Params
{
	bool                                               LeftHand;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Basic_Box;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GrabActor
struct ABP_VaderCharacter_Basic_C_GrabActor_Params
{
	class AActor*                                      GrabActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Reclaim Corvaxian Sphere
struct ABP_VaderCharacter_Basic_C_Reclaim_Corvaxian_Sphere_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.DestroyCorvaxBox
struct ABP_VaderCharacter_Basic_C_DestroyCorvaxBox_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ForceGrabPuzzleBox
struct ABP_VaderCharacter_Basic_C_ForceGrabPuzzleBox_Params
{
	class ACorvaxianBox_C*                             Box;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ReceiveTick
struct ABP_VaderCharacter_Basic_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ForceGrabSaber
struct ABP_VaderCharacter_Basic_C_ForceGrabSaber_Params
{
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Event TemporaryWindBlast
struct ABP_VaderCharacter_Basic_C_Event_TemporaryWindBlast_Params
{
	float                                              Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Disable LookAt
struct ABP_VaderCharacter_Basic_C_Disable_LookAt_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionDuration;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DistanceLimits;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              HeadLookAtStrength;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EyeLookAtStrength;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BodyLookAtStrength;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.BlueprintTick
struct ABP_VaderCharacter_Basic_C_BlueprintTick_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ExecuteUbergraph_BP_VaderCharacter_Basic
struct ABP_VaderCharacter_Basic_C_ExecuteUbergraph_BP_VaderCharacter_Basic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
