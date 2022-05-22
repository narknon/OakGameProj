#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "WeaponConsumedLoadedAmmoValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXWEAPON_API UWeaponConsumedLoadedAmmoValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UWeaponConsumedLoadedAmmoValueResolver();
};

