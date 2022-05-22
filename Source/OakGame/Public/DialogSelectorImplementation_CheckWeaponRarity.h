#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_CheckWeaponRarity.generated.h"

class UDialogParameter;
class UInventoryRarityData;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_CheckWeaponRarity : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* WeaponUserParam;
    
    UPROPERTY(EditInstanceOnly)
    UInventoryRarityData* Rarity;
    
    UDialogSelectorImplementation_CheckWeaponRarity();
};

