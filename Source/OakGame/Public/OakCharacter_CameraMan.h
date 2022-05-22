#pragma once
#include "CoreMinimal.h"
#include "OakCharacter.h"
#include "OakCharacter_CameraMan.generated.h"

class UPawnMovementComponent;

UCLASS()
class AOakCharacter_CameraMan : public AOakCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BaseTurnRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    float BaseLookUpRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    float BaseRollRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MoveRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DetachedMoveRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    float CraneRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DegreesToMoveMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bAddDefaultMovementBindings;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPawnMovementComponent* MovementComponent;
    
    UPROPERTY(EditAnywhere)
    float AttachedRadius;
    
    AOakCharacter_CameraMan();
};

