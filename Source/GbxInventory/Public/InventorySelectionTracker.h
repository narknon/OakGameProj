#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.h"
#include "InventorySelectionTracker.generated.h"

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FInventorySelectionTracker {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SelectedIndex;
    
    UPROPERTY()
    bool TrackQuantity;
    
    UPROPERTY()
    FInventoryListEntryHandle SelectedHandle;
    
    FInventorySelectionTracker();
};

