#pragma once
#include "CoreMinimal.h"
#include "GFxVendingMachineMenuFilter.generated.h"

class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct FGFxVendingMachineMenuFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Name;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* DataTypeFilter;
    
    OAKGAME_API FGFxVendingMachineMenuFilter();
};

