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

// BlueprintGeneratedClass BP_MustafarianChildCharacter_Basic.BP_MustafarianChildCharacter_Basic_C
// 0x0018 (0x0738 - 0x0720)
class ABP_MustafarianChildCharacter_Basic_C : public ACharacter
{
public:
	class UCapsuleComponent*                           CapsuleCollision;                                         // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematicBlendingComponent*                 CinematicBlending;                                        // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MustafarianChildCharacter_Basic.BP_MustafarianChildCharacter_Basic_C");
		return ptr;
	}


	void SetSequenceBlendWeight(float Interp);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
