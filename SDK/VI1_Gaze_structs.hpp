#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Gaze.EAttentionAction
enum class EAttentionAction : uint8_t
{
	ATTN_Ignore                    = 0,
	ATTN_MaintainFocus             = 1,
	ATTN_Focus                     = 2,
	ATTN_Hierarchy                 = 3,
	ATTN_AttentiveGlance           = 4,
	ATTN_CongnativeGlance          = 5,
	ATTN_BoredOfFocus              = 6,
	ATTN_BoredOfTask               = 7,
	ATTN_FocusInvalid              = 8,
	ATTN_MAX                       = 9
};


// Enum Gaze.EPerceptionResult
enum class EPerceptionResult : uint8_t
{
	PR_Unspecified                 = 0,
	PR_PolicyFailed                = 1,
	PR_DistanceFailed              = 2,
	PR_AngleFailed                 = 3,
	PR_Passed                      = 4,
	PR_MAX                         = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Gaze.FocusAccumulator
// 0x0004
struct FFocusAccumulator
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Gaze.FocusDecay
// 0x0004
struct FFocusDecay
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Gaze.AttentionFocus
// 0x0028
struct FAttentionFocus
{
	float                                              interestDuration;                                         // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ignoreDuration;                                           // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGaze_PointOfInterest*                       poi;                                                      // 0x0008(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFocusAccumulator                           FocusAccumulator;                                         // 0x0010(0x0004) (BlueprintVisible)
	struct FFocusDecay                                 FocusDecay;                                               // 0x0014(0x0004) (BlueprintVisible)
	float                                              minThreshold;                                             // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxThreshold;                                             // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Age;                                                      // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              interest;                                                 // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gaze.AttentionPolicy
// 0x0048
struct FAttentionPolicy
{
	TArray<struct FName>                               mustContainAny;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               mustContainAll;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               mustNotContain;                                           // 0x0020(0x0010) (Edit, ZeroConstructor)
	float                                              interestDuration;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ignoreDuration;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              minThreshold;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              maxThreshold;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              initialInterest;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Gaze.DayDreamDefinition
// 0x000C
struct FDayDreamDefinition
{
	float                                              dreamLength;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gaze.SpringData
// 0x0038
struct FSpringData
{
	float                                              Target;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
	float                                              extension;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET
};

// ScriptStruct Gaze.PerceivedActor
// 0x0020
struct FPerceivedActor
{
	float                                              Age;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UGaze_PointOfInterest*                       poi;                                                      // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGaze_PerceptionPolicy*                      policy;                                                   // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPerceptionResult                                  policyResult;                                             // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Gaze.LowPassFilter
// 0x0020
struct FLowPassFilter
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
