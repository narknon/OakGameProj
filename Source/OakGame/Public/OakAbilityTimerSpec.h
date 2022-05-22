#pragma once
#include "CoreMinimal.h"
#include "EOakAbilityTimerReplacePolicy.h"
#include "EOakAbilityTimerTickPolicy.h"
#include "OakAbilityTimerSpec.generated.h"

class UOakAbilityTimerData;

USTRUCT(BlueprintType)
struct FOakAbilityTimerSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UOakAbilityTimerData* Timer;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsInfinite;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRemoveOnPause;
    
    UPROPERTY(BlueprintReadWrite)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LoopCount;
    
    UPROPERTY(BlueprintReadWrite)
    EOakAbilityTimerReplacePolicy ReplacePolicy;
    
    UPROPERTY(BlueprintReadWrite)
    EOakAbilityTimerTickPolicy TickPolicy;
    
    OAKGAME_API FOakAbilityTimerSpec();
};

