#pragma once
#include "CoreMinimal.h"
#include "OakAbilityTimerSpec.h"
#include "OakAbilityTimer.generated.h"

USTRUCT(BlueprintType)
struct FOakAbilityTimer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FOakAbilityTimerSpec Spec;
    
    UPROPERTY(Transient)
    float Value;
    
public:
    OAKGAME_API FOakAbilityTimer();
};

