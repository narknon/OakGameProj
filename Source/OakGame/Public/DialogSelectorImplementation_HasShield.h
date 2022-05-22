#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_HasShield.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_HasShield : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* TestSubjectParam;
    
    UDialogSelectorImplementation_HasShield();
};

