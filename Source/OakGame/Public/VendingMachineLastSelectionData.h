#pragma once
#include "CoreMinimal.h"
#include "VendingMachineLastSelectionData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVendingMachineLastSelectionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* InventoryActor;
    
    OAKGAME_API FVendingMachineLastSelectionData();
};

