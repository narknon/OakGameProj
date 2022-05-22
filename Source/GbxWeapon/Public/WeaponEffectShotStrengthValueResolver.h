#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "WeaponEffectShotStrengthValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXWEAPON_API UWeaponEffectShotStrengthValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UWeaponEffectShotStrengthValueResolver();
};

