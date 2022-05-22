#pragma once
#include "CoreMinimal.h"
#include "OakAISwarmMovement.h"
#include "OakAISwarmActor.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FOakAISwarmActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Actor;
    
    UPROPERTY(Export)
    USceneComponent* DestinationComponent;
    
    UPROPERTY(Export, Transient)
    USceneComponent* Destination;
    
    UPROPERTY(Transient)
    FOakAISwarmMovement Movement;
    
    OAKGAME_API FOakAISwarmActor();
};

