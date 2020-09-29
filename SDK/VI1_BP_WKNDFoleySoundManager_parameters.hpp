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

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.SurfaceTypeToAudioParameter
struct UBP_WKNDFoleySoundManager_C_SurfaceTypeToAudioParameter_Params
{
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurface;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AudioParameter;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPlayerClimbing
struct UBP_WKNDFoleySoundManager_C_OnPlayerClimbing_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWKNDHands*                                        Handedness;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SmoothedSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.UpdatePlayerClimbing
struct UBP_WKNDFoleySoundManager_C_UpdatePlayerClimbing_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWKNDHands*                                        Handedness;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SmoothedSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FNTPlayingEvent*                            PlayingSound;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnFootStep
struct UBP_WKNDFoleySoundManager_C_OnFootStep_Params
{
	bool*                                              GroundHit;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UAkAudioEvent**                              Footstep;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>*                     SurfaceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMovementContext*                                  MovementContext;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnCollision
struct UBP_WKNDFoleySoundManager_C_OnCollision_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             RawImpactStrength;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NormalizedImpactStrength;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              ImpactSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              IsMeshPart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnSliceableCollision
struct UBP_WKNDFoleySoundManager_C_OnSliceableCollision_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             RawImpactStrength;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NormalizedImpactStrength;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              ImpactSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             EstimatedVolume;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPauseStart
struct UBP_WKNDFoleySoundManager_C_OnPauseStart_Params
{
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPauseEnd
struct UBP_WKNDFoleySoundManager_C_OnPauseEnd_Params
{
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnReturnToMainMenu
struct UBP_WKNDFoleySoundManager_C_OnReturnToMainMenu_Params
{
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.SetVolume
struct UBP_WKNDFoleySoundManager_C_SetVolume_Params
{
	ESoundChannel*                                     Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnButtonPress
struct UBP_WKNDFoleySoundManager_C_MenuSound_OnButtonPress_Params
{
	bool*                                              bPressed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ComponentLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnRadioButtonSelectionChange
struct UBP_WKNDFoleySoundManager_C_MenuSound_OnRadioButtonSelectionChange_Params
{
	struct FVector*                                    ComponentLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnScrollContainerSelectionChange
struct UBP_WKNDFoleySoundManager_C_MenuSound_OnScrollContainerSelectionChange_Params
{
	struct FVector*                                    ComponentLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              bIssuedFromConsole;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnTabChange
struct UBP_WKNDFoleySoundManager_C_MenuSound_OnTabChange_Params
{
	struct FVector*                                    ComponentLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPlayerFootStep
struct UBP_WKNDFoleySoundManager_C_OnPlayerFootStep_Params
{
	class AWKNDPlayerPawn**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              GroundHit;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UAkAudioEvent**                              Footstep;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>*                     SurfaceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMovementContext*                                  MovementContext;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnBackButtonPress
struct UBP_WKNDFoleySoundManager_C_MenuSound_OnBackButtonPress_Params
{
	struct FVector*                                    ComponentLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnConsoleBackButtonPress
struct UBP_WKNDFoleySoundManager_C_MenuSound_OnConsoleBackButtonPress_Params
{
	struct FVector*                                    ComponentLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnConsoleButtonPress
struct UBP_WKNDFoleySoundManager_C_MenuSound_OnConsoleButtonPress_Params
{
	bool*                                              bPressed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ComponentLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnStopAll
struct UBP_WKNDFoleySoundManager_C_OnStopAll_Params
{
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnQuestHeadPhoneChange
struct UBP_WKNDFoleySoundManager_C_OnQuestHeadPhoneChange_Params
{
	bool*                                              PluggedIn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnLevelStartFadeUp
struct UBP_WKNDFoleySoundManager_C_OnLevelStartFadeUp_Params
{
	float*                                             FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnVolumeChange
struct UBP_WKNDFoleySoundManager_C_MenuSound_OnVolumeChange_Params
{
	struct FVector*                                    ComponentLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              ValueIncreased;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESoundChannel*                                     Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.ReceiveBeginPlay
struct UBP_WKNDFoleySoundManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnHandHit
struct UBP_WKNDFoleySoundManager_C_OnHandHit_Params
{
	class URPOCHandEnvironmentInteractionComponent**   HandComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPlayerHandImpact*                                 ImpactType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    ImpactVel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             NormalisedImpactSpeed;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>*                     SurfaceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HeldObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              AkEvent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.ExecuteUbergraph_BP_WKNDFoleySoundManager
struct UBP_WKNDFoleySoundManager_C_ExecuteUbergraph_BP_WKNDFoleySoundManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
