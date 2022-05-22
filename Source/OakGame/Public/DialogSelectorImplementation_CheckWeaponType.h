#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_CheckWeaponType.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_CheckWeaponType : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* WeaponUserParam;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* WeaponTypeParam;
    
    UDialogSelectorImplementation_CheckWeaponType();
};

