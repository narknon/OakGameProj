#pragma once
#include "CoreMinimal.h"
#include "GuardianRankRewardCharacterSaveGameData.h"
#include "GuardianRankPerkCharacterSaveGameData.h"
#include "GuardianRankCharacterSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FGuardianRankCharacterSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 AvailableTokens;
    
    UPROPERTY()
    int32 GuardianRank;
    
    UPROPERTY()
    int64 GuardianExperience;
    
    UPROPERTY()
    bool bGuardianRankSystemEnabled;
    
    UPROPERTY()
    TArray<FGuardianRankRewardCharacterSaveGameData> RankRewards;
    
    UPROPERTY()
    TArray<FGuardianRankPerkCharacterSaveGameData> RankPerks;
    
    UPROPERTY()
    int32 RankRewardRandomSeed;
    
    OAKGAME_API FGuardianRankCharacterSaveGameData();
};

