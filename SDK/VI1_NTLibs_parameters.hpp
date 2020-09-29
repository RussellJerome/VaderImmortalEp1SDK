#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NTLibs.NTMaths.WillPassThreshold
struct UNTMaths_WillPassThreshold_Params
{
	float                                              A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.UnwindRadians
struct UNTMaths_UnwindRadians_Params
{
	float                                              fRadians;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.UnwindDegrees
struct UNTMaths_UnwindDegrees_Params
{
	float                                              fDegrees;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.SmoothVectorClamped
struct UNTMaths_SmoothVectorClamped_Params
{
	struct FVector                                     CurrentValue;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     NewValue;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              deltatTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.SmoothFloatClamp
struct UNTMaths_SmoothFloatClamp_Params
{
	float                                              CurrentValue;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              dt;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.SegmentSegmentIntersection
struct UNTMaths_SegmentSegmentIntersection_Params
{
	struct FVector                                     A1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     B1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     A2;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     B2;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.MoveTowardsAtFixedSpeed
struct UNTMaths_MoveTowardsAtFixedSpeed_Params
{
	struct FVector                                     movingVector;                                             // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Speed;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.LerpAngle
struct UNTMaths_LerpAngle_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.IsLocationInCameraView
struct UNTMaths_IsLocationInCameraView_Params
{
	struct FVector                                     SourceLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    SourceRotation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              FOV;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.IsLocationInCameraFOV
struct UNTMaths_IsLocationInCameraFOV_Params
{
	struct FVector                                     SourceLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    SourceRotation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              FOV;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              VFOV;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.IsFacing
struct UNTMaths_IsFacing_Params
{
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     vX;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     vZ;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.InterpAngleTo
struct UNTMaths_InterpAngleTo_Params
{
	float                                              Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.InBetweenVector
struct UNTMaths_InBetweenVector_Params
{
	struct FVector                                     TestPoint;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PointA;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PointB;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.InBetween
struct UNTMaths_InBetween_Params
{
	float                                              A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.HasPassedThreshold
struct UNTMaths_HasPassedThreshold_Params
{
	float                                              A;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetYawInRadians
struct UNTMaths_GetYawInRadians_Params
{
	struct FVector                                     V;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetYawInDegrees
struct UNTMaths_GetYawInDegrees_Params
{
	struct FVector                                     V;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetVerticalFOVInRadians
struct UNTMaths_GetVerticalFOVInRadians_Params
{
	float                                              HorizontalFOV_Radians;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetVerticalFOVInDegrees
struct UNTMaths_GetVerticalFOVInDegrees_Params
{
	float                                              HorizontalFOV_Degrees;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetScaledCurveValue
struct UNTMaths_GetScaledCurveValue_Params
{
	class UCurveFloat*                                 Curve;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newInitialValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetPitchInRadians
struct UNTMaths_GetPitchInRadians_Params
{
	struct FVector                                     V;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetPitchInDegrees
struct UNTMaths_GetPitchInDegrees_Params
{
	struct FVector                                     V;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetPitchAngleDiff
struct UNTMaths_GetPitchAngleDiff_Params
{
	struct FVector                                     vStart;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     vEnd;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetHeadingAngleDiff
struct UNTMaths_GetHeadingAngleDiff_Params
{
	struct FVector                                     vStart;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     vEnd;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetBezierPoint
struct UNTMaths_GetBezierPoint_Params
{
	TArray<struct FVector>                             ControlPoints;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              T;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutPoint;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetAngleInRadians
struct UNTMaths_GetAngleInRadians_Params
{
	struct FVector                                     vInputVector;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     vFromVector;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     vNormal;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.GetAngleInDegrees
struct UNTMaths_GetAngleInDegrees_Params
{
	struct FVector                                     vInputVector;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     vFromVector;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     vNormal;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.FlattenAndNormalise
struct UNTMaths_FlattenAndNormalise_Params
{
	struct FVector                                     V;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Up;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.FindAngleDeltaInDegrees
struct UNTMaths_FindAngleDeltaInDegrees_Params
{
	float                                              angle1;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              angle2;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.Distance2DSquared
struct UNTMaths_Distance2DSquared_Params
{
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.Distance2D
struct UNTMaths_Distance2D_Params
{
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.CylCylIntersect
struct UNTMaths_CylCylIntersect_Params
{
	struct FVector                                     Location1;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              radius1;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight1;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location2;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              radius2;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight2;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.CreateVectorFromYaw_Radians
struct UNTMaths_CreateVectorFromYaw_Radians_Params
{
	float                                              YawRadians;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.CreateVectorFromYaw_Degrees
struct UNTMaths_CreateVectorFromYaw_Degrees_Params
{
	float                                              YawDegrees;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.ComputeVectorOrientation
struct UNTMaths_ComputeVectorOrientation_Params
{
	struct FVector                                     Target;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     Up;                                                       // (Parm, IsPlainOldData)
	EDirection                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.BlendFloat
struct UNTMaths_BlendFloat_Params
{
	float                                              fNewValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              fCurrentValue;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              fSpeed;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              dt;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.AccelerateRotatorTowards
struct UNTMaths_AccelerateRotatorTowards_Params
{
	struct FRotator                                    Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Current;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    CurrentSpeed;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    MaxSpeed;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Acceleration;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewSpeed;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function NTLibs.NTMaths.AccelerateFloat
struct UNTMaths_AccelerateFloat_Params
{
	float                                              fTargetSpeed;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              fCurrentSpeed;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              fAcceleration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fDeceleration;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              dt;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTUtils.NotContains_NamePrevious
struct UNTUtils_NotContains_NamePrevious_Params
{
	TArray<struct FName>                               OldList;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               NewList;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTUtils.NotContains_Name
struct UNTUtils_NotContains_Name_Params
{
	TArray<struct FName>                               List;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTUtils.IsSameClass
struct UNTUtils_IsSameClass_Params
{
	class UClass*                                      classToCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTUtils.IsSameAsAnyClass
struct UNTUtils_IsSameAsAnyClass_Params
{
	class UClass*                                      classToCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTUtils.IsOfClass
struct UNTUtils_IsOfClass_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTUtils.IsOfAnyClass
struct UNTUtils_IsOfAnyClass_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTUtils.Contains_AnyPrevious
struct UNTUtils_Contains_AnyPrevious_Params
{
	TArray<struct FName>                               OldList;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               NewList;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Options;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibs.NTUtils.Contains_Any
struct UNTUtils_Contains_Any_Params
{
	TArray<struct FName>                               List;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Options;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
