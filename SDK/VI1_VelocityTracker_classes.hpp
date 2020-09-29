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

// BlueprintGeneratedClass VelocityTracker.VelocityTracker_C
// 0x0009 (0x02C9 - 0x02C0)
class UVelocityTracker_C : public UVelocityTrackerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (Transient, DuplicateTransient)
	bool                                               Enable_Debug_Output;                                      // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VelocityTracker.VelocityTracker_C");
		return ptr;
	}


	void Debug_Output();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_VelocityTracker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
