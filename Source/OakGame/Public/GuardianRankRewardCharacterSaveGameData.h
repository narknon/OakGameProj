#pragma once
#include "CoreMinimal.h"
#include "GuardianRankRewardCharacterSaveGameData.generated.h"

class UGuardianRankRewardData;

USTRUCT(BlueprintType)
struct FGuardianRankRewardCharacterSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NumTokens;
    
    UPROPERTY()
    bool bEnabled;
    
private:
    UPROPERTY()
    TSoftObjectPtr<UGuardianRankRewardData> RewardDataPath;
    
public:
    OAKGAME_API FGuardianRankRewardCharacterSaveGameData();
};

