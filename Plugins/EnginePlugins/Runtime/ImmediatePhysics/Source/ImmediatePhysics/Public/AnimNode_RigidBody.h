#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ESimulationSpace.h"
#include "BoneContainer.h"
#include "AnimNode_RigidBody.generated.h"

class UPhysicsAsset;

USTRUCT(BlueprintType)
struct IMMEDIATEPHYSICS_API FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* OverridePhysicsAsset;
    
    UPROPERTY(EditAnywhere)
    FVector OverrideWorldGravity;
    
    UPROPERTY(EditAnywhere)
    FVector ExternalForce;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentLinearAccScale;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentLinearVelScale;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentAppliedLinearAccClamp;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    
    UPROPERTY(EditAnywhere)
    bool bEnableWorldGeometry;
    
    UPROPERTY(EditAnywhere)
    ESimulationSpace SimulationSpace;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BaseBoneRef;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideWorldGravity;
    
    UPROPERTY(EditAnywhere)
    float CachedBoundsScale;
    
    UPROPERTY(EditAnywhere)
    bool bTransferBoneVelocities;
    
    UPROPERTY(EditAnywhere)
    bool bFreezeIncomingPoseOnStart;
    
private:
    UPROPERTY()
    bool bComponentSpaceSimulation;
    
public:
    FAnimNode_RigidBody();
};

