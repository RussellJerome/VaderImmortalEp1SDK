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

// AnimBlueprintGeneratedClass ABP_Hydrospanner.ABP_Hydrospanner_C
// 0x0190 (0x0550 - 0x03C0)
class UABP_Hydrospanner_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F743EEB14889234CB2EFBD8D807C77C3;      // 0x03C8(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_E5DA80A84D32DEC1823BDB87A8FA0256;// 0x0410(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B1F3D0F24FA83726E31D9392E8EB5175;// 0x0440(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_30F405B0491210AD50B19C80A0D7CF9D;// 0x04F8(0x0048)
	float                                              RotationSpeed;                                            // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationAcceleration;                                     // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetRotationSpeed;                                      // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationAngle;                                            // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Hydrospanner.ABP_Hydrospanner_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hydrospanner_AnimGraphNode_ModifyBone_B1F3D0F24FA83726E31D9392E8EB5175();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_Hydrospanner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
