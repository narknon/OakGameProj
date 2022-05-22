#pragma once
#include "CoreMinimal.h"
#include "WeaponMaterialEffectInstance.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FWeaponMaterialEffectInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UCurveFloat* ValueOverTime;
    
    GBXWEAPON_API FWeaponMaterialEffectInstance();
};

