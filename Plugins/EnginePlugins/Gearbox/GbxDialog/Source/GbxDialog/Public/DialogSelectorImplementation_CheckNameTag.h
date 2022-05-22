#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_CheckNameTag.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class GBXDIALOG_API UDialogSelectorImplementation_CheckNameTag : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* WhoParam;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* NameTagParam;
    
    UDialogSelectorImplementation_CheckNameTag();
};

