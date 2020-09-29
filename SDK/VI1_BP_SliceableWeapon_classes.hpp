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

// BlueprintGeneratedClass BP_SliceableWeapon.BP_SliceableWeapon_C
// 0x0078 (0x0410 - 0x0398)
class ABP_SliceableWeapon_C : public ASliceableActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	float                                              TravelTowardsActor_NewTrack_0_7AA8734A43797A06EA827495AC34B1B4;// 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TravelTowardsActor__Direction_7AA8734A43797A06EA827495AC34B1B4;// 0x03A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TravelTowardsActor;                                       // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_ThrowManager_C*                          ThrowManager;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // 0x03B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetLoc;                                                // 0x03C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InitialVector;                                            // 0x03D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BasePathCurve;                                            // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 throwSpeed;                                               // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowStartTime;                                           // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowDuration;                                            // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsedInAttack;                                            // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	TArray<class USliceableMeshComponent*>             SliceMeshes;                                              // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SliceableWeapon.BP_SliceableWeapon_C");
		return ptr;
	}


	void GetNewThrowTravelLocation(const struct FVector& StartLocation, const struct FVector& TargetLocation, float ThrowPositionDelta, bool bArcToLeft, struct FVector* NewLocation);
	void DebugDrawPath(class USceneComponent* TargetComponent);
	void UserConstructionScript();
	void TravelTowardsActor__FinishedFunc();
	void TravelTowardsActor__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__SliceableMesh_K2Node_ComponentBoundEvent_0_OnMeshSlicedDelegate__DelegateSignature(const struct FVector& CentreOfSlice, class USliceableMeshComponent* OriginalMesh, class USliceableMeshComponent* NewMesh);
	void StoppedBeingThrownEvent();
	void ThrowAtTarget(class USceneComponent* TargetComponent);
	void MapCurve(class USceneComponent* TargetComponent);
	void ReceiveOnMeshSliced(struct FVector* CentreOfSlice, class USliceableMeshComponent** MeshA, class USliceableMeshComponent** MeshB);
	void ExecuteUbergraph_BP_SliceableWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
