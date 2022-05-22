#pragma once
#include "CoreMinimal.h"
#include "EOakAbilityTimerResult.h"
#include "OakAbilityTimerResult.generated.h"

USTRUCT(BlueprintType)
struct FOakAbilityTimerResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EOakAbilityTimerResult Result;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PulsesThisFrame;
    
    UPROPERTY(BlueprintReadOnly)
    float TotalPulseTime;
    
    OAKGAME_API FOakAbilityTimerResult();
};

