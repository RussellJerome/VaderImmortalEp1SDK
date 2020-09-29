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

// BlueprintGeneratedClass BP_WKNDHandSolver.BP_WKNDHandSolver_C
// 0x0000 (0x0470 - 0x0470)
class UBP_WKNDHandSolver_C : public UWKNDHandSolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WKNDHandSolver.BP_WKNDHandSolver_C");
		return ptr;
	}


	class UAnimationAsset* GetAnimationAssetForInteractive(TScriptInterface<class UXLABInteractive>* Interactive);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
