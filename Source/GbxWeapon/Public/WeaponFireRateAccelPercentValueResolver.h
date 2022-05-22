#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "WeaponFireRateAccelPercentValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXWEAPON_API UWeaponFireRateAccelPercentValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UWeaponFireRateAccelPercentValueResolver();
};

