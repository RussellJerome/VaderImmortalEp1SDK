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

// BlueprintGeneratedClass RunCatchUpServiceNode.RunCatchUpServiceNode_C
// 0x0059 (0x00F1 - 0x0098)
class URunCatchUpServiceNode_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      MoveTargetKey;                                            // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RunDistanceKey;                                           // 0x00C8(0x0028) (Edit, BlueprintVisible)
	bool                                               RunStarted;                                               // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RunCatchUpServiceNode.RunCatchUpServiceNode_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ExecuteUbergraph_RunCatchUpServiceNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
