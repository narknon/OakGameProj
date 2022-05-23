#pragma once
#include "CoreMinimal.h"
#include "GFxInventoryMenuUnlockLookupItem.generated.h"

class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxInventoryMenuUnlockLookupItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UInventoryCategoryData> InventoryCategory;
    
    UPROPERTY(EditAnywhere)
    FText DisplayText;
    
    FGFxInventoryMenuUnlockLookupItem();
};

