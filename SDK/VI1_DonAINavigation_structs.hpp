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

// Enum DonAINavigation.EDonNavigationQueryStatus
enum class EDonNavigationQueryStatus : uint8_t
{
	Unscheduled                    = 0,
	InProgress                     = 1,
	Success                        = 2,
	Failure                        = 3,
	QueryHasNoSolution             = 4,
	TimedOut                       = 5,
	EDonNavigationQueryStatus_MAX  = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DonAINavigation.DoNNavigationQueryParams
// 0x0020
struct FDoNNavigationQueryParams
{
	float                                              QueryTimeout;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlexibleOriginGoal;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipOptimizationPass;                                    // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                MaxOptimizerSweepAttemptsPerNode;                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPreciseDynamicCollisionRepathing;                        // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreDynamicCollisionRepathingForDirectGoals;           // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	float                                              CollisionShapeInflation;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceRescheduleQuery;                                    // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0015(0x000B) MISSED OFFSET
};

// ScriptStruct DonAINavigation.DoNNavigationDebugParams
// 0x000C
struct FDoNNavigationDebugParams
{
	bool                                               DrawDebugVolumes;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisualizeRawPath;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisualizeOptimizedPath;                                   // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisualizeInRealTime;                                      // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineDuration;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DonAINavigation.BT_FlyToTarget_DebugParams
// 0x0004 (0x0010 - 0x000C)
struct FBT_FlyToTarget_DebugParams : public FDoNNavigationDebugParams
{
	bool                                               bVisualizePawnAsVoxels;                                   // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct DonAINavigation.DoNNavigationQueryData
// 0x0288
struct FDoNNavigationQueryData
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          CollisionComponent;                                       // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Origin;                                                   // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Destination;                                              // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FDoNNavigationQueryParams                   QueryParams;                                              // 0x0028(0x0020) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x228];                                     // 0x0048(0x0228) MISSED OFFSET
	TArray<struct FVector>                             PathSolutionOptimized;                                    // 0x0270(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EDonNavigationQueryStatus                          QueryStatus;                                              // 0x0280(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
};

// ScriptStruct DonAINavigation.DonNavigationDynamicCollisionPayload
// 0x0048
struct FDonNavigationDynamicCollisionPayload
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct DonAINavigation.DonNavigationTask
// 0x0008
struct FDonNavigationTask
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct DonAINavigation.DonNavigationDynamicCollisionTask
// 0x0148 (0x0150 - 0x0008)
struct FDonNavigationDynamicCollisionTask : public FDonNavigationTask
{
	unsigned char                                      UnknownData00[0x148];                                     // 0x0008(0x0148) MISSED OFFSET
};

// ScriptStruct DonAINavigation.DonNavigationQueryTask
// 0x02A8 (0x02B0 - 0x0008)
struct FDonNavigationQueryTask : public FDonNavigationTask
{
	unsigned char                                      UnknownData00[0x288];                                     // 0x0008(0x0288) MISSED OFFSET
	struct FScriptDelegate                             ResultHandler;                                            // 0x0290(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DynamicCollisionListener;                                 // 0x02A0(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct DonAINavigation.DonNavigationVoxel
// 0x0040
struct FDonNavigationVoxel
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct DonAINavigation.DonNavVoxelY
// 0x0010
struct FDonNavVoxelY
{
	TArray<struct FDonNavigationVoxel>                 Z;                                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DonAINavigation.DonNavVoxelX
// 0x0010
struct FDonNavVoxelX
{
	TArray<struct FDonNavVoxelY>                       Y;                                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DonAINavigation.DonNavVoxelXYZ
// 0x0010
struct FDonNavVoxelXYZ
{
	TArray<struct FDonNavVoxelX>                       X;                                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DonAINavigation.DonNavigationDynamicCollisionNotifyee
// 0x0058
struct FDonNavigationDynamicCollisionNotifyee
{
	struct FScriptDelegate                             Listener;                                                 // 0x0000(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0010(0x0048) MISSED OFFSET
};

// ScriptStruct DonAINavigation.DonVoxelCollisionProfile
// 0x0020
struct FDonVoxelCollisionProfile
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
