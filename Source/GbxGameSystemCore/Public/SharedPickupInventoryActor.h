#pragma once
#include "CoreMinimal.h"
#include "SharedPickupInventoryActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSharedPickupInventoryActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Actor;
    
    GBXGAMESYSTEMCORE_API FSharedPickupInventoryActor();
};

