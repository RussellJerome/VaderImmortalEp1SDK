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

// BlueprintGeneratedClass BP_MustafarianCharacter_Basic.BP_MustafarianCharacter_Basic_C
// 0x0038 (0x0768 - 0x0730)
class ABP_MustafarianCharacter_Basic_C : public AInterfaceCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class UChildActorComponent*                        ChildActor_Blaster;                                       // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematicBlendingComponent*                 CinematicBlending;                                        // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_EnemyE11_C*                              Blaster;                                                  // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanFireBlaster;                                           // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0759(0x0007) MISSED OFFSET
	class AActor*                                      AimAtActor;                                               // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MustafarianCharacter_Basic.BP_MustafarianCharacter_Basic_C");
		return ptr;
	}


	void GetNpcChestLocation(struct FVector* Location);
	void GetAnimInstance(class UAnimInstance** AnimInstance);
	void AimAtActor_(class AActor** Actor);
	void ShouldAimAtPlayer_(bool* Result);
	bool OnEndCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* BladeDirection);
	bool OnStartCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FName* BoneName, struct FVector* CutEntryLocation);
	bool OnUpdateCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* CutEntryLocation, struct FVector* CutEntryNormal, struct FVector2D* CollisionUV, struct FName* BoneName, struct FVector* CutExitLocation);
	bool UsesCuttingFX();
	void HideBlaster();
	void ShowBlaster();
	void SetSequenceBlendWeight(float Interp);
	void UserConstructionScript();
	void Decals___Delete();
	void Decals___SpawnHit();
	void Decals___SpawnStab();
	void Decals___SpawnSlash();
	void BlueprintTick(bool Enable);
	void Hide_Blaster(bool Show);
	void BlueprintAnimationRateOptimization(bool Enable);
	void ToggleDropShadow(bool Enable);
	void FireBlaster();
	void ExecuteUbergraph_BP_MustafarianCharacter_Basic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
