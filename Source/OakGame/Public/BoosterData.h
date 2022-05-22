#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "CSBoosterInfo.h"
#include "BoosterData.generated.h"

UCLASS()
class OAKGAME_API UBoosterData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FCSBoosterInfo> BoosterInfos;
    
    UPROPERTY(EditDefaultsOnly)
    bool AllowMultipleBoostersAtTheSameTime;
    
    UBoosterData();
};

