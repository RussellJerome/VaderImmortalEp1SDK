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

// BlueprintGeneratedClass BP_Lightsaber_Vader.BP_Lightsaber_Vader_C
// 0x004B (0x0B20 - 0x0AD5)
class ABP_Lightsaber_Vader_C : public ABP_Lightsaber_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AD5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             ClashCurrent;                                             // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0AE8(0x0008) MISSED OFFSET
	struct FTransform                                  LastFrameBladeLocation;                                   // 0x0AF0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lightsaber_Vader.BP_Lightsaber_Vader_C");
		return ptr;
	}


	void ShouldAimAtPlayer_(bool* Result);
	void AimAtActor_(class AActor** Actor);
	void GetAnimInstance(class UAnimInstance** AnimInstance);
	void GetNpcChestLocation(struct FVector* Location);
	void GetEnemyType(EEnemyType* EnemyType);
	void UserConstructionScript();
	void Decals___SpawnHit();
	void Decals___SpawnStab();
	void Decals___SpawnSlash();
	void BlueprintTick(bool Enable);
	void Hide_Blaster(bool Show);
	void BlueprintAnimationRateOptimization(bool Enable);
	void ToggleDropShadow(bool Enable);
	void ReceiveBeginPlay();
	void Decals___Delete();
	void FireBlaster();
	void RTPC_HumDistanceVolume();
	void SetBlueprintCollisions(bool Enabled);
	void SetBlueprintLiteCollisions(bool Enabled);
	void ExecuteUbergraph_BP_Lightsaber_Vader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
