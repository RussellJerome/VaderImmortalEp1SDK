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

// Function BP_WKNDPlayerController.BP_WKNDPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerController.BP_WKNDPlayerController_C.UserConstructionScript");

	ABP_WKNDPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerController.BP_WKNDPlayerController_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerController_C::InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerController.BP_WKNDPlayerController_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_3");

	ABP_WKNDPlayerController_C_InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerController.BP_WKNDPlayerController_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerController_C::InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerController.BP_WKNDPlayerController_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_2");

	ABP_WKNDPlayerController_C_InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerController.BP_WKNDPlayerController_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDPlayerController_C::InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerController.BP_WKNDPlayerController_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_1");

	ABP_WKNDPlayerController_C_InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPlayerController.BP_WKNDPlayerController_C.ExecuteUbergraph_BP_WKNDPlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPlayerController_C::ExecuteUbergraph_BP_WKNDPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPlayerController.BP_WKNDPlayerController_C.ExecuteUbergraph_BP_WKNDPlayerController");

	ABP_WKNDPlayerController_C_ExecuteUbergraph_BP_WKNDPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
