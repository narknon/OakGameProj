#pragma once
#include "CoreMinimal.h"
#include "RegionSaveData.generated.h"

class URegionData;

USTRUCT(BlueprintType)
struct OAKGAME_API FRegionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    URegionData* REGION;
    
    UPROPERTY()
    int32 GameStage;
    
    UPROPERTY()
    int32 PlayThroughIdx;
    
    FRegionSaveData();
};

