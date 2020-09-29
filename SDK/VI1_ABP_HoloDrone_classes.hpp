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

// AnimBlueprintGeneratedClass ABP_HoloDrone.ABP_HoloDrone_C
// 0x0154 (0x0514 - 0x03C0)
class UABP_HoloDrone_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_482FAD3242EE63E863139FB76323B3EF;      // 0x03C8(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_917EF5844340D70A19AECB8A2042B8C3;// 0x0430(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_Root_D049DCF94872085489864BA48218D55E;      // 0x04A0(0x0048)
	float                                              LeanSide;                                                 // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanForward;                                              // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanAmount;                                               // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrVelocity;                                             // 0x04F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrevVelocity;                                             // 0x0500(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTimeX;                                               // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightAdjustment;                                         // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_HoloDrone.ABP_HoloDrone_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_HoloDrone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
