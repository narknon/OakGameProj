#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "ShieldAugmentDamageEventData.generated.h"

class UDamageFilter;

USTRUCT(BlueprintType)
struct FShieldAugmentDamageEventData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bShieldMustNotBeDepleted: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bInstanceBoolMustBeTrue: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bInstanceBoolMustBeTrueForBarrier: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bMustBeTriggerable: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bSetNotTriggerableAfterTriggering: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData TriggerCooldown;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UDamageFilter* DamageEventFilter;
    
    OAKGAME_API FShieldAugmentDamageEventData();
};

