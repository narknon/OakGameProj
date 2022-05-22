#pragma once
#include "CoreMinimal.h"
#include "OakChallengeTierRewards.h"
#include "OakChallengeTierRewardsPerInstance.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakChallengeTierRewardsPerInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 LeagueInstance;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakChallengeTierRewards> TierRewards;
    
    FOakChallengeTierRewardsPerInstance();
};

