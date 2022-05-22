#pragma once
#include "CoreMinimal.h"
#include "CauseDamageStatusEffectOverrides.generated.h"

USTRUCT(BlueprintType)
struct FCauseDamageStatusEffectOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float BaseChance;
    
    UPROPERTY(BlueprintReadWrite)
    float BaseDuration;
    
    UPROPERTY(BlueprintReadWrite)
    float BaseDamage;
    
    UPROPERTY(BlueprintReadWrite)
    bool bBaseDamageAsPercent;
    
    UPROPERTY(BlueprintReadWrite)
    float ChanceScalar;
    
    UPROPERTY(BlueprintReadWrite)
    float DurationScalar;
    
    UPROPERTY(BlueprintReadWrite)
    float DamageScalar;
    
    OAKGAME_API FCauseDamageStatusEffectOverrides();
};

