#pragma once
#include "CoreMinimal.h"
#include "OrphanedUIStandIn.generated.h"

class AActor;
class AOakUIActorContainer;

USTRUCT(BlueprintType)
struct FOrphanedUIStandIn {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* StandInActor;
    
    UPROPERTY()
    AOakUIActorContainer* Container;
    
    OAKGAME_API FOrphanedUIStandIn();
};

