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

// Class NTLibs.NTCinematicTargetPoint
// 0x0000 (0x0318 - 0x0318)
class ANTCinematicTargetPoint : public ATargetPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTLibs.NTCinematicTargetPoint");
		return ptr;
	}

};


// Class NTLibs.NTCrashReportingSettings
// 0x0018 (0x0040 - 0x0028)
class UNTCrashReportingSettings : public UObject
{
public:
	bool                                               SaveCrashDumpToCustomLocation;                            // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     CrashDumpSaveDir;                                         // 0x0030(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTLibs.NTCrashReportingSettings");
		return ptr;
	}

};


// Class NTLibs.NTMaths
// 0x0000 (0x0028 - 0x0028)
class UNTMaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTLibs.NTMaths");
		return ptr;
	}


	bool STATIC_WillPassThreshold(float A, float Threshold, float Delta);
	float STATIC_UnwindRadians(float fRadians);
	float STATIC_UnwindDegrees(float fDegrees);
	struct FVector SmoothVectorClamped(const struct FVector& CurrentValue, const struct FVector& NewValue, float deltatTime, float Speed, float MinSpeed, float MaxSpeed);
	float SmoothFloatClamp(float CurrentValue, float NewValue, float dt, float Speed, float MinSpeed, float MaxSpeed);
	bool STATIC_SegmentSegmentIntersection(const struct FVector& A1, const struct FVector& B1, const struct FVector& A2, const struct FVector& B2);
	bool STATIC_MoveTowardsAtFixedSpeed(const struct FVector& Target, float Speed, float DeltaTime, struct FVector* movingVector);
	float STATIC_LerpAngle(float A, float B, float Alpha);
	bool STATIC_IsLocationInCameraView(const struct FVector& SourceLocation, const struct FRotator& SourceRotation, const struct FVector& TargetLocation, float FOV, float AspectRatio);
	bool STATIC_IsLocationInCameraFOV(const struct FVector& SourceLocation, const struct FRotator& SourceRotation, const struct FVector& TargetLocation, float FOV, float VFOV);
	bool STATIC_IsFacing(const struct FVector& Direction, const struct FVector& vX, const struct FVector& vZ);
	float STATIC_InterpAngleTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	bool STATIC_InBetweenVector(const struct FVector& TestPoint, const struct FVector& PointA, const struct FVector& PointB);
	bool STATIC_InBetween(float A, float Min, float Max);
	bool STATIC_HasPassedThreshold(float A, float Threshold, float Delta);
	float STATIC_GetYawInRadians(const struct FVector& V);
	float STATIC_GetYawInDegrees(const struct FVector& V);
	float STATIC_GetVerticalFOVInRadians(float HorizontalFOV_Radians, float AspectRatio);
	float STATIC_GetVerticalFOVInDegrees(float HorizontalFOV_Degrees, float AspectRatio);
	float STATIC_GetScaledCurveValue(class UCurveFloat* Curve, float Time, float newInitialValue);
	float STATIC_GetPitchInRadians(const struct FVector& V);
	float STATIC_GetPitchInDegrees(const struct FVector& V);
	float STATIC_GetPitchAngleDiff(const struct FVector& vStart, const struct FVector& vEnd);
	float STATIC_GetHeadingAngleDiff(const struct FVector& vStart, const struct FVector& vEnd);
	void STATIC_GetBezierPoint(TArray<struct FVector> ControlPoints, float T, struct FVector* OutPoint);
	float STATIC_GetAngleInRadians(const struct FVector& vInputVector, const struct FVector& vFromVector, const struct FVector& vNormal);
	float STATIC_GetAngleInDegrees(const struct FVector& vInputVector, const struct FVector& vFromVector, const struct FVector& vNormal);
	struct FVector STATIC_FlattenAndNormalise(const struct FVector& V, const struct FVector& Up);
	float STATIC_FindAngleDeltaInDegrees(float angle1, float angle2);
	float STATIC_Distance2DSquared(const struct FVector& v1, const struct FVector& v2);
	float STATIC_Distance2D(const struct FVector& v1, const struct FVector& v2);
	bool STATIC_CylCylIntersect(const struct FVector& Location1, float radius1, float HalfHeight1, const struct FVector& Location2, float radius2, float HalfHeight2);
	struct FVector STATIC_CreateVectorFromYaw_Radians(float YawRadians);
	struct FVector STATIC_CreateVectorFromYaw_Degrees(float YawDegrees);
	EDirection STATIC_ComputeVectorOrientation(const struct FVector& Target, const struct FVector& Forward, const struct FVector& Up);
	float STATIC_BlendFloat(float fNewValue, float fCurrentValue, float fSpeed, float dt);
	void AccelerateRotatorTowards(const struct FRotator& Target, const struct FRotator& Current, const struct FRotator& CurrentSpeed, const struct FRotator& MaxSpeed, const struct FRotator& Acceleration, float DeltaTime, struct FRotator* NewSpeed, struct FRotator* NewRotation);
	float STATIC_AccelerateFloat(float fTargetSpeed, float fCurrentSpeed, float fAcceleration, float fDeceleration, float dt);
};


// Class NTLibs.NTUtils
// 0x0000 (0x0028 - 0x0028)
class UNTUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTLibs.NTUtils");
		return ptr;
	}


	bool STATIC_NotContains_NamePrevious(TArray<struct FName> OldList, TArray<struct FName> NewList, const struct FName& Name);
	bool STATIC_NotContains_Name(TArray<struct FName> List, const struct FName& Name);
	bool STATIC_IsSameClass(class UClass* classToCheck);
	bool STATIC_IsSameAsAnyClass(class UClass* classToCheck);
	bool STATIC_IsOfClass(class UObject* Object);
	bool STATIC_IsOfAnyClass(class UObject* Object);
	bool STATIC_Contains_AnyPrevious(TArray<struct FName> OldList, TArray<struct FName> NewList, TArray<struct FName> Options);
	bool STATIC_Contains_Any(TArray<struct FName> List, TArray<struct FName> Options);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
