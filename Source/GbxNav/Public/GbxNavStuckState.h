#pragma once
#include "CoreMinimal.h"
#include "GbxNavStuckState.generated.h"

class UWorld;
class UGbxNavComponent;
class AActor;
class UGbxCharacterMovementComponent;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxNavStuckState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UWorld* World;
    
    UPROPERTY(Export, Transient)
    UGbxNavComponent* NavComp;
    
    UPROPERTY(Transient)
    AActor* PathingActor;
    
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* GbxMoveComp;
    
    UPROPERTY(EditAnywhere)
    float StuckDistance;
    
    UPROPERTY(EditAnywhere)
    float StuckVelocity;
    
    UPROPERTY(EditAnywhere)
    float StuckWaitTime;
    
    UPROPERTY(EditAnywhere)
    bool bStuckFixEnabled;
    
    UPROPERTY(EditAnywhere)
    float StuckFixStartTime;
    
    UPROPERTY(EditAnywhere)
    float StuckFixStopTime;
    
public:
    FGbxNavStuckState();
};

