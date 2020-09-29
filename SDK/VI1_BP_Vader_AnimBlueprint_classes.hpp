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

// AnimBlueprintGeneratedClass BP_Vader_AnimBlueprint.BP_Vader_AnimBlueprint_C
// 0x3234 (0x35F4 - 0x03C0)
class UBP_Vader_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1C34F45A46F370E8C45C6BBBDCEE9D9B;      // 0x03C8(0x0068)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F4DBDC3946C757A384FBD3AA0198BCDA;// 0x0430(0x00B8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4937F9B34730C052A8640482C1358F98; // 0x04F0(0x01C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_16A57F364001528BD7249D860A8FEB51;// 0x06B0(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F6564A4C4730D75EECCA229A2CAD10D4;// 0x0768(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7811DA324DBD0C75071E608606010E1A;// 0x07B0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AC7C457A4C63ADBDCE3BFC8997FC15B0;// 0x0868(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DE260120473DFB72931504AD306C6767;// 0x0920(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AF3ACEBB47B90831CCB942BECBB0831B;// 0x09D8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B81B3EB94769A469106B2182EC654627;// 0x0A90(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F67ABAA04BD7DB54A4D328A519739A22;// 0x0B48(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17731211426A53DC4DC682ADCE29A68C;// 0x0C00(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6E736AB748C38B6BA8D87495E2E0B09F;// 0x0CB8(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BC2F84934060856189A547AC5629041B;// 0x0D70(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_857DE07D4DC5E4782BD7E0B5035B8244;// 0x0E18(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5CBA0779421CA3A1AC424E9805D357F6;// 0x0E60(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8F44D0C946611929983EE8A0D2E93013;// 0x0F18(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_33398FB2435BAF15E6A69BA60386E38D;// 0x0FD0(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E1C03A6E40AF5213EB0A4882A6947A7C;// 0x1088(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_744B1BAF4E049CD141A97CA4904A27FE;// 0x1130(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5466709E45B3783F9A0E52917F608944;// 0x1180(0x0050)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_437A77DB45874EC6F892BF993DE8B498; // 0x11D0(0x01C0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E82BDAC84796DC59D55E36A641BD38D3;// 0x1390(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_97AB96594FC08865898B9DA26945AEC3;// 0x13D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4CDD1DD44486F2E3C7C5A7A27784C592;      // 0x1420(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_01D6B03A46C09CBD7994B4BC345F8D4D;      // 0x1488(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A2CE51694304A2C2A3C7939EBB12F613;// 0x14D0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_69DF05F54CF4331182468287CC4047AC;// 0x1588(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_87C6B8B348549490379E25AB00A19447;// 0x1640(0x0078)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_28A3052245895795A2CEE0A8F0B36248;     // 0x16B8(0x0098)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8375BFF247801B4E712BDFB617CAA50B;// 0x1750(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD46C09F4D8B55566A9903BC58F5FF30;// 0x17D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4D5D7EC7438408A293D467A6F846B51E;// 0x1850(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C8023949402B130F2666CBAE59775686;// 0x18C0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_9D089EE249FD67559FABA1B341A61A78;// 0x1908(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1344947C447595008E0C82A8E17A8358;// 0x1940(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BBD0C1194A4055F5BE82CB8135DEBB07;// 0x1988(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65D4B6EA47ACEE2D8E4CECAB8A1DF11E;// 0x1A60(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_92ECEC9948B9F438145D6EB1A7A9BB67;// 0x1AD0(0x00D0)
	struct FAnimNode_NTMotionField                     AnimGraphNode_NTMotionField_209AC48B452701F23435CFB5AF862097;// 0x1BA0(0x10B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3F9FE5834782D3CBDC4EE5B7E035894C;// 0x2C50(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B9CEB50B46912815041E8DB15A93769E;// 0x2CC8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D5EF3F4A451608045B892BB1FD8A78A4;// 0x2D70(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A1370AF341912110C69348B7239D6A61;// 0x2DC0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6067286E49E459E42C8A5EB42BA10B0E;      // 0x2E10(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C3D675DF4FEB94AE39146E842CBF492B;      // 0x2E78(0x0068)
	TArray<struct FTransform>                          Evades;                                                   // 0x2EE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x2EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              RemainingEvadeTime;                                       // 0x2EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2EFC(0x0004) MISSED OFFSET
	struct FNTStrike                                   CurrentStrike;                                            // 0x2F00(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNTStrike                                   CachedStrike;                                             // 0x2F80(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_Vader_C*                                 Vader;                                                    // 0x3000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAt_Location;                                          // 0x3008(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAt_Location_Old;                                      // 0x3014(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAt_Location_Delta;                                    // 0x3020(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAt_Alpha;                                             // 0x302C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAt_Target;                                            // 0x3030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta;                                                    // 0x3034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackAdd;                                                // 0x3038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x303C(0x0004) MISSED OFFSET
	struct FTransform                                  Blocked_Lhand_Trans;                                      // 0x3040(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Blocked_Rhand_Trans;                                      // 0x3070(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackStartPos;                                           // 0x30A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackAddAlpha;                                           // 0x30A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EStrikeDirection                                   AttackDir;                                                // 0x30A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_Txt;                                                // 0x30A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x30AA(0x0002) MISSED OFFSET
	float                                              RhandIK_multiplier;                                       // 0x30AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LhandIK_multiplier;                                       // 0x30B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_Obj;                                                // 0x30B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB];                                       // 0x30B5(0x000B) MISSED OFFSET
	struct FTransform                                  Rfoot_IK_Trans;                                           // 0x30C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Lfoot_IK_Trans;                                           // 0x30F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Rfoot_PV_Trans;                                           // 0x3120(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Lfoot_PV_Trans;                                           // 0x3150(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AttackBlocking_Weight_Crv;                                // 0x3180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x3188(0x0008) MISSED OFFSET
	struct FTransform                                  Blocked_Lhand_Trans_rewound;                              // 0x3190(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Blocked_Rhand_Trans_rewound;                              // 0x31C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Blocked_Lhand_Trans_Final;                                // 0x31F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Blocked_Rhand_Trans_Final;                                // 0x3220(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackAddAlpha_Modified;                                  // 0x3250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x3254(0x0004) MISSED OFFSET
	class UCurveFloat*                                 AttackBlocking_Alpha_Crv;                                 // 0x3258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      BlueD;                                                    // 0x3260(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      BlueL;                                                    // 0x3264(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      RedD;                                                     // 0x3268(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      RedL;                                                     // 0x326C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Counter;                                                  // 0x3270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockTime;                                                // 0x3274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_CapLimit;                                           // 0x3278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x3279(0x0007) MISSED OFFSET
	struct FString                                     Debug_String;                                             // 0x3280(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FrameCounter;                                             // 0x3290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaderTrackingScaler;                                      // 0x3294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaderSaberYawDelta;                                       // 0x3298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaderSaberYaw_F;                                          // 0x329C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    VaderSaberYaw;                                            // 0x32A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    VaderSaberYawOld;                                         // 0x32AC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              VaderSaberPitchDelta;                                     // 0x32B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaderSaberPitch_F;                                        // 0x32BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaderSaberPitchOld_F;                                     // 0x32C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x32C4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 PlayerTipTrackingPitchCrv;                                // 0x32C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 PlayerTipTrackingPitchShoulderCrv;                        // 0x32D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerSaber;                                              // 0x32D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x32E4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 PlayerTipTrackingCrv;                                     // 0x32E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VaderLeftVec;                                             // 0x32F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VaderFacingVec;                                           // 0x32FC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VaderPos;                                                 // 0x3308(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              VaderSaberWristRoll_F;                                    // 0x3314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaderSaberTrackAngle_F;                                   // 0x3318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VaderSaberTrack_B;                                        // 0x331C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x331D(0x0003) MISSED OFFSET
	float                                              VaderHeadTrackYawAngle_F;                                 // 0x3320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x3324(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           LookAt_Angle_Crv;                                         // 0x3328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    VaderHeadTrackRot;                                        // 0x3330(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              VaderHeadTrackPitchAngle_F;                               // 0x333C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LookAt_Toggle;                                            // 0x3340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x3341(0x0003) MISSED OFFSET
	struct FRotator                                    VaderHeadTrackTorsoRot;                                   // 0x3344(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           LookAt_TorsoAngle_Crv;                                    // 0x3350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData_Movement*               HeavyAttackPhase;                                         // 0x3358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaderSaberLeftSpring;                                     // 0x3360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatSpringState                           VaderSaberSpring;                                         // 0x3364(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               StepFW;                                                   // 0x336C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x336D(0x0003) MISSED OFFSET
	float                                              StepFWAlpha;                                              // 0x3370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerTip;                                                // 0x3374(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerHilt;                                               // 0x3380(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerSaberIntersect;                                     // 0x338C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Clashing;                                                 // 0x3398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x3399(0x0003) MISSED OFFSET
	float                                              VaderSaberPitch_Base;                                     // 0x339C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaderSaberPitchShoulder;                                  // 0x33A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TipDangerDistance;                                        // 0x33A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 PlayerTipDangerDistanceCrv;                               // 0x33A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VaderSaberGuardPos;                                       // 0x33B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VaderSaberTipPos;                                         // 0x33BC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DangerAdjustAngle;                                        // 0x33C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DangerAdjustAngleInit;                                    // 0x33CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DangerPosVader;                                           // 0x33D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DangerPos;                                                // 0x33DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DangerAdjustAngleOld;                                     // 0x33E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TipDangerDistanceOld;                                     // 0x33EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMotionFieldTarget                          request;                                                  // 0x33F0(0x0200) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SequenceBlendInterp;                                      // 0x35F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Vader_AnimBlueprint.BP_Vader_AnimBlueprint_C");
		return ptr;
	}


	void OnNotifyEnd_FC2BEC03475FAF96096CFC9F6CB6286E(const struct FName& NotifyName);
	void OnNotifyBegin_FC2BEC03475FAF96096CFC9F6CB6286E(const struct FName& NotifyName);
	void OnInterrupted_FC2BEC03475FAF96096CFC9F6CB6286E(const struct FName& NotifyName);
	void OnBlendOut_FC2BEC03475FAF96096CFC9F6CB6286E(const struct FName& NotifyName);
	void OnCompleted_FC2BEC03475FAF96096CFC9F6CB6286E(const struct FName& NotifyName);
	void OnNotifyEnd_5249341A49ABC72C3B67A5963E97DC30(const struct FName& NotifyName);
	void OnNotifyBegin_5249341A49ABC72C3B67A5963E97DC30(const struct FName& NotifyName);
	void OnInterrupted_5249341A49ABC72C3B67A5963E97DC30(const struct FName& NotifyName);
	void OnBlendOut_5249341A49ABC72C3B67A5963E97DC30(const struct FName& NotifyName);
	void OnCompleted_5249341A49ABC72C3B67A5963E97DC30(const struct FName& NotifyName);
	void OnNotifyEnd_648CFAEC4DFF02BE2BFE45BF8F76DBE9(const struct FName& NotifyName);
	void OnNotifyBegin_648CFAEC4DFF02BE2BFE45BF8F76DBE9(const struct FName& NotifyName);
	void OnInterrupted_648CFAEC4DFF02BE2BFE45BF8F76DBE9(const struct FName& NotifyName);
	void OnBlendOut_648CFAEC4DFF02BE2BFE45BF8F76DBE9(const struct FName& NotifyName);
	void OnCompleted_648CFAEC4DFF02BE2BFE45BF8F76DBE9(const struct FName& NotifyName);
	void OnNotifyEnd_8E2BB5BD433043AE69A08DB4ECE63B6A(const struct FName& NotifyName);
	void OnNotifyBegin_8E2BB5BD433043AE69A08DB4ECE63B6A(const struct FName& NotifyName);
	void OnInterrupted_8E2BB5BD433043AE69A08DB4ECE63B6A(const struct FName& NotifyName);
	void OnBlendOut_8E2BB5BD433043AE69A08DB4ECE63B6A(const struct FName& NotifyName);
	void OnCompleted_8E2BB5BD433043AE69A08DB4ECE63B6A(const struct FName& NotifyName);
	void OnNotifyEnd_73303423477FAEB1978AA8886163D54B(const struct FName& NotifyName);
	void OnNotifyBegin_73303423477FAEB1978AA8886163D54B(const struct FName& NotifyName);
	void OnInterrupted_73303423477FAEB1978AA8886163D54B(const struct FName& NotifyName);
	void OnBlendOut_73303423477FAEB1978AA8886163D54B(const struct FName& NotifyName);
	void OnCompleted_73303423477FAEB1978AA8886163D54B(const struct FName& NotifyName);
	void OnNotifyEnd_64516BB444AB9E323BE955A6B8C9C028(const struct FName& NotifyName);
	void OnNotifyBegin_64516BB444AB9E323BE955A6B8C9C028(const struct FName& NotifyName);
	void OnInterrupted_64516BB444AB9E323BE955A6B8C9C028(const struct FName& NotifyName);
	void OnBlendOut_64516BB444AB9E323BE955A6B8C9C028(const struct FName& NotifyName);
	void OnCompleted_64516BB444AB9E323BE955A6B8C9C028(const struct FName& NotifyName);
	void OnNotifyEnd_B920C56A4CB8446DDDE04F9BB677332E(const struct FName& NotifyName);
	void OnNotifyBegin_B920C56A4CB8446DDDE04F9BB677332E(const struct FName& NotifyName);
	void OnInterrupted_B920C56A4CB8446DDDE04F9BB677332E(const struct FName& NotifyName);
	void OnBlendOut_B920C56A4CB8446DDDE04F9BB677332E(const struct FName& NotifyName);
	void OnCompleted_B920C56A4CB8446DDDE04F9BB677332E(const struct FName& NotifyName);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_5CBA0779421CA3A1AC424E9805D357F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_6E736AB748C38B6BA8D87495E2E0B09F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_17731211426A53DC4DC682ADCE29A68C();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void Toggle_LookAt(bool On);
	void UpdateLookAtParams(float NewLookAt_Target, const struct FVector& NewLookAt_Location);
	void AnimNotify_ComboClipStart();
	void AnimNotify_AllowBlock();
	void AnimNotify_AllowStopBlade();
	void AnimNotify_EndAllowStopBlade();
	void AnimNotify_EndAllowBlock();
	void BlockBegins(bool bWeakPushback);
	void AnimNotify_StrikeUpRight();
	void AnimNotify_StrikeLeft();
	void AnimNotify_StrikeDown();
	void AnimNotify_StrikeDownRight();
	void AnimNotify_StrikeDownLeft();
	void AnimNotify_StrikeRight();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_F67ABAA04BD7DB54A4D328A519739A22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_8F44D0C946611929983EE8A0D2E93013();
	void DebugVader();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_B81B3EB94769A469106B2182EC654627();
	void BlockedAttack();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_33398FB2435BAF15E6A69BA60386E38D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_TwoBoneIK_437A77DB45874EC6F892BF993DE8B498();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_A2CE51694304A2C2A3C7939EBB12F613();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_AF3ACEBB47B90831CCB942BECBB0831B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_69DF05F54CF4331182468287CC4047AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_DE260120473DFB72931504AD306C6767();
	void BlockEnds();
	void VaderABP();
	void VaderOBJ();
	void FollowSaber();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_AC7C457A4C63ADBDCE3BFC8997FC15B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ApplyAdditive_87C6B8B348549490379E25AB00A19447();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_7811DA324DBD0C75071E608606010E1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_LegIK_28A3052245895795A2CEE0A8F0B36248();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_TransitionResult_8375BFF247801B4E712BDFB617CAA50B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_16A57F364001528BD7249D860A8FEB51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_TransitionResult_AD46C09F4D8B55566A9903BC58F5FF30();
	void Dumb();
	void EyeContact();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_TwoBoneIK_4937F9B34730C052A8640482C1358F98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_ModifyBone_F4DBDC3946C757A384FBD3AA0198BCDA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_BlendListByBool_92ECEC9948B9F438145D6EB1A7A9BB67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_NTMotionField_209AC48B452701F23435CFB5AF862097();
	void GetVader();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Vader_AnimBlueprint_AnimGraphNode_TwoWayBlend_3F9FE5834782D3CBDC4EE5B7E035894C();
	void Stare();
	void ExecuteUbergraph_BP_Vader_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
