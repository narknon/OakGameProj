#pragma once
#include "CoreMinimal.h"
#include "LevelAssetList.h"
#include "Engine/PrimaryAssetLabel.h"
#include "LevelAssetListData.generated.h"

UCLASS()
class OAKGAME_API ULevelAssetListData : public UPrimaryAssetLabel {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FLevelAssetList> LevelData;
    
    ULevelAssetListData();
};

