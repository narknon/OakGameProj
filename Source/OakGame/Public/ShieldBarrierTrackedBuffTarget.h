#pragma once
#include "CoreMinimal.h"
#include "StatusEffectInstanceReference.h"
#include "ShieldBarrierTrackedBuffTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FShieldBarrierTrackedBuffTarget {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Target;
    
    UPROPERTY()
    FStatusEffectInstanceReference Mod1Reference;
    
    UPROPERTY()
    FStatusEffectInstanceReference Mod5Reference;
    
    OAKGAME_API FShieldBarrierTrackedBuffTarget();
};

