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

// BlueprintGeneratedClass IRagdollNotifiable.IRagdollNotifiable_C
// 0x0000 (0x0028 - 0x0028)
class UIRagdollNotifiable_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IRagdollNotifiable.IRagdollNotifiable_C");
		return ptr;
	}


	void DoRagdoll(TArray<struct FRagdollInfo>* BonesToRagdoll);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
