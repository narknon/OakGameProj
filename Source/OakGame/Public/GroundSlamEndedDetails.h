#pragma once
#include "CoreMinimal.h"
#include "GroundSlamEndedDetails.generated.h"

USTRUCT(BlueprintType)
struct FGroundSlamEndedDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bInterrupted;
    
    UPROPERTY(BlueprintReadOnly)
    float ImpactVelocity;
    
    OAKGAME_API FGroundSlamEndedDetails();
};

