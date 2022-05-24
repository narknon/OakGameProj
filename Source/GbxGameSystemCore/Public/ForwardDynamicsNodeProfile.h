#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EForwardDynamicsActivation.h"
#include "Engine/EngineTypes.h"
#include "ESimulationSpace.h"
#include "ForwardDynamicsNodeProfile.generated.h"

class UPhysicalAnimationProfileAsset;
class UPhysicsAsset;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FForwardDynamicsNodeProfile {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicalAnimationProfileAsset* ForwardDynamicsProfile;
    
    UPROPERTY(EditAnywhere)
    EForwardDynamicsActivation ForwardDynamicsActivation;
    
    UPROPERTY(EditAnywhere)
    FName PhysicsAssetStrengthDefinitionProfileName;
    
    UPROPERTY(EditAnywhere)
    int32 TargetSimulationFrequency;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSubstepCount;
    
    UPROPERTY(EditAnywhere)
    float MaxTranslationDistanceUntilReset;
    
    UPROPERTY(EditAnywhere)
    float LinearJointDivergentTolerence;
    
    UPROPERTY(EditAnywhere)
    float WorldSpaceVelocityBlend;
    
    UPROPERTY(EditAnywhere)
    float WorldSpaceAngularVelocityBlend;
    
    UPROPERTY(EditAnywhere)
    bool bBypassSkelMeshSimulatePhysOption;
    
    UPROPERTY(EditAnywhere)
    bool bStripAnimationFromNonSimulationRelevantBones;
    
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* OverridePhysicsAsset;
    
    UPROPERTY(EditAnywhere)
    FVector OverrideWorldGravity;
    
    UPROPERTY(EditAnywhere)
    FVector ExternalForce;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    
    UPROPERTY(EditAnywhere)
    bool bEnableWorldGeometry;
    
    UPROPERTY(EditAnywhere)
    ESimulationSpace SimulationSpace;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideWorldGravity;
    
    UPROPERTY(EditAnywhere)
    float CachedBoundsScale;
    
    UPROPERTY(EditAnywhere)
    bool bTransferBoneVelocities;
    
    UPROPERTY(EditAnywhere)
    bool bFreezeIncomingPoseOnStart;
    
    UPROPERTY(EditAnywhere)
    int32 LODThreshold;
    
    UPROPERTY(EditAnywhere)
    float LODInterpolationSpeed;
    
    FForwardDynamicsNodeProfile();
};

