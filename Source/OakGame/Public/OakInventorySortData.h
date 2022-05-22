#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryMenuSortMode.h"
#include "OakInventoryMenuTypePriorityInfo.h"
#include "OakInventorySortData.generated.h"

USTRUCT()
struct OAKGAME_API FOakInventorySortData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EOakInventoryMenuSortMode SortMode;
    
    UPROPERTY(Transient)
    TArray<FOakInventoryMenuTypePriorityInfo> SortPriorities;
    
    UPROPERTY(Transient)
    bool bDoEquippedTypeFirst;
    
    UPROPERTY(Transient)
    FName EquippedItemGrouping;
    
    FOakInventorySortData();
};

