#pragma once
#include "CoreMinimal.h"
#include "ManagedActorEntry.generated.h"

class AActor;

USTRUCT()
struct FManagedActorEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AActor*> Actors;
    
    OAKGAME_API FManagedActorEntry();
};

