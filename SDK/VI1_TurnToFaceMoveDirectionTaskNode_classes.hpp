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

// BlueprintGeneratedClass TurnToFaceMoveDirectionTaskNode.TurnToFaceMoveDirectionTaskNode_C
// 0x0008 (0x00A8 - 0x00A0)
class UTurnToFaceMoveDirectionTaskNode_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TurnToFaceMoveDirectionTaskNode.TurnToFaceMoveDirectionTaskNode_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_TurnToFaceMoveDirectionTaskNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
