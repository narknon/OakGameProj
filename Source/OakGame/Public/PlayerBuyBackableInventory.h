#pragma once
#include "CoreMinimal.h"
#include "PlayerBuyBackableInventory.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPlayerBuyBackableInventory {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* InventoryActor;
    
    OAKGAME_API FPlayerBuyBackableInventory();
};

