#pragma once
#include "CoreMinimal.h"
#include "RepWindDirection.generated.h"

USTRUCT(BlueprintType)
struct FRepWindDirection {
    GENERATED_BODY()
public:
    UPROPERTY()
    float TargetYaw;
    
    UPROPERTY()
    float Duration;
    
    OAKGAME_API FRepWindDirection();
};

