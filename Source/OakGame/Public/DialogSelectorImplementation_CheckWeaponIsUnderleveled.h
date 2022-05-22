#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_CheckWeaponIsUnderleveled.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_CheckWeaponIsUnderleveled : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* WeaponUserParam;
    
    UPROPERTY(EditInstanceOnly)
    int32 MinLevelGap;
    
    UDialogSelectorImplementation_CheckWeaponIsUnderleveled();
};

