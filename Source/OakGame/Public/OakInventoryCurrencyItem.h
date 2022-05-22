#pragma once
#include "CoreMinimal.h"
#include "OakInventoryConsumableItem.h"
#include "AttributeInitializationData.h"
#include "OakInventoryCurrencyItem.generated.h"

class UInventoryCategoryData;
class UGameStatData;

UCLASS(Abstract)
class OAKGAME_API AOakInventoryCurrencyItem : public AOakInventoryConsumableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* CurrencyCategory;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData CurrencyValueScale;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* CurrencyStat;
    
public:
    AOakInventoryCurrencyItem();
};

