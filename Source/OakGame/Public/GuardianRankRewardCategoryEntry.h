#pragma once
#include "CoreMinimal.h"
#include "GuardianRankRewardCategoryEntry.generated.h"

class UGuardianRankRewardCategoryData;

USTRUCT(BlueprintType)
struct FGuardianRankRewardCategoryEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGuardianRankRewardCategoryData* RankRewardCategory;
    
    UPROPERTY()
    int32 NumCategoryTokens;
    
    OAKGAME_API FGuardianRankRewardCategoryEntry();
};

