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

// BlueprintGeneratedClass BoolValueDecoratorNode.BoolValueDecoratorNode_C
// 0x0028 (0x00C8 - 0x00A0)
class UBoolValueDecoratorNode_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      boolKeyName;                                              // 0x00A0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoolValueDecoratorNode.BoolValueDecoratorNode_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor** OwnerActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
