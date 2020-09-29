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

// BlueprintGeneratedClass BP_SquadLeader.BP_SquadLeader_C
// 0x0010 (0x0178 - 0x0168)
class UBP_SquadLeader_C : public UWKNDSquadLeader
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0168(0x0008) (Transient, DuplicateTransient)
	float                                              Percentage;                                               // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                activeAttackingMynocks;                                   // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SquadLeader.BP_SquadLeader_C");
		return ptr;
	}


	void SetActionCooldown(float CooldownController, float* Output_Get);
	float GetActionCooldown();
	void OnAction();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_SquadLeader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
