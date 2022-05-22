#pragma once
#include "CoreMinimal.h"
#include "TouchPickupEvaluationResult.generated.h"

class AOakInventoryItemPickup;

USTRUCT(BlueprintType)
struct FTouchPickupEvaluationResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AOakInventoryItemPickup*> Pickups;
    
    OAKGAME_API FTouchPickupEvaluationResult();
};

