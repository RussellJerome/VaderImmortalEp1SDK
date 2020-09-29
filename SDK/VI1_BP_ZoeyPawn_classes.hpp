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

// BlueprintGeneratedClass BP_ZoeyPawn.BP_ZoeyPawn_C
// 0x0050 (0x0490 - 0x0440)
class ABP_ZoeyPawn_C : public AWKNDZoeyPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ZoeHoverMovement;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ZoeFoleyNeck;                                             // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ZoeFoleyLeftArm;                                          // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ZoeFoleyRightArm;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDDroidInstrumentFoleyComponent*          WKNDDroidInstrumentFoley;                                 // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDGrabberComponentWithAttach*             WKNDGrabberComponentWithAttach;                           // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                DialogueReminderTimer;                                    // 0x0480(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_ZoeyDroid_AnimBlueprint_C*               ZoeyAnimBlueprint;                                        // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoeyPawn.BP_ZoeyPawn_C");
		return ptr;
	}


	void SetSequenceBlendWeight(float Interp);
	void UserConstructionScript();
	void AnimProxy_ObjectCatchReady(bool* oneHand, float* catchAngle);
	void AnimProxy_ObjectCatchSuccess(bool* oneHand, float* catchAngle);
	void AnimProxy_ObjectHandOver(bool* oneHand);
	void AnimProxy_ObjectPickup(bool* oneHand, float* Height);
	void ReceiveBeginPlay();
	void AnimProxy_ObjectThrow(bool* oneHand, float* throwDistance);
	void OnThrowCatchComplete();
	void OnPickupTakenFromMe();
	void AnimProxy_ObjectLetGo();
	void ReceiveTick(float* DeltaSeconds);
	void AnimProxy_ObjectCatchFail(bool* oneHand);
	void ExecuteUbergraph_BP_ZoeyPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
