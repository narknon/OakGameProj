#pragma once
#include "CoreMinimal.h"
#include "AutoplayAction.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAutoplayAction {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* Target;
    
    OAKGAME_API FAutoplayAction();
};

