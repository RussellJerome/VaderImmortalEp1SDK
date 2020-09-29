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

// BlueprintGeneratedClass BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C
// 0x008A (0x0BAA - 0x0B20)
class ABP_Lightsaber_CorvaxDroid_C : public ABP_Lightsaber_Vader_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B20(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_CorvaxSaberGlow;                                        // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SaberCorvaxIdle;                                        // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_ResidualSmoke;                                        // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Stutter;                                                  // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ChargeVFX;                                                // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_ElectricStunRed;                                      // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_0_Fade_594F2FE046646B900125A3BD35B8C86B;       // 0x0B58(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_594F2FE046646B900125A3BD35B8C86B; // 0x0B5C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B5D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_Intensity_E06C5F3740ECBF7F1ABF0A87D02A43A8;    // 0x0B68(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_E06C5F3740ECBF7F1ABF0A87D02A43A8;   // 0x0B6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       TypeSaber;                                                // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Saber_Dyna_Mat;                                           // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Smoke_Dyna_Mat;                                           // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_DroidWeapon_lo_lp;                                    // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FNTPlayingEvent                             SFX_Weapon_lo_lp_PlayingEvent;                            // 0x0B98(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShouldTick;                                               // 0x0BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartTickEnabled;                                         // 0x0BA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C");
		return ptr;
	}


	void ShouldAimAtPlayer_(bool* Result);
	void AimAtActor_(class AActor** Actor);
	void GetAnimInstance(class UAnimInstance** AnimInstance);
	void GetNpcChestLocation(struct FVector* Location);
	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void TrainingDroidUpdate(float* BladeProgress);
	void StartCharge();
	void EndCharge();
	void Recoil();
	void ReceiveBeginPlay();
	void RecoilRecover();
	void TD_FXOff();
	void TD_FXOn();
	void RTPC_HumDistanceVolume();
	void AK_LoadBank();
	void FadeInSaber();
	void FadeOutSaber();
	void IntensityGlowUp();
	void IntensityGlowDown();
	void InitialSparkBurst();
	void BlueprintTick(bool* Enable);
	void ExecuteUbergraph_BP_Lightsaber_CorvaxDroid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
