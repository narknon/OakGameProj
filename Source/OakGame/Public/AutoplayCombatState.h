#pragma once
#include "CoreMinimal.h"
#include "AutoplayCombatState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAutoplayCombatState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* EnemyTarget;
    
    OAKGAME_API FAutoplayCombatState();
};

