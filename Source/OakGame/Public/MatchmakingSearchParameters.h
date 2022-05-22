#pragma once
#include "CoreMinimal.h"
#include "MatchmakingSearchParameter.h"
#include "MatchmakingSearchParameters.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingSearchParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SearchName;
    
    UPROPERTY()
    bool bMatchGameSettings;
    
    UPROPERTY()
    TArray<FMatchmakingSearchParameter> SearchParameters;
    
    OAKGAME_API FMatchmakingSearchParameters();
};

