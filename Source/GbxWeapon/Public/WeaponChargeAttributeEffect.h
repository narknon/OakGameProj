#pragma once
#include "CoreMinimal.h"
#include "AttributeEffectData.h"
#include "GbxAttributeModifierHandle.h"
#include "WeaponChargeAttributeEffect.generated.h"

USTRUCT(BlueprintType)
struct FWeaponChargeAttributeEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 StatesBitmask;
    
    UPROPERTY(EditAnywhere)
    bool bApplyToInstigator;
    
    UPROPERTY(EditAnywhere)
    FAttributeEffectData AttributeEffect;
    
    UPROPERTY(Transient)
    FGbxAttributeModifierHandle AttributeModifier;
    
    GBXWEAPON_API FWeaponChargeAttributeEffect();
};

