#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ControlledMoveState.generated.h"

class UGbxCharacterMovementComponent;
class AActor;
class UControlledMove;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FControlledMoveState {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* MovementComponentOwner;
    
    UPROPERTY(Transient)
    UControlledMove* CurrentMove;
    
    UPROPERTY(Transient)
    AActor* Instigator;
    
    UPROPERTY(Transient)
    float BaseSpeed;
    
    UPROPERTY(Transient)
    float Speed;
    
    UPROPERTY(Transient)
    float Runtime;
    
    UPROPERTY(Transient)
    AActor* TargetActor;
    
    UPROPERTY(Transient)
    FVector InitialDirection;
    
    UPROPERTY(Transient)
    FVector CurrentDirection;
    
    UPROPERTY(Transient)
    FVector FrameMoveVelocity;
    
    UPROPERTY(Transient)
    AActor* LastHitActor;
    
    UPROPERTY(Transient)
    float aForwardInput;
    
    UPROPERTY(Transient)
    float aStrafeInput;
    
    FControlledMoveState();
};

