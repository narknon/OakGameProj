#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "CSLevelInfo.h"
#include "CSLevelData.generated.h"

UCLASS()
class OAKCS_API UCSLevelData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FCSLevelInfo> LevelInfos;
    
    UCSLevelData();
};

