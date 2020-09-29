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

// WidgetBlueprintGeneratedClass BPW_HolodroneWidget.BPW_HolodroneWidget_C
// 0x00F0 (0x02F8 - 0x0208)
class UBPW_HolodroneWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	TArray<class UImage*>                              PrimaryColorImages;                                       // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UImage*>                              SecondaryColorImages;                                     // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UImage*>                              TertiaryColorImages;                                      // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EnemyWaveType>                         CurrentColorMode;                                         // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<EnemyWaveType>, struct FHolodroneUIColors> ColorsPerRoundType;                                       // 0x0248(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FHolodroneUIColors                          CurrentColors;                                            // 0x0298(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                                  T_HealthFull;                                             // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  T_HealthOutline;                                          // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_HolodroneWidget.BPW_HolodroneWidget_C");
		return ptr;
	}


	void GetColorsByRoundType(TEnumAsByte<EnemyWaveType> RoundType, struct FHolodroneUIColors* Value);
	void ChangeImageTint(class UImage* Image, const struct FLinearColor& TintColor);
	void HandleChangeColorMode(TEnumAsByte<EnemyWaveType> NewColorMode);
	void HandleChangeBackgroundColor(const struct FLinearColor& NewColor);
	void HandleChangeFontColor(const struct FLinearColor& NewColor);
	void InitDynamicColors();
	void ChangeColorMode(TEnumAsByte<EnemyWaveType> NewMode, bool IgnoreCurrentMode);
	void ChangeTints(const struct FLinearColor& TintColor, TArray<class UImage*>* Images);
	void UpdateHealthIcons(int Health, class UTexture2D* HealthIcon, class UTexture2D* MissingHealthIcon, TArray<class UImage*>* HealthIcons);
	void GetFormattedTime(float Seconds, struct FText* Result);
	void Post_SFX_At_Locator(class USceneComponent* Locator, class UAkAudioEvent* AkEvent);
	void UpdateRoundDisplay(int RoundNumber);
	void Construct();
	void ExecuteUbergraph_BPW_HolodroneWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
