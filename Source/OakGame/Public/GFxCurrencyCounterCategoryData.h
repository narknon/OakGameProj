#pragma once
#include "CoreMinimal.h"
#include "GFxCurrencyCounterCategoryData.generated.h"

class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct FGFxCurrencyCounterCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* ItemCategory;
    
    UPROPERTY(Transient)
    int32 LastValue;
    
    OAKGAME_API FGFxCurrencyCounterCategoryData();
};

