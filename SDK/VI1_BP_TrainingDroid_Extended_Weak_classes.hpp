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

// BlueprintGeneratedClass BP_TrainingDroid_Extended_Weak.BP_TrainingDroid_Extended_Weak_C
// 0x0010 (0x0DB0 - 0x0DA0)
class ABP_TrainingDroid_Extended_Weak_C : public ABP_TrainingDroid_Extended_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DA0(0x0008) (Transient, DuplicateTransient)
	class UAnimMontage*                                SpawnAnimation;                                           // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrainingDroid_Extended_Weak.BP_TrainingDroid_Extended_Weak_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TrainingDroid_Extended_Weak(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
