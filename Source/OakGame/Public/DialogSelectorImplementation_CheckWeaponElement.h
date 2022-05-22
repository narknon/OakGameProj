#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_CheckWeaponElement.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_CheckWeaponElement : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* WeaponUserParam;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* ElementParam;
    
    UDialogSelectorImplementation_CheckWeaponElement();
};

