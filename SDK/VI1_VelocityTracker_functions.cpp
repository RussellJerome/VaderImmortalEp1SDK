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

// Function VelocityTracker.VelocityTracker_C.Debug Output
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVelocityTracker_C::Debug_Output()
{
	static auto fn = UObject::FindObject<UFunction>("Function VelocityTracker.VelocityTracker_C.Debug Output");

	UVelocityTracker_C_Debug_Output_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VelocityTracker.VelocityTracker_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVelocityTracker_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VelocityTracker.VelocityTracker_C.ReceiveTick");

	UVelocityTracker_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VelocityTracker.VelocityTracker_C.ExecuteUbergraph_VelocityTracker
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVelocityTracker_C::ExecuteUbergraph_VelocityTracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VelocityTracker.VelocityTracker_C.ExecuteUbergraph_VelocityTracker");

	UVelocityTracker_C_ExecuteUbergraph_VelocityTracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
