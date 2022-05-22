#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_CheckWeaponManufacturer.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_CheckWeaponManufacturer : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* WeaponUserParam;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* ManufacturerParam;
    
    UDialogSelectorImplementation_CheckWeaponManufacturer();
};

