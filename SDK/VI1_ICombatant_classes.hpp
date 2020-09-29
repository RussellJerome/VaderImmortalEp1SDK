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

// BlueprintGeneratedClass ICombatant.ICombatant_C
// 0x0000 (0x0028 - 0x0028)
class UICombatant_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ICombatant.ICombatant_C");
		return ptr;
	}


	void GetEnemyType(EEnemyType* EnemyType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
