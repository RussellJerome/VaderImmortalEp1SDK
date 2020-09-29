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

// BlueprintGeneratedClass PlayMontageTaskNode.PlayMontageTaskNode_C
// 0x0031 (0x00D1 - 0x00A0)
class UPlayMontageTaskNode_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      MontageKey;                                               // 0x00A8(0x0028) (Edit, BlueprintVisible)
	bool                                               MontageFinished;                                          // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayMontageTaskNode.PlayMontageTaskNode_C");
		return ptr;
	}


	void OnNotifyEnd_F447B6B54B4E4E12115A1C9B6384A08A(const struct FName& NotifyName);
	void OnNotifyBegin_F447B6B54B4E4E12115A1C9B6384A08A(const struct FName& NotifyName);
	void OnInterrupted_F447B6B54B4E4E12115A1C9B6384A08A(const struct FName& NotifyName);
	void OnBlendOut_F447B6B54B4E4E12115A1C9B6384A08A(const struct FName& NotifyName);
	void OnCompleted_F447B6B54B4E4E12115A1C9B6384A08A(const struct FName& NotifyName);
	void ReceiveExecute(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_PlayMontageTaskNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
