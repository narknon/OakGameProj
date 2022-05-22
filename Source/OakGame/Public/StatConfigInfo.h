#pragma once
#include "CoreMinimal.h"
#include "StatConfigInfo.generated.h"

USTRUCT(BlueprintType)
struct FStatConfigInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FText StatName;
    
    UPROPERTY(Transient)
    uint8 PercentCompletion;
    
    OAKGAME_API FStatConfigInfo();
};

