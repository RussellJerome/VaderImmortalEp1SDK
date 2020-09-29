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

// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.SurfaceTypeToAudioParameter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  PhysicalSurface                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AudioParameter                 (Parm, OutParm, ZeroConstructor)

void UBP_WKNDFoleySoundManager_C::SurfaceTypeToAudioParameter(TEnumAsByte<EPhysicalSurface> PhysicalSurface, struct FString* AudioParameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.SurfaceTypeToAudioParameter");

	UBP_WKNDFoleySoundManager_C_SurfaceTypeToAudioParameter_Params params;
	params.PhysicalSurface = PhysicalSurface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AudioParameter != nullptr)
		*AudioParameter = params.AudioParameter;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPlayerClimbing
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWKNDHands*                    Handedness                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         SmoothedSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::OnPlayerClimbing(float* DeltaTime, EWKNDHands* Handedness, float* Speed, float* SmoothedSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPlayerClimbing");

	UBP_WKNDFoleySoundManager_C_OnPlayerClimbing_Params params;
	params.DeltaTime = DeltaTime;
	params.Handedness = Handedness;
	params.Speed = Speed;
	params.SmoothedSpeed = SmoothedSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.UpdatePlayerClimbing
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWKNDHands*                    Handedness                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         SmoothedSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FNTPlayingEvent*        PlayingSound                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_WKNDFoleySoundManager_C::UpdatePlayerClimbing(float* DeltaTime, EWKNDHands* Handedness, float* Speed, float* SmoothedSpeed, struct FNTPlayingEvent* PlayingSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.UpdatePlayerClimbing");

	UBP_WKNDFoleySoundManager_C_UpdatePlayerClimbing_Params params;
	params.DeltaTime = DeltaTime;
	params.Handedness = Handedness;
	params.Speed = Speed;
	params.SmoothedSpeed = SmoothedSpeed;
	params.PlayingSound = PlayingSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnFootStep
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          GroundHit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UAkAudioEvent**          Footstep                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>* SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMovementContext*              MovementContext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::OnFootStep(bool* GroundHit, struct FVector* Location, class UAkAudioEvent** Footstep, TEnumAsByte<EPhysicalSurface>* SurfaceType, EMovementContext* MovementContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnFootStep");

	UBP_WKNDFoleySoundManager_C_OnFootStep_Params params;
	params.GroundHit = GroundHit;
	params.Location = Location;
	params.Footstep = Footstep;
	params.SurfaceType = SurfaceType;
	params.MovementContext = MovementContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnCollision
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         RawImpactStrength              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NormalizedImpactStrength       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          ImpactSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          IsMeshPart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::OnCollision(class AActor** Actor, class AActor** OtherActor, struct FVector* Location, float* RawImpactStrength, float* NormalizedImpactStrength, class UAkAudioEvent** ImpactSound, struct FHitResult* Hit, bool* IsMeshPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnCollision");

	UBP_WKNDFoleySoundManager_C_OnCollision_Params params;
	params.Actor = Actor;
	params.OtherActor = OtherActor;
	params.Location = Location;
	params.RawImpactStrength = RawImpactStrength;
	params.NormalizedImpactStrength = NormalizedImpactStrength;
	params.ImpactSound = ImpactSound;
	params.Hit = Hit;
	params.IsMeshPart = IsMeshPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnSliceableCollision
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         RawImpactStrength              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NormalizedImpactStrength       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          ImpactSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         EstimatedVolume                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::OnSliceableCollision(class AActor** Actor, class AActor** OtherActor, struct FVector* Location, float* RawImpactStrength, float* NormalizedImpactStrength, class UAkAudioEvent** ImpactSound, struct FHitResult* Hit, float* EstimatedVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnSliceableCollision");

	UBP_WKNDFoleySoundManager_C_OnSliceableCollision_Params params;
	params.Actor = Actor;
	params.OtherActor = OtherActor;
	params.Location = Location;
	params.RawImpactStrength = RawImpactStrength;
	params.NormalizedImpactStrength = NormalizedImpactStrength;
	params.ImpactSound = ImpactSound;
	params.Hit = Hit;
	params.EstimatedVolume = EstimatedVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPauseStart
// (Event, Public, BlueprintEvent)

void UBP_WKNDFoleySoundManager_C::OnPauseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPauseStart");

	UBP_WKNDFoleySoundManager_C_OnPauseStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPauseEnd
// (Event, Public, BlueprintEvent)

void UBP_WKNDFoleySoundManager_C::OnPauseEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPauseEnd");

	UBP_WKNDFoleySoundManager_C_OnPauseEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnReturnToMainMenu
// (Event, Public, BlueprintEvent)

void UBP_WKNDFoleySoundManager_C::OnReturnToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnReturnToMainMenu");

	UBP_WKNDFoleySoundManager_C_OnReturnToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.SetVolume
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESoundChannel*                 Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::SetVolume(ESoundChannel* Channel, float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.SetVolume");

	UBP_WKNDFoleySoundManager_C_SetVolume_Params params;
	params.Channel = Channel;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnButtonPress
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bPressed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ComponentLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::MenuSound_OnButtonPress(bool* bPressed, struct FVector* ComponentLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnButtonPress");

	UBP_WKNDFoleySoundManager_C_MenuSound_OnButtonPress_Params params;
	params.bPressed = bPressed;
	params.ComponentLocation = ComponentLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnRadioButtonSelectionChange
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                ComponentLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::MenuSound_OnRadioButtonSelectionChange(struct FVector* ComponentLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnRadioButtonSelectionChange");

	UBP_WKNDFoleySoundManager_C_MenuSound_OnRadioButtonSelectionChange_Params params;
	params.ComponentLocation = ComponentLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnScrollContainerSelectionChange
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                ComponentLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          bIssuedFromConsole             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::MenuSound_OnScrollContainerSelectionChange(struct FVector* ComponentLocation, bool* bIssuedFromConsole)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnScrollContainerSelectionChange");

	UBP_WKNDFoleySoundManager_C_MenuSound_OnScrollContainerSelectionChange_Params params;
	params.ComponentLocation = ComponentLocation;
	params.bIssuedFromConsole = bIssuedFromConsole;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnTabChange
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                ComponentLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::MenuSound_OnTabChange(struct FVector* ComponentLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnTabChange");

	UBP_WKNDFoleySoundManager_C_MenuSound_OnTabChange_Params params;
	params.ComponentLocation = ComponentLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPlayerFootStep
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AWKNDPlayerPawn**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          GroundHit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UAkAudioEvent**          Footstep                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>* SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMovementContext*              MovementContext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::OnPlayerFootStep(class AWKNDPlayerPawn** Player, bool* GroundHit, struct FVector* Location, class UAkAudioEvent** Footstep, TEnumAsByte<EPhysicalSurface>* SurfaceType, EMovementContext* MovementContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnPlayerFootStep");

	UBP_WKNDFoleySoundManager_C_OnPlayerFootStep_Params params;
	params.Player = Player;
	params.GroundHit = GroundHit;
	params.Location = Location;
	params.Footstep = Footstep;
	params.SurfaceType = SurfaceType;
	params.MovementContext = MovementContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnBackButtonPress
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector*                ComponentLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::MenuSound_OnBackButtonPress(struct FVector* ComponentLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnBackButtonPress");

	UBP_WKNDFoleySoundManager_C_MenuSound_OnBackButtonPress_Params params;
	params.ComponentLocation = ComponentLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnConsoleBackButtonPress
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector*                ComponentLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::MenuSound_OnConsoleBackButtonPress(struct FVector* ComponentLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnConsoleBackButtonPress");

	UBP_WKNDFoleySoundManager_C_MenuSound_OnConsoleBackButtonPress_Params params;
	params.ComponentLocation = ComponentLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnConsoleButtonPress
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bPressed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ComponentLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::MenuSound_OnConsoleButtonPress(bool* bPressed, struct FVector* ComponentLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnConsoleButtonPress");

	UBP_WKNDFoleySoundManager_C_MenuSound_OnConsoleButtonPress_Params params;
	params.bPressed = bPressed;
	params.ComponentLocation = ComponentLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnStopAll
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_WKNDFoleySoundManager_C::OnStopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnStopAll");

	UBP_WKNDFoleySoundManager_C_OnStopAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnQuestHeadPhoneChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          PluggedIn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::OnQuestHeadPhoneChange(bool* PluggedIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnQuestHeadPhoneChange");

	UBP_WKNDFoleySoundManager_C_OnQuestHeadPhoneChange_Params params;
	params.PluggedIn = PluggedIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnLevelStartFadeUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::OnLevelStartFadeUp(float* FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnLevelStartFadeUp");

	UBP_WKNDFoleySoundManager_C_OnLevelStartFadeUp_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnVolumeChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ComponentLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          ValueIncreased                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESoundChannel*                 Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::MenuSound_OnVolumeChange(struct FVector* ComponentLocation, bool* ValueIncreased, ESoundChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.MenuSound_OnVolumeChange");

	UBP_WKNDFoleySoundManager_C_MenuSound_OnVolumeChange_Params params;
	params.ComponentLocation = ComponentLocation;
	params.ValueIncreased = ValueIncreased;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_WKNDFoleySoundManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.ReceiveBeginPlay");

	UBP_WKNDFoleySoundManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnHandHit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URPOCHandEnvironmentInteractionComponent** HandComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EPlayerHandImpact*             ImpactType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                ImpactVel                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         NormalisedImpactSpeed          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>* SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HeldObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          AkEvent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::OnHandHit(class URPOCHandEnvironmentInteractionComponent** HandComponent, EPlayerHandImpact* ImpactType, struct FVector* Location, struct FVector* ImpactVel, float* NormalisedImpactSpeed, TEnumAsByte<EPhysicalSurface>* SurfaceType, class AActor** HeldObject, class UAkAudioEvent** AkEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.OnHandHit");

	UBP_WKNDFoleySoundManager_C_OnHandHit_Params params;
	params.HandComponent = HandComponent;
	params.ImpactType = ImpactType;
	params.Location = Location;
	params.ImpactVel = ImpactVel;
	params.NormalisedImpactSpeed = NormalisedImpactSpeed;
	params.SurfaceType = SurfaceType;
	params.HeldObject = HeldObject;
	params.AkEvent = AkEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.ExecuteUbergraph_BP_WKNDFoleySoundManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WKNDFoleySoundManager_C::ExecuteUbergraph_BP_WKNDFoleySoundManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDFoleySoundManager.BP_WKNDFoleySoundManager_C.ExecuteUbergraph_BP_WKNDFoleySoundManager");

	UBP_WKNDFoleySoundManager_C_ExecuteUbergraph_BP_WKNDFoleySoundManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
