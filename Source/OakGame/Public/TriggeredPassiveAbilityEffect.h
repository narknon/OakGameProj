#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "EAdditionalTriggeredEffectTargets.h"
#include "TriggeredPassiveAbilityEffect.generated.h"

class UStatusEffectData;

USTRUCT(BlueprintType)
struct FTriggeredPassiveAbilityEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData Duration;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyToPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    EAdditionalTriggeredEffectTargets AdditionalEffectTargets;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUsePlayerForAdditionalEffectTargetContext;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWantsEffectEndedEvent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanTriggerMultipleTimesPerFrame;
    
    OAKGAME_API FTriggeredPassiveAbilityEffect();
};

