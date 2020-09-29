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

// Function BP_LookAtController.BP_LookAtController_C.TrackLocations
struct UBP_LookAtController_C_TrackLocations_Params
{
};

// Function BP_LookAtController.BP_LookAtController_C.GetSocketTransform
struct UBP_LookAtController_C_GetSocketTransform_Params
{
	class USceneComponent*                             Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_LookAtController.BP_LookAtController_C.OptimizeTick
struct UBP_LookAtController_C_OptimizeTick_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LookAtController.BP_LookAtController_C.StoreLastHeadLocationFromHeadForward
struct UBP_LookAtController_C_StoreLastHeadLocationFromHeadForward_Params
{
};

// Function BP_LookAtController.BP_LookAtController_C.GetFocusedTargetLocation
struct UBP_LookAtController_C_GetFocusedTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_LookAtController.BP_LookAtController_C.GetTargetAltitude
struct UBP_LookAtController_C_GetTargetAltitude_Params
{
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LookAtController.BP_LookAtController_C.GetTargetAzimuth
struct UBP_LookAtController_C_GetTargetAzimuth_Params
{
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LookAtController.BP_LookAtController_C.DeactivateHeadLookAt
struct UBP_LookAtController_C_DeactivateHeadLookAt_Params
{
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LookAtController.BP_LookAtController_C.ActivateHeadLookAt
struct UBP_LookAtController_C_ActivateHeadLookAt_Params
{
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LookAtController.BP_LookAtController_C.RecordTargetPos
struct UBP_LookAtController_C_RecordTargetPos_Params
{
};

// Function BP_LookAtController.BP_LookAtController_C.GetTargetAngularSpeed
struct UBP_LookAtController_C_GetTargetAngularSpeed_Params
{
	struct FVector                                     OffsetHeadTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              AngularSpeed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LookAtController.BP_LookAtController_C.DrawDebugHeadInfo
struct UBP_LookAtController_C_DrawDebugHeadInfo_Params
{
};

// Function BP_LookAtController.BP_LookAtController_C.DrawDebugEyeRays
struct UBP_LookAtController_C_DrawDebugEyeRays_Params
{
};

// Function BP_LookAtController.BP_LookAtController_C.FadeInHeadLook
struct UBP_LookAtController_C_FadeInHeadLook_Params
{
};

// Function BP_LookAtController.BP_LookAtController_C.FadeOutHeadLook
struct UBP_LookAtController_C_FadeOutHeadLook_Params
{
};

// Function BP_LookAtController.BP_LookAtController_C.ToggleHeadLookAt
struct UBP_LookAtController_C_ToggleHeadLookAt_Params
{
};

// Function BP_LookAtController.BP_LookAtController_C.Initialize
struct UBP_LookAtController_C_Initialize_Params
{
	class USkeletalMeshComponent*                      Skeleton;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SceneTargetSkeletalMesh;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LookAtController.BP_LookAtController_C.UpdateHeadLookAt
struct UBP_LookAtController_C_UpdateHeadLookAt_Params
{
};

// Function BP_LookAtController.BP_LookAtController_C.GetHeadToTargetAngle
struct UBP_LookAtController_C_GetHeadToTargetAngle_Params
{
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LookAtController.BP_LookAtController_C.UpdateEyeDart
struct UBP_LookAtController_C_UpdateEyeDart_Params
{
};

// Function BP_LookAtController.BP_LookAtController_C.ReceiveTick
struct UBP_LookAtController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LookAtController.BP_LookAtController_C.ExecuteUbergraph_BP_LookAtController
struct UBP_LookAtController_C_ExecuteUbergraph_BP_LookAtController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
