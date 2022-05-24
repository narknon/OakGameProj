#pragma once
#include "CoreMinimal.h"
#include "GbxCharacterMovementComponent.h"
#include "GbxNavMovementOptions.h"
#include "GbxNavAvoidanceOptions.h"
#include "GbxNavAgent.h"
#include "GbxNavSlowdownData.h"
#include "StanceFloatValue.h"
#include "GbxNavPathingData.h"
#include "GbxNavCharacterMovementComponent.generated.h"

class AGbxNavWorld;
class UGbxNavComponent;
class UGbxNavMeshLayer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UGbxNavCharacterMovementComponent : public UGbxCharacterMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxNavMovementOptions NavMovementOptions;
    
    UPROPERTY(EditAnywhere)
    float NavClientPopDistance;
    
    UPROPERTY(EditAnywhere)
    FGbxNavAvoidanceOptions NavAvoidanceOptions;
    
    UPROPERTY(EditAnywhere)
    FGbxNavSlowdownData NavSlowdownOptions;
    
    UPROPERTY(Transient)
    bool bOverrideSlowdownNearGoal;
    
    UPROPERTY(Transient)
    FStanceFloatValue SlowdownSpeedOverride;
    
    UPROPERTY(Transient)
    AGbxNavWorld* GbxNavWorld;
    
    UPROPERTY(Export, Transient)
    UGbxNavComponent* GbxNavComponent;
    
    UPROPERTY(Transient)
    FGbxNavAgent Agent;
    
    UPROPERTY(Replicated, Transient)
    FGbxNavPathingData PathingData;
    
    UPROPERTY(Transient)
    UGbxNavMeshLayer* ForcedNavMeshLayer;
    
    UPROPERTY(Transient)
    bool bOverrideMaxAcceleration;
    
    UPROPERTY(Transient)
    float StanceMaxAcceleration;
    
public:
    UGbxNavCharacterMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

