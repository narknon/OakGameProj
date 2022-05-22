#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "InventoryNamingStrategyData.generated.h"

UCLASS(Abstract)
class GBXINVENTORY_API UInventoryNamingStrategyData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UInventoryNamingStrategyData();
};

