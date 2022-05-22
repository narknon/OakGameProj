#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.generated.h"

USTRUCT(BlueprintType)
struct FInventoryListEntryHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 Handle;
    
public:
    GBXINVENTORY_API FInventoryListEntryHandle();
};

