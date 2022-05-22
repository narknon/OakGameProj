#pragma once
#include "CoreMinimal.h"
#include "StatusEffectSpec.h"
#include "StatusEffectInstance.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FStatusEffectInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    FStatusEffectSpec Spec;
    
    FStatusEffectInstance();
};

