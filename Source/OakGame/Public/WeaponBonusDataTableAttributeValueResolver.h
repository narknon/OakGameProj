#pragma once
#include "CoreMinimal.h"
#include "DataTableAttributeValueResolver.h"
#include "WeaponBonusDataTableAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew, HideDropdown, Within=WeaponBonusDataTableData)
class OAKGAME_API UWeaponBonusDataTableAttributeValueResolver : public UDataTableAttributeValueResolver {
    GENERATED_BODY()
public:
    UWeaponBonusDataTableAttributeValueResolver();
};

