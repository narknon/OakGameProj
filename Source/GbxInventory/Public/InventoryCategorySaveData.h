#pragma once
#include "CoreMinimal.h"
#include "InventoryCategorySaveData.generated.h"

class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FInventoryCategorySaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInventoryCategoryData* BaseCategoryDefinition;
    
    UPROPERTY()
    int32 Quantity;
    
    FInventoryCategorySaveData();
};

