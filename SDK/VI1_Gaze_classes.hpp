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

// Class Gaze.Gaze_Attention
// 0x0120 (0x0210 - 0x00F0)
class UGaze_Attention : public UActorComponent
{
public:
	TArray<struct FAttentionFocus>                     pointsOfInterest;                                         // 0x00F0(0x0010) (ZeroConstructor)
	struct FAttentionFocus                             currentFocus;                                             // 0x0100(0x0028)
	struct FAttentionPolicy                            taskPolicy;                                               // 0x0128(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FAttentionPolicy                            studyPolicy;                                              // 0x0170(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FAttentionPolicy                            checkPolicy;                                              // 0x01B8(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              autoBored;                                                // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               debugRenderEnabled;                                       // 0x0204(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               focusForced;                                              // 0x0205(0x0001) (ZeroConstructor, IsPlainOldData)
	EAttentionAction                                   nextAction;                                               // 0x0206(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               useSpecialTag;                                            // 0x0207(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       specialTag;                                               // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_Attention");
		return ptr;
	}


	EAttentionAction UpdateAttention(float DeltaTime);
	void UnForceAttention();
	void SetFocus(const struct FAttentionFocus& nextFocus);
	bool IsValidFocus(struct FAttentionFocus* attn);
	struct FVector GetWorldSpaceAttention();
	class UGaze_PointOfInterest* GetAttention();
	void ForceAttentionChange(class UGaze_PointOfInterest* poi);
	void EnableDebugRender();
	void DisableDebugRender();
	void DebugRender();
	void ClearPOIArray();
	void ClearAttention();
	void ChooseNewFocus();
	void AddSinglePOIToAttention(class UGaze_PointOfInterest* poi);
	void AddPOIAndGroupToAttention(class UGaze_PointOfInterest* poi);
	void AddGroupToAttention(class AActor* interestingActor, const struct FName& GroupName);
	void AddEntireActorToAttention(class AActor* interestingActor);
};


// Class Gaze.Gaze_BlendSpace
// 0x0000 (0x00F0 - 0x00F0)
class UGaze_BlendSpace : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_BlendSpace");
		return ptr;
	}


	struct FVector VectorToSpace(const struct FVector& lookAtVector, const struct FVector& spaceVector, const struct FRotator& spaceRotator);
	void VectorToHeadingForEyes(const struct FVector& perceptionFacing, const struct FVector& localLookAt, float* Pitch, float* Yaw);
	void VectorToHeading(const struct FVector& perceptionFacing, const struct FVector& localLookAt, float* Pitch, float* Yaw);
	void VectorToActorHeading(const struct FVector& localLookAt, float* Pitch, float* Yaw);
	void VectorSpaceToHeading(const struct FVector& localLookAt, float* Pitch, float* Yaw);
	struct FTransform GetBoneTransform(const struct FName& BoneName);
};


// Class Gaze.Gaze_Daydream
// 0x0030 (0x0120 - 0x00F0)
class UGaze_Daydream : public UActorComponent
{
public:
	TArray<struct FDayDreamDefinition>                 dreams;                                                   // 0x00F0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_Daydream");
		return ptr;
	}


	void Update(float DeltaTime);
	void StopDaydream();
	void StartDaydream();
	void GetDayDreamAngles(float* Pitch, float* Yaw);
	float GetDayDreamActivity();
	void EnableDaydream();
	void DisableDaydream();
};


// Class Gaze.Gaze_EyeVector
// 0x00C8 (0x01B8 - 0x00F0)
class UGaze_EyeVector : public UActorComponent
{
public:
	struct FSpringData                                 yawSpringData;                                            // 0x00F0(0x0038) (BlueprintVisible, BlueprintReadOnly)
	struct FSpringData                                 pitchSpringData;                                          // 0x0128(0x0038)
	bool                                               useVergance;                                              // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	float                                              verganceConstant;                                         // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              springConstant;                                           // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              dampingConstant;                                          // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              pitchToPOI;                                               // 0x0170(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              yawToPOI;                                                 // 0x0174(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              currentPitch;                                             // 0x0178(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              currentYaw;                                               // 0x017C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               saccadeBlinkReady;                                        // 0x0180(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               requiresSaccadeBlink;                                     // 0x0181(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0182(0x0002) MISSED OFFSET
	float                                              leftYaw;                                                  // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              rightYaw;                                                 // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               eyeVectorEnabled;                                         // 0x018C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	class UGaze_BlendSpace*                            BlendSpace;                                               // 0x0190(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     POILocation;                                              // 0x0198(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	class UGaze_PointOfInterest*                       currentPOI;                                               // 0x01A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              lingerDuration;                                           // 0x01B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isSaccading;                                              // 0x01B4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01B5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_EyeVector");
		return ptr;
	}


	void Update(float DeltaTime);
	void TriggerSaccade();
	void SaccadeToWorldspacePoint(const struct FVector& worldspacePoint);
	void SaccadeToPOI(class UGaze_PointOfInterest* newPOI);
	void PreUpdate(float DeltaTime);
	void Linger(float Duration);
	void GetPitchAndYaw(float* Pitch, float* leftEye, float* rightEye);
	void EnableEyeVector();
	void DisableEyeVector();
};


// Class Gaze.Gaze_FloatNode
// 0x0000 (0x0028 - 0x0028)
class UGaze_FloatNode : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_FloatNode");
		return ptr;
	}


	float Evaluate(float DeltaTime);
};


// Class Gaze.Gaze_FloatConstant
// 0x0008 (0x0030 - 0x0028)
class UGaze_FloatConstant : public UGaze_FloatNode
{
public:
	float                                              Value;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_FloatConstant");
		return ptr;
	}


	void SetValue(float V);
	float Evaluate(float DeltaTime);
};


// Class Gaze.Gaze_FloatLerp
// 0x0010 (0x0038 - 0x0028)
class UGaze_FloatLerp : public UGaze_FloatNode
{
public:
	float                                              startValue;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              endValue;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Age;                                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_FloatLerp");
		return ptr;
	}


	void Set(float Start, float End, float Duration);
	float Evaluate(float DeltaTime);
};


// Class Gaze.Gaze_FloatSCurve
// 0x0008 (0x0030 - 0x0028)
class UGaze_FloatSCurve : public UGaze_FloatNode
{
public:
	float                                              LifeSpan;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Age;                                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_FloatSCurve");
		return ptr;
	}


	void Set(float Duration);
	float Evaluate(float DeltaTime);
};


// Class Gaze.Gaze_HeadVector
// 0x01A8 (0x0298 - 0x00F0)
class UGaze_HeadVector : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET
	class UGaze_PointOfInterest*                       poiActual;                                                // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     POILocation;                                              // 0x0110(0x000C) (IsPlainOldData)
	struct FVector                                     previousPoiLocation;                                      // 0x011C(0x000C) (IsPlainOldData)
	class UGaze_BlendSpace*                            BlendSpace;                                               // 0x0128(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               omegaLimiting;                                            // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              omegaMin;                                                 // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              omegaMax;                                                 // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              omegaContribution;                                        // 0x013C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              omega;                                                    // 0x0140(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x0144(0x0024) MISSED OFFSET
	float                                              trackingPrecision;                                        // 0x0168(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              secondaryAlphaYaw;                                        // 0x016C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              alertness;                                                // 0x0170(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              alphaPitch;                                               // 0x0174(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              alphaYaw;                                                 // 0x0178(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              pushedAlphaYaw;                                           // 0x017C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0180(0x0004) MISSED OFFSET
	float                                              pushedPOIYaw;                                             // 0x0184(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0188(0x0004) MISSED OFFSET
	float                                              DeltaYaw;                                                 // 0x018C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              angleToPOI;                                               // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              perceptionToHead;                                         // 0x0194(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              pthSign;                                                  // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              idealHead;                                                // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              actualHead;                                               // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              yawToPOI;                                                 // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              normalizedYawToPOI;                                       // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x01AC(0x0008) MISSED OFFSET
	float                                              idealYaw;                                                 // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               useFixedFrameOfReference;                                 // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               useHorizonYaw;                                            // 0x01B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x01BA(0x0002) MISSED OFFSET
	float                                              suspicion;                                                // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              maximumYaw;                                               // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               useMaximumYawRate;                                        // 0x01C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	float                                              maximumYawRate;                                           // 0x01CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               useSoftYawCap;                                            // 0x01D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x01D1(0x0003) MISSED OFFSET
	float                                              softYawCap;                                               // 0x01D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              rearExtension;                                            // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               useMaximumTension;                                        // 0x01DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	float                                              maximumTension;                                           // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              springConstant;                                           // 0x01E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              relaxedSpringConstant;                                    // 0x01E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              dampingConstant;                                          // 0x01EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              urgency;                                                  // 0x01F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              yawRollMinimum;                                           // 0x01F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              yawRollMaximum;                                           // 0x01F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              yawDominance;                                             // 0x01FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              pitchDot;                                                 // 0x0200(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              acosPitchDot;                                             // 0x0204(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              actualYaw;                                                // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FSpringData                                 yawSpringData;                                            // 0x020C(0x0038) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	float                                              eyeContributionYaw;                                       // 0x0248(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              idealPitch;                                               // 0x024C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              actualPitch;                                              // 0x0250(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              pitchToPOI;                                               // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     yawSpacePerceptionToPOI;                                  // 0x0258(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     perceptionToPOI;                                          // 0x0264(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              pitchSign;                                                // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              normalizedPitchToPOI;                                     // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              signOfTurn;                                               // 0x0278(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              normalizedFacingToPOI;                                    // 0x027C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              limitedAngle;                                             // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     yawReferenceLocation;                                     // 0x0284(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0290(0x0001) MISSED OFFSET
	bool                                               draw_HeadFacing;                                          // 0x0291(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               draw_HeadPersistence;                                     // 0x0292(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               draw_HeadGimbal;                                          // 0x0293(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               draw_fixedReference;                                      // 0x0294(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               draw_HeadToPOI;                                           // 0x0295(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0296(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_HeadVector");
		return ptr;
	}


	void Update_UsingAlertness(float DeltaTime);
	void SetUrgency(float Val);
	void SetPOILocation(const struct FVector& poi);
	void SetPOI(class UGaze_PointOfInterest* poi);
	float ResponseCurve(float In);
	float Lerp(float from, float to, float Amount);
	struct FVector HV2_GetVectorToPOI();
	float GetTurnSign();
	struct FVector GetRootToPOI();
	float GetPTHSign();
	struct FVector GetPOILocation();
	float GetPitchToPOI();
	float GetPerceptionToHead();
	float GetNormalisedPitch();
	float GetNormalisdAngle();
	float GetLimitedAngle();
	float GetIdealHead();
	float GetHeadYaw();
	float GetHeadPitch();
	float GetActualHead();
	float Get_YawToPOI();
	float Get_normalizedYawToPOI();
	float Get_idealYaw();
	float Get_idealPitch();
	float Get_eyeContributionYaw();
	float Get_actualYaw();
	void EnableDebugDraw();
	void DisableDebugDraw();
	struct FVector CalculateYawSpaceToPOI(struct FVector* referenceVector);
	struct FVector CalculateReferenceLocation();
	void CalculateOmegaContribution(float DeltaTime);
};


// Class Gaze.Gaze_Perception
// 0x0050 (0x02E0 - 0x0290)
class UGaze_Perception : public USceneComponent
{
public:
	bool                                               debugRenderEnabled;                                       // 0x0290(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	class UClass*                                      policy;                                                   // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPerceivedActor>                     perceivedActors;                                          // 0x02A0(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FPerceivedActor>                     recentlySpottedActors;                                    // 0x02B0(0x0010) (ZeroConstructor)
	float                                              recentlySpottedThreshold;                                 // 0x02C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	TArray<struct FPerceivedActor>                     recentlyLostActors;                                       // 0x02C8(0x0010) (ZeroConstructor)
	float                                              recentlyLostThreshold;                                    // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_Perception");
		return ptr;
	}


	class UGaze_PointOfInterest* GetSpottedPOIHacks();
	class AActor* GetSpottedActorHacks();
	void EvaluateTargets();
	void EnableDebugRender();
	void DisableDebugRender();
	void DebugRender();
};


// Class Gaze.Gaze_PerceptionPolicy
// 0x0038 (0x0060 - 0x0028)
class UGaze_PerceptionPolicy : public UObject
{
public:
	bool                                               debugVisualise;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               useTagFilter;                                             // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	TArray<struct FName>                               ContainsAllTags;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               ContainsAnyTags;                                          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               notAnyTags;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_PerceptionPolicy");
		return ptr;
	}


	void EnableDebug();
	int Discover(class AActor* perceptionOwner, const struct FVector& perceptionRoot, const struct FVector& Facing, TArray<class UGaze_PointOfInterest*>* pois, TArray<struct FPerceivedActor>* perceived);
	void DisableDebug();
	void DebugDraw(class UWorld* World, const struct FVector& Root, const struct FVector& Facing);
};


// Class Gaze.Gaze_PerceptionCone
// 0x0030 (0x0090 - 0x0060)
class UGaze_PerceptionCone : public UGaze_PerceptionPolicy
{
public:
	TArray<class UGaze_PointOfInterest*>               filtered;                                                 // 0x0060(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UGaze_PointOfInterest*>               unfiltered;                                               // 0x0070(0x0010) (ExportObject, ZeroConstructor)
	float                                              maximumRange;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maximumFound;                                             // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              coneDot;                                                  // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_PerceptionCone");
		return ptr;
	}


	int Discover(class AActor* perceptionOwner, const struct FVector& perceptionRoot, const struct FVector& Facing, TArray<class UGaze_PointOfInterest*>* pois, TArray<struct FPerceivedActor>* perceived);
	void DebugDraw(class UWorld* World, const struct FVector& Root, const struct FVector& Facing);
};


// Class Gaze.Gaze_PerceptionRaycastCone
// 0x0000 (0x0090 - 0x0090)
class UGaze_PerceptionRaycastCone : public UGaze_PerceptionCone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_PerceptionRaycastCone");
		return ptr;
	}


	int Discover(class AActor* perceptionOwner, const struct FVector& perceptionRoot, const struct FVector& Facing, TArray<class UGaze_PointOfInterest*>* pois, TArray<struct FPerceivedActor>* perceived);
	void DebugDraw(class UWorld* World, const struct FVector& Root, const struct FVector& Facing);
};


// Class Gaze.Gaze_PointOfInterest
// 0x0000 (0x0290 - 0x0290)
class UGaze_PointOfInterest : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_PointOfInterest");
		return ptr;
	}


	void RemoveTag(const struct FName& RemoveTag);
	void Register(class AGameStateBase* GameState);
	bool IsInGroup(const struct FName& GroupName);
	float GetRadius();
	struct FName GetPrimaryGroup();
	void Deregister(class AGameStateBase* GameState);
	void DebugDraw(const struct FColor& col);
	bool ContainsTag(const struct FName& checkTag);
	bool ContainsAnyTags(TArray<struct FName> checkTags);
	bool ContainsAllTags(TArray<struct FName> checkTags);
	void AddTag(const struct FName& AddTag);
};


// Class Gaze.Gaze_POI
// 0x0030 (0x02C0 - 0x0290)
class UGaze_POI : public UGaze_PointOfInterest
{
public:
	TArray<struct FName>                               Tags;                                                     // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               excludeFromScene;                                         // 0x02A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               groupNames;                                               // 0x02A8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_POI");
		return ptr;
	}


	void RemoveTag(const struct FName& RemoveTag);
	void Register(class AGameStateBase* GameState);
	bool IsInGroup(const struct FName& GroupName);
	float GetRadius();
	struct FName GetPrimaryGroup();
	void Deregister(class AGameStateBase* GameState);
	void DebugDraw(const struct FColor& col);
	bool ContainsTag(const struct FName& checkTag);
	bool ContainsAnyTags(TArray<struct FName> checkTags);
	bool ContainsAllTags(TArray<struct FName> checkTags);
	void AddTag(const struct FName& AddTag);
};


// Class Gaze.Gaze_POIContainer
// 0x0010 (0x0100 - 0x00F0)
class UGaze_POIContainer : public UActorComponent
{
public:
	TArray<class UGaze_PointOfInterest*>               allPOI;                                                   // 0x00F0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_POIContainer");
		return ptr;
	}


	void RemovePOI(class UGaze_PointOfInterest* poi);
	void AddPOI(class UGaze_PointOfInterest* poi);
};


// Class Gaze.Gaze_POI_Logger
// 0x0000 (0x0290 - 0x0290)
class UGaze_POI_Logger : public UGaze_PointOfInterest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_POI_Logger");
		return ptr;
	}

};


// Class Gaze.Gaze_POI_Visualiser
// 0x0000 (0x0290 - 0x0290)
class UGaze_POI_Visualiser : public UGaze_PointOfInterest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_POI_Visualiser");
		return ptr;
	}


	void DebugDraw(const struct FColor& col);
};


// Class Gaze.Gaze_Task
// 0x0028 (0x0118 - 0x00F0)
class UGaze_Task : public UActorComponent
{
public:
	class UGaze_Attention*                             attentionComponent;                                       // 0x00F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGaze_Perception*                            PerceptionComponent;                                      // 0x00F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              interestInTask;                                           // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               boredOfCurrentTask;                                       // 0x0104(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FName                                       interestingTag;                                           // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              interestingVelocity;                                      // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_Task");
		return ptr;
	}


	void Update(float DeltaTime);
	void LookForNewTask();
};


// Class Gaze.Gaze_VectorNode
// 0x0000 (0x0028 - 0x0028)
class UGaze_VectorNode : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_VectorNode");
		return ptr;
	}


	void Tick(float DeltaTime);
	void Replace(class UGaze_VectorNode* Source, class UGaze_VectorNode* Destination);
	struct FVector Evaluate();
};


// Class Gaze.Gaze_VectorActor
// 0x0010 (0x0038 - 0x0028)
class UGaze_VectorActor : public UGaze_VectorNode
{
public:
	class AActor*                                      targetPtr;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_VectorActor");
		return ptr;
	}


	void Tick(float DeltaTime);
	void SetActor(class AActor* T, const struct FName& B);
	struct FVector Evaluate();
};


// Class Gaze.Gaze_VectorBlend
// 0x0028 (0x0050 - 0x0028)
class UGaze_VectorBlend : public UGaze_VectorNode
{
public:
	class UGaze_VectorNode*                            startVector;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGaze_VectorNode*                            endVector;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGaze_VectorNode*                            parentVector;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGaze_FloatNode*                             curveFunction;                                            // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              currentPosition;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_VectorBlend");
		return ptr;
	}


	void Tick(float DeltaTime);
	void SetRange(class UGaze_VectorNode* S, class UGaze_VectorNode* E);
	void SetParent(class UGaze_VectorNode* P);
	void SetFunction(class UGaze_FloatNode* F);
	struct FVector Evaluate();
};


// Class Gaze.Gaze_VectorConstant
// 0x0010 (0x0038 - 0x0028)
class UGaze_VectorConstant : public UGaze_VectorNode
{
public:
	struct FVector                                     Value;                                                    // 0x0028(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_VectorConstant");
		return ptr;
	}


	void Tick(float DeltaTime);
	void SetVector(const struct FVector& V);
	struct FVector Evaluate();
};


// Class Gaze.Gaze_VectorPOI
// 0x0008 (0x0030 - 0x0028)
class UGaze_VectorPOI : public UGaze_VectorNode
{
public:
	class UGaze_PointOfInterest*                       targetPtr;                                                // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_VectorPOI");
		return ptr;
	}


	void Tick(float DeltaTime);
	void SetPOI(class UGaze_PointOfInterest* poi);
	struct FVector Evaluate();
};


// Class Gaze.Gaze_VectorReference
// 0x0008 (0x0030 - 0x0028)
class UGaze_VectorReference : public UGaze_VectorNode
{
public:
	class UGaze_VectorNode*                            payload;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gaze.Gaze_VectorReference");
		return ptr;
	}


	void Tick(float DeltaTime);
	void Replace(class UGaze_VectorNode* Source, class UGaze_VectorNode* Destination);
	struct FVector Evaluate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
