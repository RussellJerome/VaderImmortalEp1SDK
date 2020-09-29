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

// Function BP_EnemyE11.BP_EnemyE11_C.FireBlaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AccurateShot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AccurateShotPosition           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ShotSpread                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_EnemyE11_C::FireBlaster(bool AccurateShot, const struct FVector& AccurateShotPosition, const struct FVector& ShotSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyE11.BP_EnemyE11_C.FireBlaster");

	ABP_EnemyE11_C_FireBlaster_Params params;
	params.AccurateShot = AccurateShot;
	params.AccurateShotPosition = AccurateShotPosition;
	params.ShotSpread = ShotSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemyE11.BP_EnemyE11_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EnemyE11_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyE11.BP_EnemyE11_C.UserConstructionScript");

	ABP_EnemyE11_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
