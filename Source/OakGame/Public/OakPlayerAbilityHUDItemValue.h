#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityHUDItemValue.generated.h"

USTRUCT()
struct FOakPlayerAbilityHUDItemValue {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 StackCount;
    
    UPROPERTY()
    int32 PercentComplete;
    
    OAKGAME_API FOakPlayerAbilityHUDItemValue();
};

