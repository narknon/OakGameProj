#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MatchmakingSearchDefinition.h"
#include "MatchmakingSearchDefinitions.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UMatchmakingSearchDefinitions : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(GlobalConfig)
    FMatchmakingSearchDefinition CampaignSearchDefinition;
    
    UPROPERTY(GlobalConfig)
    TArray<FMatchmakingSearchDefinition> SearchDefinitions;
    
    UPROPERTY(GlobalConfig)
    int32 DefaultMaxSearchResults;
    
public:
    UMatchmakingSearchDefinitions();
};

