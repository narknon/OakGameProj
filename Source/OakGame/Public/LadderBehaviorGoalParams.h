#pragma once
#include "CoreMinimal.h"
#include "InitialRotationAxisParams.h"
#include "LadderBehaviorGoalParams.generated.h"

USTRUCT(BlueprintType)
struct FLadderBehaviorGoalParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bControlPitch: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bControlYaw: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInterruptedByInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableInput: 1;
    
    UPROPERTY(EditAnywhere)
    FInitialRotationAxisParams Pitch;
    
    UPROPERTY(EditAnywhere)
    FInitialRotationAxisParams Yaw;
    
    OAKGAME_API FLadderBehaviorGoalParams();
};

