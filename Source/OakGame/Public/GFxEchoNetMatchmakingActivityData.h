#pragma once
#include "CoreMinimal.h"
#include "GFxEchoNetMathcmakingActivitySubTypeData.h"
#include "GFxEchoNetMatchmakingActivityData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxEchoNetMatchmakingActivityData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGFxEchoNetMathcmakingActivitySubTypeData NormalData;
    
    UPROPERTY(Transient)
    FGFxEchoNetMathcmakingActivitySubTypeData HeroicData;
    
    UPROPERTY(Transient)
    FString ImageId;
    
    UPROPERTY(Transient)
    bool bLookingAtHeroic;
    
    FGFxEchoNetMatchmakingActivityData();
};

