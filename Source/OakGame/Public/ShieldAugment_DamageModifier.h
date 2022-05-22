#pragma once
#include "CoreMinimal.h"
#include "ShieldAugment_Triggerable.h"
#include "EShieldDamageModifierApplicationTarget.h"
#include "ShieldAugment_DamageModifier.generated.h"

class UConditionalDamageModifier;

UCLASS(EditInlineNew)
class UShieldAugment_DamageModifier : public UShieldAugment_Triggerable {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UConditionalDamageModifier* DamageModifier;
    
    UPROPERTY(EditDefaultsOnly)
    EShieldDamageModifierApplicationTarget ApplicationTarget;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseModifierDuration;
    
    UShieldAugment_DamageModifier();
};

