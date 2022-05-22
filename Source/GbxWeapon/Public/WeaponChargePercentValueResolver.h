#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "WeaponChargePercentValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXWEAPON_API UWeaponChargePercentValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UWeaponChargePercentValueResolver();
};

