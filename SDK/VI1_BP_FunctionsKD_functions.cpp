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

// Function BP_FunctionsKD.BP_FunctionsKD_C.PrintStringWithBypass
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Timestamp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 pre_fix                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 StringToPrint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FunctionsKD_C::STATIC_PrintStringWithBypass(bool IsActive, bool Timestamp, const struct FString& pre_fix, const struct FString& StringToPrint, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionsKD.BP_FunctionsKD_C.PrintStringWithBypass");

	UBP_FunctionsKD_C_PrintStringWithBypass_Params params;
	params.IsActive = IsActive;
	params.Timestamp = Timestamp;
	params.pre_fix = pre_fix;
	params.StringToPrint = StringToPrint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
