#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "EOakAISwarmRotation.h"
#include "OakAISwarmMovement.generated.h"

USTRUCT(BlueprintType)
struct FOakAISwarmMovement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    FGbxParam Acceleration;
    
    UPROPERTY(EditAnywhere)
    FGbxParam RotationRate;
    
    UPROPERTY(EditAnywhere)
    EOakAISwarmRotation RotationType;
    
    OAKGAME_API FOakAISwarmMovement();
};

