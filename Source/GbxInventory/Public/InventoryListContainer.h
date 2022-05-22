#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntry.h"
#include "Engine/NetSerialization.h"
#include "InventoryListContainer.generated.h"

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FInventoryListContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FInventoryListEntry> Items;
    
    FInventoryListContainer();
};

