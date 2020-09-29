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

// BlueprintGeneratedClass ForceItemComponent.ForceItemComponent_C
// 0x0008 (0x0478 - 0x0470)
class UForceItemComponent_C : public UForceItemComponentBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ForceItemComponent.ForceItemComponent_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_ForceItemComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
