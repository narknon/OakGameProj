#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "StreamerBoosterInfo.h"
#include "StreamerBoosterData.generated.h"

UCLASS()
class OAKGAME_API UStreamerBoosterData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FStreamerBoosterInfo> PrimaryBoosterInfos;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FStreamerBoosterInfo> SecondaryBoosterInfos;
    
    UStreamerBoosterData();
};

