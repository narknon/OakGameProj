#pragma once
#include "CoreMinimal.h"
#include "OutstandingActivityFeedData.generated.h"

class UActivityFeedReward;

USTRUCT(BlueprintType)
struct FOutstandingActivityFeedData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UActivityFeedReward* FeedData;
    
    UPROPERTY()
    int32 ChallengeLevelTargetValue;
    
    UPROPERTY()
    int32 ChallengeLevelCompleted;
    
    OAKGAME_API FOutstandingActivityFeedData();
};

