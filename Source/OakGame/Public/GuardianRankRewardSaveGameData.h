#pragma once
#include "CoreMinimal.h"
#include "GuardianRankRewardSaveGameData.generated.h"

class UGuardianRankRewardData;

USTRUCT(BlueprintType)
struct FGuardianRankRewardSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NumTokens;
    
private:
    UPROPERTY()
    TSoftObjectPtr<UGuardianRankRewardData> RewardDataPath;
    
public:
    OAKGAME_API FGuardianRankRewardSaveGameData();
};

