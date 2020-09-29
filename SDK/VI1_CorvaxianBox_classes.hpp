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

// BlueprintGeneratedClass CorvaxianBox.CorvaxianBox_C
// 0x03FC (0x0714 - 0x0318)
class ACorvaxianBox_C : public ACorvaxianBoxBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               SideButtonCollision4;                                     // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               SideButtonCollision3;                                     // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               SideButtonCollision2;                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               SideButtonCollision1;                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_CorvaxBox_WhispySmoke_Q;                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Side_PxrRectLight_3;                                      // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Side_PxrRectLight_4;                                      // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Side_PxrRectLight_5;                                      // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Side_PxrRectLight_2;                                      // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        LookAt_CubeButton_TargetPoint;                            // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLightButtonGlow;                                     // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_CorvaxBox_WhispySmoke;                                  // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Box_Opened;                                               // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsInteractionsComponent*               PhysicsInteractions;                                      // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Glow;                                                   // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CrystalBoxCollision;                                      // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Top4Collision;                                            // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Top3Collision;                                            // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Top2Collision;                                            // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Top1Collision;                                            // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BaseCollision;                                            // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               DoorXCollision;                                           // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               DoorNegXCollision;                                        // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               DoorYCollision;                                           // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               DoorNegYCollision;                                        // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TopButtonPhysics;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_center;                                                // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   SideButton4;                                              // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   SideButton3;                                              // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   SideButton2;                                              // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   SideButton1;                                              // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   TopButton;                                                // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Lattice_4;                                                // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Lattice_3;                                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Lattice_2;                                                // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Lattice_1;                                                // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDGrabbableComponent*                     WKNDGrabbable;                                            // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   BoxGrabLocator;                                           // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPoseableMeshComponent*                      PoseableMesh;                                             // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_NewTrack_0_D2A44FCC4B22E2C0911758A2F867D277;   // 0x0468(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_D2A44FCC4B22E2C0911758A2F867D277;   // 0x046C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SideButtonPulse_NewTrack_0_2B4C76B541F6B77E24E9D4A4DA5B3972;// 0x0478(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SideButtonPulse__Direction_2B4C76B541F6B77E24E9D4A4DA5B3972;// 0x047C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SideButtonPulse;                                          // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EnableBoxEmissive_NewTrack_0_0D4D9A6245D5ABC28687B784A84E6D12;// 0x0488(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EnableBoxEmissive__Direction_0D4D9A6245D5ABC28687B784A84E6D12;// 0x048C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EnableBoxEmissive;                                        // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RampSmokeOn_OpacityGain_F56D328443307C26169A1DA396102A32; // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RampSmokeOn__Direction_F56D328443307C26169A1DA396102A32;  // 0x049C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RampSmokeOn;                                              // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RampOnBoxGlow_Glow_AC4422DB4ED79C25A1B1B59E65DF5B06;      // 0x04A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RampOnBoxGlow__Direction_AC4422DB4ED79C25A1B1B59E65DF5B06;// 0x04AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RampOnBoxGlow;                                            // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RampOffTopButtonLgt_LightGain_DC228A9A421A45AAEE4DE7B5611BFA51;// 0x04B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RampOffTopButtonLgt__Direction_DC228A9A421A45AAEE4DE7B5611BFA51;// 0x04BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RampOffTopButtonLgt;                                      // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TopButtonLgtRampOn_NewTrack_0_8A137466409B92549EF8D580A0DFB3C5;// 0x04C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TopButtonLgtRampOn__Direction_8A137466409B92549EF8D580A0DFB3C5;// 0x04CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TopButtonLgtRampOn;                                       // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ToButtonLgtPulse_NewTrack_0_626102624AB511072FA1DFBBDF68D94C;// 0x04D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ToButtonLgtPulse__Direction_626102624AB511072FA1DFBBDF68D94C;// 0x04DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ToButtonLgtPulse;                                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SparkleBurst_Burst_7E5B24B64B0C78A9D0B36ABC331A9EC7;      // 0x04E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SparkleBurst__Direction_7E5B24B64B0C78A9D0B36ABC331A9EC7; // 0x04EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SparkleBurst;                                             // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SmokeBurst_Init_TL_AlphaGain_E5EEE60046427E85920AE0BEFF70029B;// 0x04F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SmokeBurst_Init_TL_VelGain_E5EEE60046427E85920AE0BEFF70029B;// 0x04FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SmokeBurst_Init_TL_EmissionGain_E5EEE60046427E85920AE0BEFF70029B;// 0x0500(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SmokeBurst_Init_TL_ColorGain_E5EEE60046427E85920AE0BEFF70029B;// 0x0504(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SmokeBurst_Init_TL__Direction_E5EEE60046427E85920AE0BEFF70029B;// 0x0508(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SmokeBurst_Init_TL;                                       // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InitCrystalGlow_Pulse_6072EF5D405F8664FCB093A5CAB4BF06;   // 0x0518(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    InitCrystalGlow__Direction_6072EF5D405F8664FCB093A5CAB4BF06;// 0x051C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          InitCrystalGlow;                                          // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CrystalPulse_Pulse_EC1932344144CEB4B990EEBCD023761D;      // 0x0528(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CrystalPulse__Direction_EC1932344144CEB4B990EEBCD023761D; // 0x052C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CrystalPulse;                                             // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RampSmokeDownEnd_AlphaGain_67C4040B47C2E4C3EA07569C0381E24C;// 0x0538(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RampSmokeDownEnd_VelGain_67C4040B47C2E4C3EA07569C0381E24C;// 0x053C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RampSmokeDownEnd_EmissionGain_67C4040B47C2E4C3EA07569C0381E24C;// 0x0540(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RampSmokeDownEnd_ColorGain_67C4040B47C2E4C3EA07569C0381E24C;// 0x0544(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RampSmokeDownEnd__Direction_67C4040B47C2E4C3EA07569C0381E24C;// 0x0548(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	class UTimelineComponent*                          RampSmokeDownEnd;                                         // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SmokeBurst_Sec_TL_AlphaGain_471B98FB443F77A8A54AB885E026AFD9;// 0x0558(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SmokeBurst_Sec_TL_VelGain_471B98FB443F77A8A54AB885E026AFD9;// 0x055C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SmokeBurst_Sec_TL_EmissionGain_471B98FB443F77A8A54AB885E026AFD9;// 0x0560(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SmokeBurst_Sec_TL_ColorGain_471B98FB443F77A8A54AB885E026AFD9;// 0x0564(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SmokeBurst_Sec_TL__Direction_471B98FB443F77A8A54AB885E026AFD9;// 0x0568(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SmokeBurst_Sec_TL;                                        // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SideWallLightRampOut_NewTrack_0_C4105BCF4A26C621DC8373980C1D70F6;// 0x0578(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SideWallLightRampOut__Direction_C4105BCF4A26C621DC8373980C1D70F6;// 0x057C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x057D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SideWallLightRampOut;                                     // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SideWallLightRampIn_NewTrack_0_F8477DA747F8E54E86489C83C7AA9032;// 0x0588(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SideWallLightRampIn__Direction_F8477DA747F8E54E86489C83C7AA9032;// 0x058C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SideWallLightRampIn;                                      // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Time_1_0__D10CF3594D60671F81F2C3853CAC24D9;    // 0x0598(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_D10CF3594D60671F81F2C3853CAC24D9;   // 0x059C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x059D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Doors_Retract_Doors_Z_D44DE54145429F91DF1819984DEB5F38;   // 0x05A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Retract_DoorY_Y_D44DE54145429F91DF1819984DEB5F38;   // 0x05AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Retract_DoorNgY_Y_D44DE54145429F91DF1819984DEB5F38; // 0x05B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Retract_DoorX_X_D44DE54145429F91DF1819984DEB5F38;   // 0x05B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Retract_DoorNgX_X_D44DE54145429F91DF1819984DEB5F38; // 0x05B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Doors_Retract__Direction_D44DE54145429F91DF1819984DEB5F38;// 0x05BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x05BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Doors_Retract;                                            // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Doors_Close_DoorY_Y_4952D3A041B320138C099E9039B30BB2;     // 0x05C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Close_DoorNgY_Y_4952D3A041B320138C099E9039B30BB2;   // 0x05CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Close_DoorX_X_4952D3A041B320138C099E9039B30BB2;     // 0x05D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Close_DoorNgX_X_4952D3A041B320138C099E9039B30BB2;   // 0x05D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Close_Rotation_4952D3A041B320138C099E9039B30BB2;    // 0x05D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Doors_Close__Direction_4952D3A041B320138C099E9039B30BB2;  // 0x05DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Doors_Close;                                              // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Extend_Button_TopButton_Z_F01B48754B97E9D1E8E1369C19478A6D;// 0x05E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Extend_Button__Direction_F01B48754B97E9D1E8E1369C19478A6D;// 0x05EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x05ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Extend_Button;                                            // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Doors_Rotate_DoorY_Y_49804A8A47EFE26AD0916887244AC64E;    // 0x05F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Rotate_DoorNgY_Y_49804A8A47EFE26AD0916887244AC64E;  // 0x05FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Rotate_DoorX_X_49804A8A47EFE26AD0916887244AC64E;    // 0x0600(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Rotate_DoorNgX_X_49804A8A47EFE26AD0916887244AC64E;  // 0x0604(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Rotate_Rotation_49804A8A47EFE26AD0916887244AC64E;   // 0x0608(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Doors_Rotate__Direction_49804A8A47EFE26AD0916887244AC64E; // 0x060C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x060D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Doors_Rotate;                                             // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Doors_Translate_Doors_Z_3230E5CD4FFBCE0EC9BCC082BC8D654F; // 0x0618(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Translate_DoorY_Y_3230E5CD4FFBCE0EC9BCC082BC8D654F; // 0x061C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Translate_DoorNgY_Y_3230E5CD4FFBCE0EC9BCC082BC8D654F;// 0x0620(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Translate_DoorX_X_3230E5CD4FFBCE0EC9BCC082BC8D654F; // 0x0624(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Doors_Translate_DoorNgX_X_3230E5CD4FFBCE0EC9BCC082BC8D654F;// 0x0628(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Doors_Translate__Direction_3230E5CD4FFBCE0EC9BCC082BC8D654F;// 0x062C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x062D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Doors_Translate;                                          // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Retract_Button_TopButton_Z_FC64F6C0469D0E34AAEC2EBCF6F08F69;// 0x0638(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Retract_Button__Direction_FC64F6C0469D0E34AAEC2EBCF6F08F69;// 0x063C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Retract_Button;                                           // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBoxGrabbed;                                             // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPuzzleComplete;                                         // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UMaterialInstanceDynamic*                    EmissiveMaterial;                                         // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TopButtonPressed;                                         // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PuzzleComplete;                                           // 0x0671(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x6];                                       // 0x0672(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTopButtonPressed;                                       // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPuzzleInteractionsDone;                                 // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              LightIntensity;                                           // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x069C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSideButtonPressed;                                      // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               SideButtonPressed;                                        // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Static_Box;                                               // 0x06B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x6];                                       // 0x06B2(0x0006) MISSED OFFSET
	class UMaterialExpressionCollectionParameter*      MPC_FX;                                                   // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightButtonIntensity;                                     // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	class ATargetPoint*                                buttontarget;                                             // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              V_Smoke_EmissionGain;                                     // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              V_Smoke_VelGain;                                          // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              V_Smoke_ColorGain;                                        // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              V_Smoke_AlphaGain;                                        // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              V_BasicSmoke_EmissionGain;                                // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlashingButtonsState;                                     // 0x06E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	class UAkAudioEvent*                               SFX_GlowPulse_lp;                                         // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_GlowSmoke_lp;                                         // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_CrystalGlow_lp;                                       // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSantaCruz;                                              // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	float                                              SideButtonIntensity;                                      // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SideButtonAutoPush;                                       // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	float                                              EmissiveGain;                                             // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              emissiveButtonGain;                                       // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CorvaxianBox.CorvaxianBox_C");
		return ptr;
	}


	void LockSideButton(int Index);
	void LockSideButtons();
	void InitializeLattice(class UChildActorComponent* Child_Actor, const struct FName& Bone_Prefix);
	void InitializeLattices();
	void SetPointLightAttr(class UChildActorComponent* Point_Light_Input, float Light_Intensity, bool Light_Visibility);
	void SetSmokeAttrs(bool Set_Values, float BasicSmoke_EmissionGain, float Smoke_EmissionGain, float Smoke_VelGain, float Smoke_ColorGain, float Smoke_AlphaGain);
	void SetDustSpawnRate(float Spawn_Rate_Input);
	void SetSideAreaLights(float Light_Intensity, bool Light_Visibility, float Light_Gain);
	void SetRecAreaLightAttr(class UChildActorComponent* Rect_Area_Light_Input, float Light_Intensity, bool Light_Visibility);
	void SetupHaptics(const TScriptInterface<class UXLABInteractionHandler>& Handler);
	void TranslateDoors(float DoorNgX_X, float DoorX_X, float DoorNgY_Y, float DoorY_Y, float Doors_Z);
	void SetAllLatticeButtonInteractionEnabled(bool bEnabled);
	void SetLatticeButtonInteractionEnabled(class UChildActorComponent* Lattice, bool bEnabled, int Index);
	void ForceDropBox();
	void RetractAllPistonsAllLattices(float extension);
	void RetractAllPistons(class UChildActorComponent* Lattice, float extension);
	void ExtendAllPistonsAllLattices(float extension);
	void ExtendAllPistons(class UChildActorComponent* Lattice, float extension);
	void RetractSideButtons();
	void RetractSideButton(class UChildActorComponent* Lattice, int Side_Id);
	void EnableSideButtons(bool Should_Enable);
	void ExtendSideButton(class UChildActorComponent* Lattice, float extension, int SideId);
	void ExtendSideButtons(float extension);
	void PlayRandomPatternAnimations();
	void PlayRandomPatternAnimation(class UChildActorComponent* Lattice);
	void UserConstructionScript();
	void Retract_Button__FinishedFunc();
	void Retract_Button__UpdateFunc();
	void Doors_Translate__FinishedFunc();
	void Doors_Translate__UpdateFunc();
	void Doors_Rotate__FinishedFunc();
	void Doors_Rotate__UpdateFunc();
	void Extend_Button__FinishedFunc();
	void Extend_Button__UpdateFunc();
	void Doors_Close__FinishedFunc();
	void Doors_Close__UpdateFunc();
	void Doors_Retract__FinishedFunc();
	void Doors_Retract__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ToButtonLgtPulse__FinishedFunc();
	void ToButtonLgtPulse__UpdateFunc();
	void TopButtonLgtRampOn__FinishedFunc();
	void TopButtonLgtRampOn__UpdateFunc();
	void SideWallLightRampIn__FinishedFunc();
	void SideWallLightRampIn__UpdateFunc();
	void SideWallLightRampOut__FinishedFunc();
	void SideWallLightRampOut__UpdateFunc();
	void CrystalPulse__FinishedFunc();
	void CrystalPulse__UpdateFunc();
	void SmokeBurst_Init_TL__FinishedFunc();
	void SmokeBurst_Init_TL__UpdateFunc();
	void SmokeBurst_Sec_TL__FinishedFunc();
	void SmokeBurst_Sec_TL__UpdateFunc();
	void RampSmokeDownEnd__FinishedFunc();
	void RampSmokeDownEnd__UpdateFunc();
	void InitCrystalGlow__FinishedFunc();
	void InitCrystalGlow__UpdateFunc();
	void SparkleBurst__FinishedFunc();
	void SparkleBurst__UpdateFunc();
	void RampOffTopButtonLgt__FinishedFunc();
	void RampOffTopButtonLgt__UpdateFunc();
	void RampOnBoxGlow__FinishedFunc();
	void RampOnBoxGlow__UpdateFunc();
	void RampSmokeOn__FinishedFunc();
	void RampSmokeOn__UpdateFunc();
	void SideButtonPulse__FinishedFunc();
	void SideButtonPulse__UpdateFunc();
	void EnableBoxEmissive__FinishedFunc();
	void EnableBoxEmissive__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionContactEvent__DelegateSignature(const struct FName& InteractionName, class UPrimitiveComponent* ContactComponent);
	void BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_2_InteractionContactEvent__DelegateSignature(const struct FName& InteractionName, class UPrimitiveComponent* ContactComponent);
	void ReceiveBeginPlay();
	void On_BoxGrab_Interaction(EXLABInteractionEventType InteractionEventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive);
	void Play_Opening_Animation();
	void Top_Button_Pressed();
	void Side_Button_Pressed();
	void OnButtonPressed(const struct FName& ButtonName);
	void FadeOutLight();
	void FadeInLight();
	void BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature(const struct FName& InteractionName);
	void Show_Complete_Box(bool DisableEffects);
	void HideEffects();
	void Corvaxian_LookAtStart();
	void StartModulatingCrystalEmissive();
	void StopModulatingCrystalEmissive();
	void Disable_All_VFX_Emissve();
	void TurnOnBoxGlow();
	void TurnOffBoxGlow();
	void Disable(bool Value);
	void ExecuteUbergraph_CorvaxianBox(int EntryPoint);
	void OnSideButtonPressed__DelegateSignature();
	void OnPuzzleInteractionsDone__DelegateSignature();
	void OnTopButtonPressed__DelegateSignature();
	void OnPuzzleComplete__DelegateSignature();
	void OnBoxGrabbed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
