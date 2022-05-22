#pragma once
#include "CoreMinimal.h"
#include "OakVaultCardPreviousChallengeData.generated.h"

USTRUCT(BlueprintType)
struct FOakVaultCardPreviousChallengeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PreviousChallengeSeed;
    
    UPROPERTY()
    uint32 PreviousChallengeID;
    
    OAKGAME_API FOakVaultCardPreviousChallengeData();
};

