#pragma once
#include "CoreMinimal.h"
#include "LightProjectileInitializationData.h"
#include "OakLightProjectileInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FOakLightProjectileInitializationData : public FLightProjectileInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float BaseStatusEffectChance;
    
    UPROPERTY(BlueprintReadWrite)
    float BaseStatusEffectDamage;
    
    UPROPERTY(BlueprintReadWrite)
    float BaseStatusEffectDuration;
    
    UPROPERTY(BlueprintReadWrite)
    float StatusEffectChanceScalar;
    
    UPROPERTY(BlueprintReadWrite)
    float StatusEffectDamageScalar;
    
    UPROPERTY(BlueprintReadWrite)
    float StatusEffectDurationScalar;
    
    OAKGAME_API FOakLightProjectileInitializationData();
};

