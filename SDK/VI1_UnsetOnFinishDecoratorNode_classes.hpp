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

// BlueprintGeneratedClass UnsetOnFinishDecoratorNode.UnsetOnFinishDecoratorNode_C
// 0x0030 (0x00D0 - 0x00A0)
class UUnsetOnFinishDecoratorNode_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x00A8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UnsetOnFinishDecoratorNode.UnsetOnFinishDecoratorNode_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor** OwnerActor);
	void ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult);
	void ExecuteUbergraph_UnsetOnFinishDecoratorNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
