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

// Function BP_WKNDHandSolver.BP_WKNDHandSolver_C.GetAnimationAssetForInteractive
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UXLABInteractive>* Interactive                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UBP_WKNDHandSolver_C::GetAnimationAssetForInteractive(TScriptInterface<class UXLABInteractive>* Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDHandSolver.BP_WKNDHandSolver_C.GetAnimationAssetForInteractive");

	UBP_WKNDHandSolver_C_GetAnimationAssetForInteractive_Params params;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
