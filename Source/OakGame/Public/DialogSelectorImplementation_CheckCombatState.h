#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_CheckCombatState.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_CheckCombatState : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* TestSubjectParam;
    
    UPROPERTY(EditInstanceOnly)
    bool bTrueIfInCombat;
    
    UDialogSelectorImplementation_CheckCombatState();
};

