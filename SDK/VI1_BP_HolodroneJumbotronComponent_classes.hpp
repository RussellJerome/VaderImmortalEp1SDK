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

// BlueprintGeneratedClass BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C
// 0x0070 (0x0840 - 0x07D0)
class UBP_HolodroneJumbotronComponent_C : public UWidgetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (Transient, DuplicateTransient)
	class UBPW_HolodroneJumbotron_C*                   BPW_Jumbotron;                                            // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWKNDHealthComponent*                        PlayerHealthComponent;                                    // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	ERating                                            CurrentLiveRating;                                        // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07E9(0x0003) MISSED OFFSET
	float                                              RemainingTime;                                            // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanUpdateTimer;                                           // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07F1(0x0007) MISSED OFFSET
	class ABP_ExDojoWaveManager_C*                     ExtendedDojoWaveManager;                                  // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                FinalCountdown_Seconds_;                                  // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RemainingSeconds;                                         // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FinalCountdownCounter;                                    // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumHealthLevels;                                          // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LowHealthLevel;                                           // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDemo;                                                   // 0x0814(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0815(0x0003) MISSED OFFSET
	int                                                PreviousCustomHealthLevel;                                // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayerHealthCritical;                                   // 0x081C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x081D(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        SM_BackgroundMesh;                                        // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    M_Background;                                             // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    M_Trim;                                                   // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    M_Pills;                                                  // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C");
		return ptr;
	}


	void ChangeColors(TEnumAsByte<EnemyWaveType> NewMode);
	bool DoesRoundTypeDisplayTimer();
	float GetOpenJumbotronAnimDuration();
	void UpdateKillCount(int NewKillCount);
	void TickFinalCountdown();
	void ResetRemainingTime();
	void AttemptFinalCountdown();
	void ResetLiveRating(ERating* InitialRating);
	void ComputeNewTimeLimit(ERating NewRating);
	void UpdateTimeOnJumbotron(float TimeSeconds);
	void UpdateLiveRatingAndTimeLimit(ERating NewRating);
	void SetRemainingTime(float DeltaSeconds);
	void OnTelemetryEvent(const struct FTelemetryEvent& TelemetryEvent);
	void OnLiveRatingChangedEvent(const struct FName& WaveName, ERating Rating);
	void Enable_Low_Health_Warning();
	void Disable_Low_Health_Warning();
	void Reset_Low_Health_Warning();
	void OnTakeDamage(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo);
	void OnBeginFinalCountdown();
	void OnEndFinalCountdown();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Show_HUD();
	void Hide_HUD();
	void InitJumbotron(class USceneComponent* HealthBarLocator, class USceneComponent* TimerLocator, class USceneComponent* LiveRatingLocator, class UStaticMeshComponent* BackgroundMesh);
	void UpdateRound(int Round);
	void ExecuteUbergraph_BP_HolodroneJumbotronComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
