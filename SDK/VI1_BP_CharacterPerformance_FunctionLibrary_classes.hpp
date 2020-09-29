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

// BlueprintGeneratedClass BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_CharacterPerformance_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_AutoOptimizeOverlapMeshSettingsBasedOnPlayerDistance(class USkeletalMeshComponent* SkeletalMeshComponent, class USceneComponent* PlayerCamera, class UObject* __WorldContext);
	void STATIC_DropShadowTrackPelvis(class USkeletalMeshComponent* SkeletalMesh, const struct FVector& HeightOffset, class USceneComponent* DropShadowComponent, bool DebugPreview, const struct FVector& DropShdwScale, class UObject* __WorldContext);
	void STATIC_OptimizeClothAndMinLodBasedOnRecentlyRendered(class AActor* Target, float RenderFrameTolerance, bool bDebug, class USkeletalMeshComponent* SkeletalMeshComponent, int OnLoadMinLod, class UObject* __WorldContext);
	void STATIC_GetPlayerTrackedObjects(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Result, class USceneComponent** PlayerCameraComponent, class USkeletalMeshComponent** PlayerSkeletalMeshComponent, class ABP_WKNDPlayerPawn_C** Pawn);
	void STATIC_SetCharacterPerformanceLookAtSettings(class USkeletalMeshComponent* SkeletalMeshComponent, const struct FCharacterPerformanceLookAtStruct& Settings, class UObject* __WorldContext);
	void STATIC_UpdateLookAtActivity(class UBP_LookAtController_C* LookAtController, class USkeletalMeshComponent* SkeletalMeshComponent, const struct FName& Mesh_HeadSocketName, float FadeTime, const struct FVector2D& DistanceLimits, const struct FTransform& HeadAnimatedBaseTransform, const struct FTransform& PelvisAnimatedBaseTransform, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
