#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "InventorySlotEntry.h"
#include "InventorySlotContainer.generated.h"

USTRUCT(BlueprintType)
struct FInventorySlotContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FInventorySlotEntry> InventorySlots;
    
    OAKGAME_API FInventorySlotContainer();
};

