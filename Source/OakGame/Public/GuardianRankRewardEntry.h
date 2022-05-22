#pragma once
#include "CoreMinimal.h"
#include "GuardianRankRewardEntry.generated.h"

class UGuardianRankRewardData;

USTRUCT(BlueprintType)
struct FGuardianRankRewardEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGuardianRankRewardData* RankReward;
    
    UPROPERTY()
    int32 NumTokens;
    
    OAKGAME_API FGuardianRankRewardEntry();
};

