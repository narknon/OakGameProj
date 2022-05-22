#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "DeathData.generated.h"

class UGameStatData;

UCLASS()
class GBXGAMESYSTEMCORE_API UDeathData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UGameStatData*> DiedStats;
    
    UPROPERTY(EditAnywhere)
    float DissolveCorpseDelayBeforeDestroy;
    
    UDeathData();
};

