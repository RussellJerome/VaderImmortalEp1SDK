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

// BlueprintGeneratedClass BP_LeftHandTutorial.BP_LeftHandTutorial_C
// 0x0000 (0x0418 - 0x0418)
class ABP_LeftHandTutorial_C : public ABP_RightHandTutorial_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LeftHandTutorial.BP_LeftHandTutorial_C");
		return ptr;
	}


	void GetTargetLocation(bool* Success, struct FVector* NewLocation);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
