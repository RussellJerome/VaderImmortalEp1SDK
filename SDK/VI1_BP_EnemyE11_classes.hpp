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

// BlueprintGeneratedClass BP_EnemyE11.BP_EnemyE11_C
// 0x0010 (0x0338 - 0x0328)
class ABP_EnemyE11_C : public AStaticMeshActor
{
public:
	class UChildActorComponent*                        ChildActor_BlasterCaster;                                 // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_BlasterCaster_C*                         BlasterCaster;                                            // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemyE11.BP_EnemyE11_C");
		return ptr;
	}


	void FireBlaster(bool AccurateShot, const struct FVector& AccurateShotPosition, const struct FVector& ShotSpread);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
