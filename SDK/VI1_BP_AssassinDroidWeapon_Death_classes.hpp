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

// BlueprintGeneratedClass BP_AssassinDroidWeapon_Death.BP_AssassinDroidWeapon_Death_C
// 0x0008 (0x0320 - 0x0318)
class ABP_AssassinDroidWeapon_Death_C : public AActor
{
public:
	class UStaticMeshComponent*                        WeaponMesh;                                               // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AssassinDroidWeapon_Death.BP_AssassinDroidWeapon_Death_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
