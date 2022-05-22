#pragma once
#include "CoreMinimal.h"
#include "RegionSaveGameData.generated.h"

class URegionData;

USTRUCT(BlueprintType)
struct FRegionSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 GameStage;
    
    UPROPERTY(VisibleAnywhere)
    int32 PlayThroughIdx;
    
private:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<URegionData> RegionPath;
    
    UPROPERTY(VisibleAnywhere)
    uint32 DlcPackageId;
    
public:
    OAKGAME_API FRegionSaveGameData();
};

