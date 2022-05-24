#pragma once
#include "CoreMinimal.h"
#include "EForwardDynamicsActivation.h"
#include "AnimNode_RigidBody.h"
#include "GbxAnimNode_ForwardDynamics.generated.h"

class UPhysicalAnimationProfileAsset;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxAnimNode_ForwardDynamics : public FAnimNode_RigidBody {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhysicalAnimationProfileAsset* ForwardDynamicsProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EForwardDynamicsActivation ForwardDynamicsActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PhysicsAssetStrengthDefinitionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TargetSimulationFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxSubstepCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTranslationDistanceUntilReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WorldSpaceVelocityBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WorldSpaceAngularVelocityBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JointAnchorPoseAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LinearJointDivergentTolerence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBypassSkelMeshSimulatePhysOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStripAnimationFromNonSimulationRelevantBones;
    
    FGbxAnimNode_ForwardDynamics();
};

