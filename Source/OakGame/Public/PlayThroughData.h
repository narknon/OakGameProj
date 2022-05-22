#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "RegionBalanceData.h"
#include "PlayThroughData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FPlayThroughData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 PlayThrough;
    
    UPROPERTY(EditAnywhere)
    bool bEnforceMinimumGameStageForPlaythrough;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MinimumGameStageForPlaythrough;
    
    UPROPERTY(EditAnywhere)
    TArray<FRegionBalanceData> Regions;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bGameStageTracksPlayerLevelAboveMinimum;
    
public:
    FPlayThroughData();
};

