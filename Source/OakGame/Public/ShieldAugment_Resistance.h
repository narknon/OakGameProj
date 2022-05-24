#pragma once
#include "CoreMinimal.h"
#include "ShieldAugment.h"
#include "DamageTypeAttribute.h"
#include "ShieldAugment_Resistance.generated.h"

UCLASS(EditInlineNew)
class UShieldAugment_Resistance : public UShieldAugment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FDamageTypeAttribute> DamageTypeModifiers;
    
public:
    UShieldAugment_Resistance();
};

