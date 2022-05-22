#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryMenuSortMode.h"
#include "OakInventoryMenuFilter.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakInventoryMenuFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    EOakInventoryMenuSortMode SortMode;
    
    FOakInventoryMenuFilter();
};

