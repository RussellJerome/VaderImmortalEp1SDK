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

// BlueprintGeneratedClass BP_humanbiped_hands_animList.BP_humanbiped_hands_animList_C
// 0x0101 (0x0129 - 0x0028)
class UBP_humanbiped_hands_animList_C : public UNTAnimList
{
public:
	struct FNTAnimSequenceStruct                       ready;                                                    // 0x0028(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNTAnimSequenceStruct                       Grip;                                                     // 0x0048(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNTAnimSequenceStruct                       grip_rev;                                                 // 0x0068(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNTAnimSequenceStruct                       grip_2nd;                                                 // 0x0088(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNTAnimBlendSpaceStruct                     ready_ocu_BS;                                             // 0x00A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNTAnimBlendSpaceStruct                     grip_ocu_BS;                                              // 0x00C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNTAnimBlendSpaceStruct                     grip_rev_ocu_BS;                                          // 0x00E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNTAnimBlendSpaceStruct                     grip_2nd_ocu_BS;                                          // 0x0108(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsPlaceholder;                                           // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_humanbiped_hands_animList.BP_humanbiped_hands_animList_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
