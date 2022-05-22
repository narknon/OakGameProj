#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GameStatList.generated.h"

class UGameStatData;

UCLASS()
class GBXGAMESYSTEMCORE_API UGameStatList : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<UGameStatData*> GameStats;
    
public:
    UGameStatList();
};

