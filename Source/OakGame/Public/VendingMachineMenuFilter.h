#pragma once
#include "CoreMinimal.h"
#include "VendingMachineMenuFilter.generated.h"

class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct FVendingMachineMenuFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Name;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* DataTypeFilter;
    
    OAKGAME_API FVendingMachineMenuFilter();
};

