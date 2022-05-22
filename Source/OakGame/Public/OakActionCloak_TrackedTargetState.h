#pragma once
#include "CoreMinimal.h"
#include "OakActionCloak_TrackedTargetState.generated.h"

class AActor;

USTRUCT(Atomic, BlueprintType)
struct FOakActionCloak_TrackedTargetState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* TrackedTarget;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ConsecutiveShotCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ShotsRemaining;
    
    OAKGAME_API FOakActionCloak_TrackedTargetState();
};

