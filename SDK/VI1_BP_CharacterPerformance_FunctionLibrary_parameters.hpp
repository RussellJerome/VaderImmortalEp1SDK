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

// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.AutoOptimizeOverlapMeshSettingsBasedOnPlayerDistance
struct UBP_CharacterPerformance_FunctionLibrary_C_AutoOptimizeOverlapMeshSettingsBasedOnPlayerDistance_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PlayerCamera;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.DropShadowTrackPelvis
struct UBP_CharacterPerformance_FunctionLibrary_C_DropShadowTrackPelvis_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HeightOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USceneComponent*                             DropShadowComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DebugPreview;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DropShdwScale;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.OptimizeClothAndMinLodBasedOnRecentlyRendered
struct UBP_CharacterPerformance_FunctionLibrary_C_OptimizeClothAndMinLodBasedOnRecentlyRendered_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RenderFrameTolerance;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OnLoadMinLod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.GetPlayerTrackedObjects
struct UBP_CharacterPerformance_FunctionLibrary_C_GetPlayerTrackedObjects_Params
{
	class UObject*                                     WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PlayerCameraComponent;                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      PlayerSkeletalMeshComponent;                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_WKNDPlayerPawn_C*                        Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.SetCharacterPerformanceLookAtSettings
struct UBP_CharacterPerformance_FunctionLibrary_C_SetCharacterPerformanceLookAtSettings_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCharacterPerformanceLookAtStruct           Settings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.UpdateLookAtActivity
struct UBP_CharacterPerformance_FunctionLibrary_C_UpdateLookAtActivity_Params
{
	class UBP_LookAtController_C*                      LookAtController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Mesh_HeadSocketName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DistanceLimits;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  HeadAnimatedBaseTransform;                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  PelvisAnimatedBaseTransform;                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
