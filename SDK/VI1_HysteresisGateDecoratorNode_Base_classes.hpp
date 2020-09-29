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

// BlueprintGeneratedClass HysteresisGateDecoratorNode_Base.HysteresisGateDecoratorNode_Base_C
// 0x0029 (0x00C9 - 0x00A0)
class UHysteresisGateDecoratorNode_Base_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      Value;                                                    // 0x00A0(0x0028) (Edit, BlueprintVisible)
	bool                                               Active;                                                   // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HysteresisGateDecoratorNode_Base.HysteresisGateDecoratorNode_Base_C");
		return ptr;
	}


	void UpdateActivation(float startValue, float StopValue);
	bool PerformConditionCheck(class AActor** OwnerActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
