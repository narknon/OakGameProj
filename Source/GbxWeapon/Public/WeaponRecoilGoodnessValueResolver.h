#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "WeaponRecoilGoodnessValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXWEAPON_API UWeaponRecoilGoodnessValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UWeaponRecoilGoodnessValueResolver();
};

