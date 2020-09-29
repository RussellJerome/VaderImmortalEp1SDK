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

// BlueprintGeneratedClass BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C
// 0x0070 (0x0840 - 0x07D0)
class UBP_HolodroneMinitronComponent_C : public UWidgetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (Transient, DuplicateTransient)
	class UBPW_HolodroneMinitron_C*                    BPW_Minitron;                                             // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FRewardData>                         RewardsToDisplay;                                         // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                TimeBetweenRewardsHandle;                                 // 0x07F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWKNDHealthComponent*                        PlayerHealthComponent;                                    // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_ExDojoWaveManager_C*                     ExtDojoWaveManager;                                       // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAllRewardsDisplayed;                                    // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                NumHealthLevels;                                          // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldShowGoldMedalRequirement;                          // 0x081C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x081D(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        SM_BackgroundMesh;                                        // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    M_Background;                                             // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    M_Trim;                                                   // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    M_Pills;                                                  // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C");
		return ptr;
	}


	void ChangeColors(TEnumAsByte<EnemyWaveType> NewMode);
	bool CanShowFinalMessage();
	float GetFinalMessageAnimDuration();
	int GetHealthLevelRequiredForGold();
	int GetKillsRequiredForGold();
	float GetTimeRequiredForGold();
	float GetUnleashedAnimDuration();
	float GetRatingsAnimDuration();
	float Close_UI_Anim_Duration();
	float GetRoundAnimDuration();
	float GetScoresAnimDuration();
	void HideRewards();
	void ShowNewReward();
	void ShowRatings();
	void HideRatings();
	void ShowRewards();
	void ShowBestAndLatestScore();
	void ShowFinalMessage();
	void ReceiveBeginPlay();
	void InitMinitron(class USceneComponent* LeftMedalLocator, class USceneComponent* CenterMedalLocator, class USceneComponent* RightMedalLocator, class USceneComponent* RewardLocator, class UStaticMeshComponent* BackgroundMesh);
	void HideMinitron();
	void ShowMinitron();
	void ShowRoundNumber(int CurrentRoundNumber, TEnumAsByte<EnemyWaveType> WaveType);
	void Show_Unleashed();
	void ExecuteUbergraph_BP_HolodroneMinitronComponent(int EntryPoint);
	void OnAllRewardsDisplayed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
