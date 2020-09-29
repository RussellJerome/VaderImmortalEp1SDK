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

// BlueprintGeneratedClass BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C
// 0x0065 (0x037D - 0x0318)
class ABP_TrainingRemoteBlasterShot_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Bloom;                                                    // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FXLoc;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        spline;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_Bolt_Flyby;                                            // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDEnemyProjectileMovementComponent*       ProjectileMovement;                                       // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     PreviousLoc;                                              // 0x0360(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanDeflect;                                              // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	float                                              LastPlayerDistance;                                       // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPlayerDistance;                                    // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RateOfChange;                                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnDecals;                                              // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C");
		return ptr;
	}


	void PlayDeflectionVFX(class AActor* DeflectingActor);
	void UserConstructionScript();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileDeflectedSignature__DelegateSignature(class AActor* ProjActor, class AActor* DeflectingActor, bool bParried);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveDestroyed();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_6_ProjectilePassedTargetSignature__DelegateSignature(class AActor* ProjActor, class AActor* TargetActor);
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileCollidingHitSignature__DelegateSignature(class AActor* ProjActor, const struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_TrainingRemoteBlasterShot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
