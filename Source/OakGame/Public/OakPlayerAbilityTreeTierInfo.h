#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityTreeTierInfo.generated.h"

class UOakPlayerAbilityTreeTierData;

USTRUCT()
struct FOakPlayerAbilityTreeTierInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOakPlayerAbilityTreeTierData* TierData;
    
    OAKGAME_API FOakPlayerAbilityTreeTierInfo();
};

