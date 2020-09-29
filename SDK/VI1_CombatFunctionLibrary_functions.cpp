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

// Function CombatFunctionLibrary.CombatFunctionLibrary_C.IsFriendlyFireActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCombatFunctionLibrary_C::STATIC_IsFriendlyFireActor(class AActor* DamageInfo, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatFunctionLibrary.CombatFunctionLibrary_C.IsFriendlyFireActor");

	UCombatFunctionLibrary_C_IsFriendlyFireActor_Params params;
	params.DamageInfo = DamageInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function CombatFunctionLibrary.CombatFunctionLibrary_C.IsFriendlyFire
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCombatFunctionLibrary_C::STATIC_IsFriendlyFire(const struct FWKNDDamageInfo& DamageInfo, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatFunctionLibrary.CombatFunctionLibrary_C.IsFriendlyFire");

	UCombatFunctionLibrary_C_IsFriendlyFire_Params params;
	params.DamageInfo = DamageInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
