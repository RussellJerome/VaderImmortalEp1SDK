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

// BlueprintGeneratedClass Cinematics_Component.Cinematics_Component_C
// 0x0040 (0x0130 - 0x00F0)
class UCinematics_Component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	float                                              SequenceBlendWeight;                                      // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SequenceBlendOverride;                                    // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CharacterIsBlending;                                      // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                QueueLodChangeTimer;                                      // 0x0110(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ForcedOverrideLodIndex;                                   // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    DispatchLodChangeWhenUnrendered;                          // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cinematics_Component.Cinematics_Component_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void Event_QueueLodChangeWhenUnrendered(int ForcedLOD);
	void Event_CheckingLodChangeQueue();
	void Event_ForceLod(int ForcedLOD);
	void ExecuteUbergraph_Cinematics_Component(int EntryPoint);
	void DispatchLodChangeWhenUnrendered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
