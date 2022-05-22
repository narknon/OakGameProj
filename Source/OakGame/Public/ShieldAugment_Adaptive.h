#pragma once
#include "CoreMinimal.h"
#include "ShieldAugment.h"
#include "AdaptiveTypeAssociations.h"
#include "ShieldAugment_Adaptive.generated.h"

UCLASS(EditInlineNew)
class UShieldAugment_Adaptive : public UShieldAugment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FAdaptiveTypeAssociations> DamageTypeAssociations;
    
public:
    UShieldAugment_Adaptive();
};

