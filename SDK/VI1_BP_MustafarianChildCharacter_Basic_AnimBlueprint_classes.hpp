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

// AnimBlueprintGeneratedClass BP_MustafarianChildCharacter_Basic_AnimBlueprint.BP_MustafarianChildCharacter_Basic_AnimBlueprint_C
// 0x031C (0x06DC - 0x03C0)
class UBP_MustafarianChildCharacter_Basic_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_48109D90438DF6A756B18094CB0F4862;      // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_DF1A5ACE482AB1B087A71EA77DAD94F8;// 0x0410(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_6A760447437FD091938CD597687344AE;// 0x0448(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C7AD160B47F1A0EDC06389BE273FC11F;// 0x04C0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_75455DE84D16D6B5AFCC90B0CD37303B;// 0x0510(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BF8D5A40497A2CDBE27918B6D21D38B4;      // 0x0560(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_25E5E6C24C2A5CD11405A98476DCD8A4;      // 0x05C8(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_58DAA6A54B529A7792F7879AEBC7E0CD;// 0x0630(0x00A8)
	float                                              SequenceBlendInterp;                                      // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_MustafarianChildCharacter_Basic_AnimBlueprint.BP_MustafarianChildCharacter_Basic_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_MustafarianChildCharacter_Basic_AnimBlueprint_AnimGraphNode_TwoWayBlend_6A760447437FD091938CD597687344AE();
	void ExecuteUbergraph_BP_MustafarianChildCharacter_Basic_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
