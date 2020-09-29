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

// BlueprintGeneratedClass BP_HoverController.BP_HoverController_C
// 0x00E0 (0x01D0 - 0x00F0)
class UBP_HoverController_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     HoverOffset;                                              // 0x00F8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MaxOffset;                                                // 0x0104(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MinOffset;                                                // 0x0110(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MinRetargetFreq;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRetargetFreq;                                          // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RetargetTimer;                                            // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RetargetTime;                                             // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // 0x012C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RetargetSpeed;                                            // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RetargetAccel;                                            // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrPosOffset;                                            // 0x0140(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NoiseOffset;                                              // 0x014C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NoiseFreq;                                                // 0x0158(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     NoiseAmplitude;                                           // 0x0164(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LastPosOffset;                                            // 0x0170(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrRetargetSpeed;                                        // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoiseMultiplier;                                          // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RetargetMultiplier;                                       // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseTargetLocation;                                        // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	struct FVector                                     TargetLocation;                                           // 0x018C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0198(0x0008) MISSED OFFSET
	struct FTransform                                  CurrAnimatedBodyTransform;                                // 0x01A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoverController.BP_HoverController_C");
		return ptr;
	}


	void LoadPreset(const struct FHoverSettings& HoverPreset);
	void UpdateHover();
	void ReceiveTick(float* DeltaSeconds);
	void Event_TeleportHover(const struct FVector& Location);
	void ExecuteUbergraph_BP_HoverController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
