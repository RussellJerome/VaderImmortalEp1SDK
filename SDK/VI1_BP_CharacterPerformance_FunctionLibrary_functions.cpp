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

// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.AutoOptimizeOverlapMeshSettingsBasedOnPlayerDistance
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         PlayerCamera                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterPerformance_FunctionLibrary_C::STATIC_AutoOptimizeOverlapMeshSettingsBasedOnPlayerDistance(class USkeletalMeshComponent* SkeletalMeshComponent, class USceneComponent* PlayerCamera, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.AutoOptimizeOverlapMeshSettingsBasedOnPlayerDistance");

	UBP_CharacterPerformance_FunctionLibrary_C_AutoOptimizeOverlapMeshSettingsBasedOnPlayerDistance_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.PlayerCamera = PlayerCamera;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.DropShadowTrackPelvis
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 HeightOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USceneComponent*         DropShadowComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           DebugPreview                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DropShdwScale                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterPerformance_FunctionLibrary_C::STATIC_DropShadowTrackPelvis(class USkeletalMeshComponent* SkeletalMesh, const struct FVector& HeightOffset, class USceneComponent* DropShadowComponent, bool DebugPreview, const struct FVector& DropShdwScale, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.DropShadowTrackPelvis");

	UBP_CharacterPerformance_FunctionLibrary_C_DropShadowTrackPelvis_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.HeightOffset = HeightOffset;
	params.DropShadowComponent = DropShadowComponent;
	params.DebugPreview = DebugPreview;
	params.DropShdwScale = DropShdwScale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.OptimizeClothAndMinLodBasedOnRecentlyRendered
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RenderFrameTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDebug                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SkeletalMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OnLoadMinLod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterPerformance_FunctionLibrary_C::STATIC_OptimizeClothAndMinLodBasedOnRecentlyRendered(class AActor* Target, float RenderFrameTolerance, bool bDebug, class USkeletalMeshComponent* SkeletalMeshComponent, int OnLoadMinLod, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.OptimizeClothAndMinLodBasedOnRecentlyRendered");

	UBP_CharacterPerformance_FunctionLibrary_C_OptimizeClothAndMinLodBasedOnRecentlyRendered_Params params;
	params.Target = Target;
	params.RenderFrameTolerance = RenderFrameTolerance;
	params.bDebug = bDebug;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.OnLoadMinLod = OnLoadMinLod;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.GetPlayerTrackedObjects
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         PlayerCameraComponent          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  PlayerSkeletalMeshComponent    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABP_WKNDPlayerPawn_C*    Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterPerformance_FunctionLibrary_C::STATIC_GetPlayerTrackedObjects(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Result, class USceneComponent** PlayerCameraComponent, class USkeletalMeshComponent** PlayerSkeletalMeshComponent, class ABP_WKNDPlayerPawn_C** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.GetPlayerTrackedObjects");

	UBP_CharacterPerformance_FunctionLibrary_C_GetPlayerTrackedObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (PlayerCameraComponent != nullptr)
		*PlayerCameraComponent = params.PlayerCameraComponent;
	if (PlayerSkeletalMeshComponent != nullptr)
		*PlayerSkeletalMeshComponent = params.PlayerSkeletalMeshComponent;
	if (Pawn != nullptr)
		*Pawn = params.Pawn;
}


// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.SetCharacterPerformanceLookAtSettings
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCharacterPerformanceLookAtStruct Settings                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterPerformance_FunctionLibrary_C::STATIC_SetCharacterPerformanceLookAtSettings(class USkeletalMeshComponent* SkeletalMeshComponent, const struct FCharacterPerformanceLookAtStruct& Settings, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.SetCharacterPerformanceLookAtSettings");

	UBP_CharacterPerformance_FunctionLibrary_C_SetCharacterPerformanceLookAtSettings_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.Settings = Settings;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.UpdateLookAtActivity
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LookAtController_C*  LookAtController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  SkeletalMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Mesh_HeadSocketName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               DistanceLimits                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              HeadAnimatedBaseTransform      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              PelvisAnimatedBaseTransform    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterPerformance_FunctionLibrary_C::STATIC_UpdateLookAtActivity(class UBP_LookAtController_C* LookAtController, class USkeletalMeshComponent* SkeletalMeshComponent, const struct FName& Mesh_HeadSocketName, float FadeTime, const struct FVector2D& DistanceLimits, const struct FTransform& HeadAnimatedBaseTransform, const struct FTransform& PelvisAnimatedBaseTransform, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPerformance_FunctionLibrary.BP_CharacterPerformance_FunctionLibrary_C.UpdateLookAtActivity");

	UBP_CharacterPerformance_FunctionLibrary_C_UpdateLookAtActivity_Params params;
	params.LookAtController = LookAtController;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.Mesh_HeadSocketName = Mesh_HeadSocketName;
	params.FadeTime = FadeTime;
	params.DistanceLimits = DistanceLimits;
	params.HeadAnimatedBaseTransform = HeadAnimatedBaseTransform;
	params.PelvisAnimatedBaseTransform = PelvisAnimatedBaseTransform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
