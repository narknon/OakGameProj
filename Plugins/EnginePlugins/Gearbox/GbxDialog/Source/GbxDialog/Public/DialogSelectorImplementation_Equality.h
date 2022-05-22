#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_Equality.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class GBXDIALOG_API UDialogSelectorImplementation_Equality : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* ParamA;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* ParamB;
    
    UDialogSelectorImplementation_Equality();
};

