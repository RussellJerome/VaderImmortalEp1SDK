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

// BlueprintGeneratedClass BPVaderCuttingFX.BPVaderCuttingFX_C
// 0x00A0 (0x0738 - 0x0698)
class ABPVaderCuttingFX_C : public ALightsaberCuttingFX
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0698(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                Ak_SaberStabCut;                                          // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SparkBurstPFX;                                            // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SaberStabCut_VADER;                                       // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StabCutPitchDown_NewTrack_0_369561884F517EF4C8B338A95977E806;// 0x06C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StabCutPitchDown__Direction_369561884F517EF4C8B338A95977E806;// 0x06C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StabCutPitchDown;                                         // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UParticleSystem*>                     SmokeSystems;                                             // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SmokeSpawnCounter;                                        // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioSaberStrain;                                         // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<TEnumAsByte<EPhysicalSurface>, int>           AudioLookUp;                                              // 0x06E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPVaderCuttingFX.BPVaderCuttingFX_C");
		return ptr;
	}


	void SetLightVisibility(bool Visible);
	void Burst(const struct FVector& SpawnLoc);
	class UInstancedStaticMeshComponent* PickGlowMesh();
	void UpdateVFX();
	void UpdateCutAudio(class UAudioComponent** StabCutAudio);
	void StopCutAudio(float FadeOutTime, class UAudioComponent** StabCutAudio);
	void StartCutAudio(float PitchMultiplier, class UAudioComponent** StabCutAudio);
	void StopLight(class UPointLightComponent** Light);
	void UpdateSmoke(int SpawnFrequencyFrom, int SpawnFrequencyTo, int SpawnIndexMin, int SpawnIndexMax);
	void UpdateLight(float TimeScale, float FlickerMax, float FlickerMin, float TimeOffset, float TimeOffsetScale, class UPointLightComponent** Light);
	void UserConstructionScript();
	void StabCutPitchDown__FinishedFunc();
	void StabCutPitchDown__UpdateFunc();
	void PitchDown(class UAudioComponent* StabCutAudio);
	void ReceiveOnEndCut();
	void ReceiveOnUpdateCut();
	void ReceiveOnStartGlance();
	void ReceiveOnStartCut();
	void ExecuteUbergraph_BPVaderCuttingFX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif