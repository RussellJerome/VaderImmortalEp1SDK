// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AssassinDroidWeapon_Death.BP_AssassinDroidWeapon_Death_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AssassinDroidWeapon_Death_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AssassinDroidWeapon_Death.BP_AssassinDroidWeapon_Death_C.UserConstructionScript");

	ABP_AssassinDroidWeapon_Death_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
