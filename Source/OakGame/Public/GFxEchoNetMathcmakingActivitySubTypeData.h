#pragma once
#include "CoreMinimal.h"
#include "GFxEchoNetMathcmakingActivitySubTypeData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxEchoNetMathcmakingActivitySubTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString Guid;
    
    UPROPERTY(Transient)
    bool bLocked;
    
    UPROPERTY(Transient)
    bool bFeatured;
    
    UPROPERTY(Transient)
    bool bIsHeroic;
    
    UPROPERTY(Transient)
    FText Name;
    
    UPROPERTY(Transient)
    FText Description;
    
    FGFxEchoNetMathcmakingActivitySubTypeData();
};

