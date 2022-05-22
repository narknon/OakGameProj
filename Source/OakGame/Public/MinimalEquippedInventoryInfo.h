#pragma once
#include "CoreMinimal.h"
#include "MinimalEquippedInventoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FMinimalEquippedInventoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 InventorySlotHash;
    
    UPROPERTY()
    int32 PickupOrderIdx;
    
    UPROPERTY()
    bool bEnabled;
    
    OAKGAME_API FMinimalEquippedInventoryInfo();
};

