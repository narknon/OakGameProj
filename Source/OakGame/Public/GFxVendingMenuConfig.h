#pragma once
#include "CoreMinimal.h"
#include "OakInventoryMenuItemGrouping.h"
#include "OakInventoryMenuFilter.h"
#include "OakBackpackCapacityThreshold.h"
#include "OakInventoryMenuTypePriorityInfo.h"
#include "GFxVendingMenuConfig.generated.h"

class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxVendingMenuConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* GoldenKeyResourceData;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* ErediumResourceData;
    
    UPROPERTY(EditAnywhere)
    TArray<UInventoryCategoryData*> InventoryCategoriesAllowed;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuFilter> PageFilters;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuItemGrouping> ItemGroupingsByType;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuItemGrouping> ItemGroupingsByManufacturer;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuTypePriorityInfo> ItemTypeSortPriorities;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakBackpackCapacityThreshold> BackpackThresholds;
    
    FGFxVendingMenuConfig();
};

