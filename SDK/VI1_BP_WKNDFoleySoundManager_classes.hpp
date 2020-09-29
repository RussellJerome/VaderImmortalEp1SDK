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

// BlueprintGeneratedClass BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C
// 0x0021 (0x2129 - 0x2108)
class UBP_WKNDFoleySoundManager_C : public UWKNDFoleySoundManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2108(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     Location;                                                 // 0x2110(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debugging;                                                // 0x211C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x211D(0x0003) MISSED OFFSET
	class UAkAudioEvent*                               AudioEvent;                                               // 0x2120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RunningOnQuest;                                           // 0x2128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C");
		return ptr;
	}


	void SurfaceTypeToAudioParameter(TEnumAsByte<EPhysicalSurface> PhysicalSurface, struct FString* AudioParameter);
	void OnPlayerClimbing(float* DeltaTime, EWKNDHands* Handedness, float* Speed, float* SmoothedSpeed);
	void UpdatePlayerClimbing(float* DeltaTime, EWKNDHands* Handedness, float* Speed, float* SmoothedSpeed, struct FNTPlayingEvent* PlayingSound);
	void OnFootStep(bool* GroundHit, struct FVector* Location, class UAkAudioEvent** Footstep, TEnumAsByte<EPhysicalSurface>* SurfaceType, EMovementContext* MovementContext);
	void OnCollision(class AActor** Actor, class AActor** OtherActor, struct FVector* Location, float* RawImpactStrength, float* NormalizedImpactStrength, class UAkAudioEvent** ImpactSound, struct FHitResult* Hit, bool* IsMeshPart);
	void OnSliceableCollision(class AActor** Actor, class AActor** OtherActor, struct FVector* Location, float* RawImpactStrength, float* NormalizedImpactStrength, class UAkAudioEvent** ImpactSound, struct FHitResult* Hit, float* EstimatedVolume);
	void OnPauseStart();
	void OnPauseEnd();
	void OnReturnToMainMenu();
	void SetVolume(ESoundChannel* Channel, float* Volume);
	void MenuSound_OnButtonPress(bool* bPressed, struct FVector* ComponentLocation);
	void MenuSound_OnRadioButtonSelectionChange(struct FVector* ComponentLocation);
	void MenuSound_OnScrollContainerSelectionChange(struct FVector* ComponentLocation, bool* bIssuedFromConsole);
	void MenuSound_OnTabChange(struct FVector* ComponentLocation);
	void OnPlayerFootStep(class AWKNDPlayerPawn** Player, bool* GroundHit, struct FVector* Location, class UAkAudioEvent** Footstep, TEnumAsByte<EPhysicalSurface>* SurfaceType, EMovementContext* MovementContext);
	void MenuSound_OnBackButtonPress(struct FVector* ComponentLocation);
	void MenuSound_OnConsoleBackButtonPress(struct FVector* ComponentLocation);
	void MenuSound_OnConsoleButtonPress(bool* bPressed, struct FVector* ComponentLocation);
	void OnStopAll();
	void OnQuestHeadPhoneChange(bool* PluggedIn);
	void OnLevelStartFadeUp(float* FadeTime);
	void MenuSound_OnVolumeChange(struct FVector* ComponentLocation, bool* ValueIncreased, ESoundChannel* Channel);
	void ReceiveBeginPlay();
	void OnHandHit(class URPOCHandEnvironmentInteractionComponent** HandComponent, EPlayerHandImpact* ImpactType, struct FVector* Location, struct FVector* ImpactVel, float* NormalisedImpactSpeed, TEnumAsByte<EPhysicalSurface>* SurfaceType, class AActor** HeldObject, class UAkAudioEvent** AkEvent);
	void ExecuteUbergraph_BP_WKNDFoleySoundManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
