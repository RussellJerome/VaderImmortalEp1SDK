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

// BlueprintGeneratedClass BP_FunctionsKD.BP_FunctionsKD_C
// 0x0000 (0x0028 - 0x0028)
class UBP_FunctionsKD_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FunctionsKD.BP_FunctionsKD_C");
		return ptr;
	}


	void STATIC_PrintStringWithBypass(bool IsActive, bool Timestamp, const struct FString& pre_fix, const struct FString& StringToPrint, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
