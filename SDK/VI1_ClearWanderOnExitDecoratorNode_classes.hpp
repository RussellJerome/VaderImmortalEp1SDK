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

// BlueprintGeneratedClass ClearWanderOnExitDecoratorNode.ClearWanderOnExitDecoratorNode_C
// 0x0008 (0x00A8 - 0x00A0)
class UClearWanderOnExitDecoratorNode_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ClearWanderOnExitDecoratorNode.ClearWanderOnExitDecoratorNode_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor** OwnerActor);
	void ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult);
	void ExecuteUbergraph_ClearWanderOnExitDecoratorNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
