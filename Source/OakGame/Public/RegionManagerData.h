#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "PlayThroughData.h"
#include "RegionManagerData.generated.h"

UCLASS()
class OAKGAME_API URegionManagerData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPlayThroughData> PlayThroughs;
    
    UPROPERTY(EditAnywhere)
    int32 GameStageIncreaseAbovePlayer;
    
    URegionManagerData();
};

