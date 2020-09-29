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

// BlueprintGeneratedClass BP_Lightsaber_TrainingDroid.BP_Lightsaber_TrainingDroid_C
// 0x0040 (0x0B60 - 0x0B20)
class ABP_Lightsaber_TrainingDroid_C : public ABP_Lightsaber_Vader_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B20(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PFX_ResidualSmoke;                                        // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Stutter;                                                  // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ChargeVFX;                                                // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_ElectricStunRed;                                      // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Weapon_lo_lp;                                         // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_DroidWeapon_On;                                       // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_DroidWeapon_Off;                                      // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lightsaber_TrainingDroid.BP_Lightsaber_TrainingDroid_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void TrainingDroidUpdate(float* BladeProgress);
	void StartCharge();
	void EndCharge();
	void Recoil();
	void RecoilRecover();
	void TD_FXOff();
	void TD_FXOn();
	void RTPC_HumDistanceVolume();
	void AK_LoadBank();
	void ExecuteUbergraph_BP_Lightsaber_TrainingDroid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
