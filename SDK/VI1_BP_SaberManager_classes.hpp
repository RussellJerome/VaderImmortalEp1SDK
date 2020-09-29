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

// BlueprintGeneratedClass BP_SaberManager.BP_SaberManager_C
// 0x00D0 (0x0520 - 0x0450)
class ABP_SaberManager_C : public ARPOCSaberManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                Stop_sfx_saber_pc_clash_lp;                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                sfx_saber_pc_clash_rls;                                   // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                sfx_saber_pc_clash_lp;                                    // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                sfx_saber_pc_clash_attk;                                  // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight_Clash;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem_Clash;                                     // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Clash_Duration_Timeline_Clash_Duration_4B3A258349BF593D6A9E2EB33467F41B;// 0x0490(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Clash_Duration_Timeline__Direction_4B3A258349BF593D6A9E2EB33467F41B;// 0x0494(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Clash_Duration_Timeline;                                  // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     posDiff;                                                  // 0x04A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              diffLength;                                               // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_Lightsaber_C*                            refSaber;                                                 // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ClashLastLoc;                                             // 0x04B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	class UNTHapticManagerComponent*                   HapticManager;                                            // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Playhaptics;                                              // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECrystalColour>                        ColA;                                                     // 0x04D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECrystalColour>                        ColB;                                                     // 0x04D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x04D3(0x0001) MISSED OFFSET
	struct FLinearColor                                FlashColour;                                              // 0x04D4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class ARPOCPickup_Lightsaber*                      PlayerSaber;                                              // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ClashStart;                                               // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FVector>                             ClashHistory;                                             // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TotalFrames;                                              // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FrameCurrent;                                             // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_CorvaxDroid_C*                           NewVar_1;                                                 // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SaberManager.BP_SaberManager_C");
		return ptr;
	}


	void InitClashHistory();
	void ReportClashInfo(bool bReportingActive, bool bClashStarting, class ARPOCPickup_Lightsaber* Lightsaber1, class ARPOCPickup_Lightsaber* Lightsaber2);
	void UpdateFX(const struct FSaberClashData& ClashData);
	void UserConstructionScript();
	void Clash_Duration_Timeline__FinishedFunc();
	void Clash_Duration_Timeline__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnSaberContactStart(int* clashMask, class ARPOCPickup_Lightsaber** Saber1, class ARPOCPickup_Lightsaber** Saber2);
	void OnSaberContactStop(int* clashMask, class ARPOCPickup_Lightsaber** Saber1, class ARPOCPickup_Lightsaber** Saber2);
	void OnSaberSweepHit(class ARPOCPickup_Lightsaber** Saber1, class ARPOCPickup_Lightsaber** Saber2, float* RewindTime, struct FSaberClashData* Clash);
	void ExecuteUbergraph_BP_SaberManager(int EntryPoint);
	void ClashStart__DelegateSignature(class ARPOCPickup_Lightsaber* Saber1, class ARPOCPickup_Lightsaber* Saber2, float RewindTime, const struct FSaberClashData& Clash);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
