#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeaponVisibleAmmoEffectData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FWeaponVisibleAmmoEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* Effect;
    
    UPROPERTY(EditAnywhere)
    FTransform RelativeTransform;
    
    GBXWEAPON_API FWeaponVisibleAmmoEffectData();
};

