#pragma once
#include "CoreMinimal.h"
#include "MinimalAbilitSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FMinimalAbilitSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 AbilitySlotHash;
    
    UPROPERTY()
    uint32 AbilityHash;
    
    OAKGAME_API FMinimalAbilitSlotInfo();
};

