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

// Class NTFlex.KismetFlexLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetFlexLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTFlex.KismetFlexLibrary");
		return ptr;
	}


	void STATIC_StopSynchronisingComponentWithFlex(class UPrimitiveComponent* Component);
	void STATIC_StartSynchronisingComponentWithFlex(class UPrimitiveComponent* Component);
	bool STATIC_GetComponentIsSynchronisingWithFlex(class UPrimitiveComponent* Component);
};


// Class NTFlex.NTFlexChainComponent
// 0x0230 (0x0980 - 0x0750)
class UNTFlexChainComponent : public UProceduralMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x0750(0x01F8) MISSED OFFSET
	class UStaticMesh*                                 LinkMesh;                                                 // 0x0948(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LinkOverlap;                                              // 0x0950(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ChainLength;                                              // 0x0954(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParticleMass;                                             // 0x0958(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionDistanceMultiplier;                              // 0x095C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PrimarySpringCoefficient;                                 // 0x0960(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SecondarySpringCoefficient;                               // 0x0964(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpringLengthAdjustmentMultiplier;                         // 0x0968(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x096C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0970(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0978(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTFlex.NTFlexChainComponent");
		return ptr;
	}


	struct FVector GetLastCutLocation(class AActor* CuttingActor);
};


// Class NTFlex.NTFlexClothComponent
// 0x0660 (0x0DB0 - 0x0750)
class UNTFlexClothComponent : public UProceduralMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x515];                                     // 0x0750(0x0515) MISSED OFFSET
	bool                                               bBuildFromMesh;                                           // 0x0C65(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0C66(0x0002) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x0C68(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENTFlexClothMeshTopology                           MeshTopology;                                             // 0x0C70(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0C71(0x0003) MISSED OFFSET
	int                                                ParticlesAcross;                                          // 0x0C74(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ParticlesDown;                                            // 0x0C78(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClothWidth;                                               // 0x0C7C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClothHeight;                                              // 0x0C80(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParticleMass;                                             // 0x0C84(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParticleRadius;                                           // 0x0C88(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StructuralCoefficient;                                    // 0x0C8C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StructuralSlack;                                          // 0x0C90(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShearCoefficient;                                         // 0x0C94(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShearSlack;                                               // 0x0C98(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BendingCoefficient;                                       // 0x0C9C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BendingSlack;                                             // 0x0CA0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RelaxationFactor;                                         // 0x0CA4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionDistance;                                        // 0x0CA8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParticleCollisionMargin;                                  // 0x0CAC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShapeCollisionMargin;                                     // 0x0CB0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectedByWindSources;                                   // 0x0CB4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0CB5(0x0003) MISSED OFFSET
	float                                              WindStrength;                                             // 0x0CB8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalWindDirection;                                       // 0x0CBC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Lift;                                                     // 0x0CC8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Drag;                                                     // 0x0CCC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0CD0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0CD4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SimulationWarmupTime;                                     // 0x0CD8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParticleNoiseX;                                           // 0x0CDC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CutLifetime;                                              // 0x0CE0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeEndCut;                                         // 0x0CE4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CutEdgeCooldownTime;                                      // 0x0CE8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FallingClothBurnTime;                                     // 0x0CEC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParticleBurnTime;                                         // 0x0CF0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0CF4(0x0004) MISSED OFFSET
	class UParticleSystem*                             BurnParticleSystem;                                       // 0x0CF8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  BurnSound;                                                // 0x0D00(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BurnSoundFadeIn;                                          // 0x0D08(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BurnSoundFadeOut;                                         // 0x0D0C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxBurningEffects;                                        // 0x0D10(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnableTearing;                                            // 0x0D14(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0D15(0x0003) MISSED OFFSET
	float                                              TearThreshold;                                            // 0x0D18(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxStrain;                                                // 0x0D1C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AttachAtTop;                                              // 0x0D20(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0D21(0x0003) MISSED OFFSET
	struct FVector                                     AttachBarOffset;                                          // 0x0D24(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    AttachBarRotation;                                        // 0x0D30(0x000C) (Edit, IsPlainOldData)
	float                                              LengthFixedAtTop;                                         // 0x0D3C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FFlexClothAttachSphere>              AttachSpheres;                                            // 0x0D40(0x0010) (Edit, ZeroConstructor)
	class UMaterialInterface*                          ClothMaterial;                                            // 0x0D50(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           ClothPhysicalMaterial;                                    // 0x0D58(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0D60(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               StartEnabled;                                             // 0x0D64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugCuttingTriangles;                                    // 0x0D65(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0D66(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCutBegin;                                               // 0x0D68(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCutEnd;                                                 // 0x0D78(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnContactBegin;                                           // 0x0D88(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnContactEnd;                                             // 0x0D98(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0DA8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTFlex.NTFlexClothComponent");
		return ptr;
	}


	void UpdateCut(class AActor* CuttingActor, const struct FVector& CutEntryLocation, const struct FVector& CutExitLocation);
	void StartCut(class AActor* CuttingActor);
	void SetSimulationEnabled(bool Enabled);
	bool IsBeingCut();
	float GetWindStrength();
	bool GetSimulationEnabled();
	TArray<struct FVector> GetCutLocations();
	TArray<struct FFlexClothContactEvent> GetContacts();
	float GetClothStrain(const struct FVector& Position);
	struct FVector GetAproxCutLocation();
	void EndCut(class AActor* CuttingActor);
};


// Class NTFlex.NTFlexManagerComponent
// 0x0030 (0x0120 - 0x00F0)
class UNTFlexManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 TrackedComponents;                                        // 0x0100(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UNTFlexWindSourceComponent*>          WindSourceComponents;                                     // 0x0110(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTFlex.NTFlexManagerComponent");
		return ptr;
	}

};


// Class NTFlex.NTFlexSettings
// 0x0008 (0x0030 - 0x0028)
class UNTFlexSettings : public UObject
{
public:
	int                                                MaxSolverUpdatesPerFrame;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               OnlyUpdateComponentsInFOV;                                // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTFlex.NTFlexSettings");
		return ptr;
	}

};


// Class NTFlex.NTFlexWindSource
// 0x0008 (0x0320 - 0x0318)
class ANTFlexWindSource : public AActor
{
public:
	class UNTFlexWindSourceComponent*                  WindSourceComponent;                                      // 0x0318(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTFlex.NTFlexWindSource");
		return ptr;
	}

};


// Class NTFlex.NTFlexWindSourceComponent
// 0x0040 (0x02D0 - 0x0290)
class UNTFlexWindSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0290(0x0024) MISSED OFFSET
	float                                              Radius;                                                   // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindStrength;                                             // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindVariation;                                            // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindVariationWavelength;                                  // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFlexWindFalloffType                               WindFalloff;                                              // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x02C5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTFlex.NTFlexWindSourceComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
