#pragma once
#include "CoreMinimal.h"
#include "MinimalAugmentSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FMinimalAugmentSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ActionAbilityHash;
    
    UPROPERTY()
    uint32 AugmentSlotHash;
    
    UPROPERTY()
    uint32 AugmentHash;
    
    OAKGAME_API FMinimalAugmentSlotInfo();
};

