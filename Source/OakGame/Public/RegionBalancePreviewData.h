#pragma once
#include "CoreMinimal.h"
#include "RegionBalancePreviewData.generated.h"

USTRUCT()
struct OAKGAME_API FRegionBalancePreviewData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 GameStageMinimum;
    
    UPROPERTY(VisibleAnywhere)
    int32 GameStageMaximum;
    
    UPROPERTY(VisibleAnywhere)
    int32 GameStageIncreaseOverPlayerLevel;
    
    FRegionBalancePreviewData();
};

