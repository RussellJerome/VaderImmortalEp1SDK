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

// BlueprintGeneratedClass BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C
// 0x0038 (0x0758 - 0x0720)
class ABP_ITOCharacter_Basic_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (Transient, DuplicateTransient)
	class UBP_HoverController_C*                       BP_HoverController;                                       // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_center;                                                // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematicBlendingComponent*                 CinematicBlending;                                        // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DistanceToHoverLocation;                                  // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTimeX;                                               // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_WKNDPlayerPawn_C*                        PlayerPawn;                                               // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C");
		return ptr;
	}


	void ShouldAimAtPlayer_(bool* Result);
	void AimAtActor_(class AActor** Actor);
	void GetAnimInstance(class UAnimInstance** AnimInstance);
	void GetNpcChestLocation(struct FVector* Location);
	void SetSequenceBlendWeight(float Interp);
	void UserConstructionScript();
	void FireBlaster();
	void Decals___Delete();
	void Decals___SpawnHit();
	void Decals___SpawnStab();
	void Decals___SpawnSlash();
	void BlueprintTick(bool Enable);
	void Hide_Blaster(bool Show);
	void BlueprintAnimationRateOptimization(bool Enable);
	void ToggleDropShadow(bool Enable);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ITOCharacter_Basic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
