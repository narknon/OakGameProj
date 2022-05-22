#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "LootConfigurationInfo.h"
#include "LootListData.generated.h"

UCLASS()
class ULootListData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FLootConfigurationInfo> LootData;
    
public:
    ULootListData();
};

