#pragma once
#include "CoreMinimal.h"
#include "EInteractiveObjectTrapActivationType.h"
#include "InteractiveObjectTrapEntry.generated.h"

class AInteractiveObject;

USTRUCT(BlueprintType)
struct FInteractiveObjectTrapEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AInteractiveObject* TrapActor;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EInteractiveObjectTrapActivationType ActivationType;
    
    UPROPERTY(EditInstanceOnly)
    float InstructionDelay;
    
    OAKGAME_API FInteractiveObjectTrapEntry();
};

