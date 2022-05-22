#pragma once
#include "CoreMinimal.h"
#include "WeaponEffectBaseAspectData.h"
#include "WeaponRegisterMaterialEffectData.h"
#include "WeaponMaterialEffectAspectData.generated.h"

UCLASS(EditInlineNew)
class UWeaponMaterialEffectAspectData : public UWeaponEffectBaseAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FWeaponRegisterMaterialEffectData EffectData;
    
public:
    UWeaponMaterialEffectAspectData();
};

