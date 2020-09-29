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

// BlueprintGeneratedClass BP_Lightsaber.BP_Lightsaber_C
// 0x0335 (0x0AD5 - 0x07A0)
class ABP_Lightsaber_C : public ARPOCPickup_Lightsaber
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PFX_SC_Glow;                                              // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_Saber_High;                                            // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_Saber_Mid;                                             // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_Saber_Low;                                             // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ComboFocusRibbon;                                         // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_HumScale_39195903482D82BFA916B5AE741D7BAF;     // 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_39195903482D82BFA916B5AE741D7BAF;   // 0x07DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FastTurnOff_Timeline_NewTrack_0_DF9A56BF457410B78E412B9CD3F90658;// 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FastTurnOff_Timeline__Direction_DF9A56BF457410B78E412B9CD3F90658;// 0x07EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FastTurnOff_Timeline;                                     // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BladeScale_Fast_Light_7ED7350C4394A932562EE89759A1652B;   // 0x07F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BladeScale_Fast_7ED7350C4394A932562EE89759A1652B;         // 0x07FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BladeScale_Light_7ED7350C4394A932562EE89759A1652B;        // 0x0800(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BladeScale_NewTrack_0_7ED7350C4394A932562EE89759A1652B;   // 0x0804(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BladeScale__Direction_7ED7350C4394A932562EE89759A1652B;   // 0x0808(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0809(0x0007) MISSED OFFSET
	class UTimelineComponent*                          BladeScale;                                               // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ProtoScale_Light_CDF68DBA489CA3585BE2F98E9A5B72A9;        // 0x0818(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ProtoScale_NewTrack_0_CDF68DBA489CA3585BE2F98E9A5B72A9;   // 0x081C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ProtoScale__Direction_CDF68DBA489CA3585BE2F98E9A5B72A9;   // 0x0820(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	class UTimelineComponent*                          ProtoScale;                                               // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleBladeDownQuick_NewTrack_0_55FBB1AA49B9E296F92B898C4AC4B3F7;// 0x0830(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleBladeDownQuick__Direction_55FBB1AA49B9E296F92B898C4AC4B3F7;// 0x0834(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0835(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleBladeDownQuick;                                      // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 CutResistanceCurveAmp;                                    // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrackArcs;                                                // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	float                                              ArcPlaneMax_X;                                            // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcPlaneMin_X;                                            // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcPlaneMax_Y;                                            // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcPlaneMin_Y;                                            // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcPlaneMax_Z;                                            // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcPlaneMin_Z;                                            // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalisedOverload;                                       // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RumbleTick;                                               // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ENTHapticHands                                     HapticHands;                                              // 0x086C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x086D(0x0003) MISSED OFFSET
	class USkeletalMeshComponent*                      Hand_Mesh;                                                // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Grabbed;                                                  // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0879(0x0007) MISSED OFFSET
	class UCurveFloat*                                 SwooshingCurve;                                           // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSwoosh;                                                // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x088C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 HumLvl2Curve;                                             // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 HumAccCurve;                                              // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 HumDecCurve;                                              // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AudioHumVelocityCurve;                                    // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpSpeed;                                              // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmoothedVelocity;                                         // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CutResistanceCurve_Freq;                                  // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwooshValue;                                              // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwooshDeadzone;                                           // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwooshAudioValue;                                         // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAccValue;                                          // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x08D4(0x0004) MISSED OFFSET
	class ULightsaberBladeComponent*                   LightSaberBlade_Intention;                                // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Flicker;                                                  // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x08E4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 LightsaberCuttingFlicker;                                 // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 LightsaberOverloadFlicker;                                // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamWobble;                                               // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        FrameDirVel;                                              // 0x0900(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                IntInc;                                                   // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DirVelAcc;                                                // 0x0914(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioSaberStrain;                                         // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartPickedUp;                                            // 0x0928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0929(0x0007) MISSED OFFSET
	class ABP_WKNDMotionController_C*                  MotionController;                                         // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LightRadius;                                              // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SurfaceMaterial;                                          // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UCurveFloat*>                         CuttingCurves;                                            // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CuttingCurveIndex;                                        // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverloadOn;                                               // 0x0954(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Clash;                                                    // 0x0955(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0956(0x0002) MISSED OFFSET
	class UCurveFloat*                                 SaberThrobCurve;                                          // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeightLagAlpha;                                           // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClassWobble;                                              // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClassWobble_Max;                                          // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClassWobble_Delta;                                        // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWeaponMotionComponent*                      WeaponMotion;                                             // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsProtosaber;                                             // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0979(0x0003) MISSED OFFSET
	float                                              IdleVibrate;                                              // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleRumbleFreq;                                           // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleRumbleAmp;                                            // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RumbleTick_Scaled;                                        // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RumbleTick_Factor;                                        // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RumbleTick_Overload;                                      // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RumbleTickOverload_Min;                                   // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RumbleTickOverload_Scale;                                 // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChargeUpDown;                                             // 0x099C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x099D(0x0003) MISSED OFFSET
	class UCurveFloat*                                 LightsaberIdleLight;                                      // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OldTipLocation;                                           // 0x09A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentTipLocation;                                       // 0x09B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SaberMass;                                                // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECrystalColour>                        SaberColour;                                              // 0x09C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x09C5(0x0003) MISSED OFFSET
	class ABP_SaberDistort_C*                          BPSaberDistortRef;                                        // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PickedUp;                                                 // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              VFScale;                                                  // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               vaderSaber;                                               // 0x09E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECrystalQuality>                       SaberQuality;                                             // 0x09E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x09E6(0x0002) MISSED OFFSET
	float                                              trailVelRamp;                                             // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              trailVelOffset;                                           // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               comboCheck;                                               // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PoseSoundFXGate;                                          // 0x09F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x09F2(0x0002) MISSED OFFSET
	float                                              LightIntensity_Multiplier;                                // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightIntensity_Maximum;                                   // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightRadius_Multiplier;                                   // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightIntensity_Target;                                    // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightRadius_Target;                                       // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightSmoothControl;                                       // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightRadius_Start;                                        // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightIntensity_Start;                                     // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LightLerping;                                             // 0x0A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET
	float                                              LightSmoothControl_Time;                                  // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0A1C(0x0004) MISSED OFFSET
	class UWKNDGrabbableComponent*                     grabbable;                                                // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               TrainingDroid;                                            // 0x0A28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0A29(0x0007) MISSED OFFSET
	struct FString                                     RTPC_Saber_HumNorm_Vel;                                   // 0x0A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     RTPC_Saber_HumAggr_Vel;                                   // 0x0A40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Saber_HumVel_InterpTime;                                  // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x0A54(0x0004) MISSED OFFSET
	struct FString                                     RTPC_Saber_Throw;                                         // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    TurnedOn;                                                 // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TurnedOff;                                                // 0x0A78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               SnapTurning;                                              // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0A89(0x0003) MISSED OFFSET
	float                                              BladeIgnitionSpeed;                                       // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OriginalBladeScale;                                       // 0x0A90(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOTSaber;                                                // 0x0A9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0A9D(0x0003) MISSED OFFSET
	class UAkAudioEvent*                               SFX_Saber_On;                                             // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Saber_Off;                                            // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Saber_Whoosh;                                         // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Saber_ShortOut;                                       // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Saber_HandGrab;                                       // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Saber_Throw;                                          // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwooshHapticsMultiplier;                                  // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               basicMode;                                                // 0x0AD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lightsaber.BP_Lightsaber_C");
		return ptr;
	}


	void SetDeflectionScale(float NewScale);
	void UpdateInstigator();
	void AK_LoadBank();
	void AK_Throw();
	void AK_ShortOut();
	void RTPC_HumAggressive_Velocity(float Value, int InterpolationTimeMs);
	void RTPC_HumNormal_Velocity(float Value, int InterpolationTimeMs);
	void Ak_Hum_ManualOff();
	void Ak_Hum_ManualOn();
	void DoLightLerps();
	void RTPC_HumDistanceVolume();
	void FX_SaberDistort();
	void BlinkStart();
	void SetSaberTrailParameters(const struct FVector& Direction, float Velocity);
	void SetBladeWobble();
	void CalculateRumbleOverload(float Overload_Min, float Overload_Scale, float* RumbleLoopOverload);
	void CalculateSwoosh(float* SwooshValue);
	void CalculateHaptics_Swoosh(float* Frequency, float* Amplitude);
	void CalculateHaptics(float* Frequency, float* Amplitude);
	void FX_SaberTrail();
	void GetCutting(bool* Cutting);
	void OutputText(const struct FString& text, float Duration);
	void UserConstructionScript();
	void ScaleBladeDownQuick__FinishedFunc();
	void ScaleBladeDownQuick__UpdateFunc();
	void BladeScale__FinishedFunc();
	void BladeScale__UpdateFunc();
	void ProtoScale__FinishedFunc();
	void ProtoScale__UpdateFunc();
	void FastTurnOff_Timeline__FinishedFunc();
	void FastTurnOff_Timeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InpActEvt_Period_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Comma_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_T_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void SaberIsOn();
	void FlickerTicker();
	void SaberIsOff();
	void ReceiveOnPickedUp(class AActor** CurrentInstigator);
	void ReceiveOnReleased(class AActor** PreviousInstigator);
	void ReceiveOnUsed();
	void ReceiveOnInHand();
	void CallTestDoorBasic(class ATestDoorBasic_C* TestDoorBasic);
	void DoorHit(const struct FVector& HitLocation, const struct FVector& NormalImpulse);
	void BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DEBUG_ToggleLightsaber();
	void FlickerOveride();
	void Teleport_BlinkStart();
	void Teleport_BlinkStop();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void SaberIsOn_3();
	void SaberIsOff_3();
	void ReceiveOnOverload();
	void ReceiveOnBeenDisarmed();
	void inComboMode();
	void outComboMode();
	void ConfigureStrike1Audio();
	void ConfigureStrike2Audio();
	void ConfigureStrike3Audio();
	void ConfigureStrike4Audio();
	void ComboStrikeStarted();
	void PoseSFX_On();
	void PoseSFX_Off();
	void audio_SaberIsOff();
	void audio_SaberReleased();
	void SetNewLightIntensityMax(float Intensity_Max, float Radius_Max);
	void TrainingDroidUpdate(float BladeProgress);
	void TD_FXOff();
	void TD_FXOn();
	void Snap_Start();
	void Snap_Stop();
	void ReceiveOnFastTurnOff();
	void GameUnPaused(bool bShowPauseMenu);
	void GamePaused(bool bShowPauseMenu);
	void BeginSwoosh();
	void ExecuteUbergraph_BP_Lightsaber(int EntryPoint);
	void TurnedOff__DelegateSignature();
	void TurnedOn__DelegateSignature();
	void PickedUp__DelegateSignature(EControllerHand HoldingHand);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
