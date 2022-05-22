#pragma once
#include "CoreMinimal.h"
#include "GuardianRankRewardSaveGameData.h"
#include "GuardianRankProfileData.generated.h"

USTRUCT(BlueprintType)
struct FGuardianRankProfileData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 AvailableTokens;
    
    UPROPERTY()
    TArray<FGuardianRankRewardSaveGameData> RankRewards;
    
    UPROPERTY()
    int32 GuardianRank;
    
    UPROPERTY()
    int64 GuardianExperience;
    
    UPROPERTY()
    int32 RankRewardRandomSeed;
    
    OAKGAME_API FGuardianRankProfileData();
};

