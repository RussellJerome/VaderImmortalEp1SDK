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

// BlueprintGeneratedClass BP_RemoteDronePod.BP_RemoteDronePod_C
// 0x003C (0x03DC - 0x03A0)
class ABP_RemoteDronePod_C : public ABP_DronePod_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	class UAIInstructionComponent*                     InstructionComponent;                                     // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_TrainingRemote_C*                        RemoteDrone;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ATargetPoint*>                        FlightTargets;                                            // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FScriptMulticastDelegate                    UnstowFinishedSpawned;                                    // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              EXTDJO_IndirectLightingIntensity;                         // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemoteDronePod.BP_RemoteDronePod_C");
		return ptr;
	}


	void UserConstructionScript();
	void DoAttackSequence();
	void SpawnDrone(class UClass** DroneClass);
	void OnReadyForRestow();
	void ExecuteUbergraph_BP_RemoteDronePod(int EntryPoint);
	void UnstowFinishedSpawned__DelegateSignature(class ABP_TrainingRemote_C* RemoteDrone);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
