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

// BlueprintGeneratedClass BlackboardHysteresisGateDecoratorNode.BlackboardHysteresisGateDecoratorNode_C
// 0x005F (0x0128 - 0x00C9)
class UBlackboardHysteresisGateDecoratorNode_C : public UHysteresisGateDecoratorNode_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      startValue;                                               // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      StopValue;                                                // 0x0100(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BlackboardHysteresisGateDecoratorNode.BlackboardHysteresisGateDecoratorNode_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_BlackboardHysteresisGateDecoratorNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
