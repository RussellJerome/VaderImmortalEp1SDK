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

// BlueprintGeneratedClass BP_WKNDGameMode.BP_WKNDGameMode_C
// 0x01E8 (0x0620 - 0x0438)
class ABP_WKNDGameMode_C : public AWKNDGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcessBlackout;                                      // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessVignetteFade;                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_WKNDFoleySoundManager_C*                 BP_WKNDFoleySoundManager;                                 // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessDamageTDDV;                                    // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessDAMAGETD;                                      // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessZAP;                                           // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessDAMAGE;                                        // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessWHOOSH;                                        // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessCHOKE;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessCLASH;                                         // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_NewTrack_0_17758FB64E57FD390FD21DA7A3931708;   // 0x0490(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_17758FB64E57FD390FD21DA7A3931708;   // 0x0494(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              blackouttime_NewTrack_0_C5CCA1A94CB7370BD4CDC2B93DE77C98; // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    blackouttime__Direction_C5CCA1A94CB7370BD4CDC2B93DE77C98; // 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          blackouttime;                                             // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeToBlack_NewTrack_0_43E3785D41E38834A651688761831BF0;  // 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeToBlack__Direction_43E3785D41E38834A651688761831BF0;  // 0x04B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeToBlack;                                              // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_DoubleVision_3638592D4EC04D11A8FC41BF4FDAF025; // 0x04C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_bw_3638592D4EC04D11A8FC41BF4FDAF025;           // 0x04C4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_3638592D4EC04D11A8FC41BF4FDAF025;   // 0x04C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_bw_458DE4C34DA42B943531E8A498BEA623;           // 0x04D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_458DE4C34DA42B943531E8A498BEA623;   // 0x04DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ZapTL_Fade_D1B7542147D47378AD68EC90C3B88C51;              // 0x04E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ZapTL_VignetteIntense_D1B7542147D47378AD68EC90C3B88C51;   // 0x04EC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ZapTL_BlendWeight_D1B7542147D47378AD68EC90C3B88C51;       // 0x04F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ZapTL__Direction_D1B7542147D47378AD68EC90C3B88C51;        // 0x04F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ZapTL;                                                    // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_5_PP_4F330F7C4A6171893F8D3888C3FF56A6;           // 0x0500(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_5_BW_4F330F7C4A6171893F8D3888C3FF56A6;           // 0x0504(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_5__Direction_4F330F7C4A6171893F8D3888C3FF56A6;   // 0x0508(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_6;                                               // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_4_NewTrack_1_5014C83542966BA72ED2DAAEED0B8F5D;   // 0x0518(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_4_NewTrack_0_5014C83542966BA72ED2DAAEED0B8F5D;   // 0x051C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_4__Direction_5014C83542966BA72ED2DAAEED0B8F5D;   // 0x0520(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0521(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_5;                                               // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_3_NewTrack_0_B865FE5B4F3C64AFB8C05593AEFE2E74;   // 0x0530(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_B865FE5B4F3C64AFB8C05593AEFE2E74;   // 0x0534(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0535(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PostClashScale;                                           // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               startGate;                                                // 0x0544(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0545(0x0003) MISSED OFFSET
	class APlanarReflection*                           CurrentPlanarReflectionActor;                             // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSpeakingCharacterSetup>             SpeakingCharacterTable;                                   // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bTutorialEnabled;                                         // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	class UPlayerScreenBlackOutComponent*              BlackoutComponent_1;                                      // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              comfortScalar;                                            // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDojoCompleted;                                           // 0x0574(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	int                                                HitCount;                                                 // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	class ABP_WKNDPlayerPawn_C*                        OriginalPawn;                                             // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABP_WKNDPausePlayerPawn_C*                   ContainerPawn;                                            // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class ALevelStreamingVolume*>               LSVs;                                                     // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class ABP_PauseWidgetMenu_C*                       PauseMenu;                                                // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FDialogueLine                               DialogueLineAsset;                                        // 0x05A8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FExplosionStruct                            ExplosionStructAsset;                                     // 0x05F0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCinematics_PauseSequenceStruct             CinematicsPauseSequenceStructAsset;                       // 0x05F4(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_WidgetConsoleMenu_C*                     ConsoleMenu;                                              // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWKNDHealthComponent*                        PlayerHealth;                                             // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               AccelerationHidden;                                       // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	class ASpotLight*                                  PauseSpotLightKey;                                        // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASpotLight*                                  PauseSpotLightFill;                                       // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WKNDGameMode.BP_WKNDGameMode_C");
		return ptr;
	}


	void ToggleLSVs(bool Streaming);
	void SelectBlackoutArrow(float BlackoutAngle, class UTexture** ArrowTexture);
	struct FVector CalcBlackholePosition();
	void UserConstructionScript();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void ZapTL__FinishedFunc();
	void ZapTL__UpdateFunc();
	void ZapTL__StartShake__EventFunc();
	void ZapTL__StartFade__EventFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void FadeToBlack__FinishedFunc();
	void FadeToBlack__UpdateFunc();
	void blackouttime__FinishedFunc();
	void blackouttime__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void StartClash();
	void EndClash();
	void PlayerHit();
	void ForceChoke_PPEnable();
	void ForceChoke_PPDisable();
	void ForcePushed();
	void ZapOut();
	void PlayerHitTD(int hitNum);
	void InitDialogueManagerWithSpeakingActors(class AWKNDDialogueManager** DM);
	void StartBlackout(class UPlayerScreenBlackOutComponent* BlackoutCompoent);
	void StopBlackout();
	void BlackoutAutoFadeOut(class UPlayerScreenBlackOutComponent* BlackoutComponent);
	void BlackoutAutoFadeIn(class UPlayerScreenBlackOutComponent* BlackoutComponent);
	void TogglePause();
	void DestroyPauseMenu();
	void EnableConsoleMenu(bool* Enable);
	void RemovePostProcessingDamage();
	void StopTimeline4();
	void StopTimeline0();
	void StopTimeline1();
	void ReceiveBeginPlay();
	void OnPlayerTakeDamage(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo);
	void TogglePauseLights(bool hidden);
	void ExecuteUbergraph_BP_WKNDGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
