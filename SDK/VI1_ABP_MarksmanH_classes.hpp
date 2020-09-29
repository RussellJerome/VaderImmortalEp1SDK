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

// AnimBlueprintGeneratedClass ABP_MarksmanH.ABP_MarksmanH_C
// 0x0110 (0x04D0 - 0x03C0)
class UABP_MarksmanH_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F1D597D949A5ACEE05F35C82EE3B2786;      // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D5F0A93045077EF8AE1CB8B199D37C88;      // 0x0410(0x0068)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_944CA53A4F1FB2763FEAB1BA464F3DE8;// 0x0478(0x0038)
	class ABP_TrainingRemote_C*                        RemoteDrone;                                              // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      OwningSkeletalMeshComponent;                              // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              DeltaTimeX;                                               // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	class ABP_TrainingRemote_C*                        RemoteBladeFX;                                            // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MarksmanH.ABP_MarksmanH_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_HitRecovered();
	void ExecuteUbergraph_ABP_MarksmanH(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
