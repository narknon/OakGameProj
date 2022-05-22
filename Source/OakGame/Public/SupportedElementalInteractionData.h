#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "SupportedElementalInteractionData.generated.h"

class UElementalInteractionData;

USTRUCT(BlueprintType)
struct OAKGAME_API FSupportedElementalInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UElementalInteractionData* State;
    
    UPROPERTY(EditAnywhere)
    float TransitionTimeScale;
    
    UPROPERTY(EditAnywhere)
    float DamageTriggeredTransitionTimeScale;
    
    UPROPERTY(EditAnywhere)
    float OverrideDamageTriggeredSourceDuration;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDamageAmount: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideBaseStatusEffectChance: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideBaseStatusEffectDamage: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideBaseStatusEffectDuration: 1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OverrideDamageAmount;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OverrideBaseStatusEffectChance;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OverrideBaseStatusEffectDamage;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OverrideBaseStatusEffectDuration;
    
    FSupportedElementalInteractionData();
};

