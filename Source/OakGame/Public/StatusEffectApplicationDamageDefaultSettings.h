#pragma once
#include "CoreMinimal.h"
#include "StatusEffectApplicationDamageDefaultSettings.generated.h"

class UStatusEffectData;

USTRUCT(BlueprintType)
struct FStatusEffectApplicationDamageDefaultSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float PercentBaseDamage;
    
    UPROPERTY(EditAnywhere)
    float PercentChance;
    
    OAKGAME_API FStatusEffectApplicationDamageDefaultSettings();
};

