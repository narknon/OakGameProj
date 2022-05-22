#pragma once
#include "CoreMinimal.h"
#include "HolsteredGearSlotOptions.generated.h"

class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct FHolsteredGearSlotOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInventoryCategoryData* InventoryCategory;
    
    OAKGAME_API FHolsteredGearSlotOptions();
};

