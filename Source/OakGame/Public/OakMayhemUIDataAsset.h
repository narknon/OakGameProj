#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "MayhemUILevelData.h"
#include "OakMayhemUIDataAsset.generated.h"

UCLASS(Deprecated, NotPlaceable)
class OAKGAME_API UDEPRECATED_OakMayhemUIDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMayhemUILevelData> LevelUIData;
    
    UDEPRECATED_OakMayhemUIDataAsset();
};

