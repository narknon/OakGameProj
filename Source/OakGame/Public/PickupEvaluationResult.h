#pragma once
#include "CoreMinimal.h"
#include "PickupEvaluationResult.generated.h"

class AOakInventoryItemPickup;

USTRUCT(BlueprintType)
struct FPickupEvaluationResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    AOakInventoryItemPickup* Pickup;
    
    OAKGAME_API FPickupEvaluationResult();
};

