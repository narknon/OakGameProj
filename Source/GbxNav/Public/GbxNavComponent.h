#pragma once
#include "CoreMinimal.h"
#include "NavComponent.h"
#include "GbxNavForwardState.h"
#include "GbxNavStuckState.h"
#include "GbxNavAgent.h"
#include "GbxUserEdgeState.h"
#include "GbxNavCorrecter.h"
#include "GbxReachabilityState.h"
#include "GbxNavMovementOptions.h"
#include "GbxNavAvoidanceOptions.h"
#include "GbxNavComponent.generated.h"

class UCapsuleComponent;
class AGbxNavWorld;
class UHavokPathFindingData;
class UHavokMovementData;
class AAIController;
class UGbxNavCharacterMovementComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UGbxNavComponent : public UNavComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxNavForwardState ForwardState;
    
    UPROPERTY(EditAnywhere)
    FGbxNavStuckState StuckState;
    
    UPROPERTY(Transient)
    AGbxNavWorld* GbxNavWorld;
    
    UPROPERTY(Transient)
    UHavokMovementData* OverrideMovementData;
    
    UPROPERTY(Transient)
    UHavokPathFindingData* OverridePathFindingData;
    
    UPROPERTY(Export, Transient)
    UCapsuleComponent* MyCapsule;
    
    UPROPERTY(Transient)
    AAIController* MyAIController;
    
    UPROPERTY(Export, Transient)
    UGbxNavCharacterMovementComponent* MyMovement;
    
    UPROPERTY(Transient)
    FGbxNavAgent Agent;
    
    UPROPERTY(Transient)
    FGbxUserEdgeState UserEdgeState;
    
    UPROPERTY(Transient)
    FGbxNavCorrecter NavCorrecter;
    
    UPROPERTY(Transient)
    FGbxReachabilityState Reachability;
    
    UPROPERTY(Transient)
    FGbxNavMovementOptions MovementOptions;
    
    UPROPERTY(Transient)
    FGbxNavAvoidanceOptions AvoidanceOptions;
    
public:
    UGbxNavComponent();
    UFUNCTION(BlueprintCallable)
    void TryMoving(float fDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetPathFindingData(UHavokPathFindingData* NewPathFindingData);
    
    UFUNCTION(BlueprintCallable)
    void ResetPathFindingData();
    
    UFUNCTION(BlueprintPure)
    UHavokPathFindingData* GetPathFindingData() const;
    
};

