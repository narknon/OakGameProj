#pragma once
#include "CoreMinimal.h"
#include "SplineTriggers.generated.h"

class ACarnivoraTrackBuilder;
class AOakTriggerBox;

USTRUCT(BlueprintType)
struct FSplineTriggers {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AOakTriggerBox> Trigger;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ACarnivoraTrackBuilder> Spline;
    
    UPROPERTY(EditAnywhere)
    bool bIsReverse;
    
    UPROPERTY(EditAnywhere)
    int32 NextSplineTriggerId;
    
    OAKGAME_API FSplineTriggers();
};

