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

// BlueprintGeneratedClass CombatFunctionLibrary.CombatFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UCombatFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CombatFunctionLibrary.CombatFunctionLibrary_C");
		return ptr;
	}


	void STATIC_IsFriendlyFireActor(class AActor* DamageInfo, class UObject* __WorldContext, bool* Result);
	void STATIC_IsFriendlyFire(const struct FWKNDDamageInfo& DamageInfo, class UObject* __WorldContext, bool* Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
