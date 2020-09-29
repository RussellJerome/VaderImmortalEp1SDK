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

// Function ICombatant.ICombatant_C.GetEnemyType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEnemyType                     EnemyType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UICombatant_C::GetEnemyType(EEnemyType* EnemyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICombatant.ICombatant_C.GetEnemyType");

	UICombatant_C_GetEnemyType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyType != nullptr)
		*EnemyType = params.EnemyType;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
