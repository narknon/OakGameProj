#pragma once
#include "CoreMinimal.h"
#include "OakActionAbilityEnumMaskHelper.generated.h"

USTRUCT(BlueprintType)
struct FOakActionAbilityEnumMaskHelper {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint32 Value;
    
public:
    OAKGAME_API FOakActionAbilityEnumMaskHelper();
};

