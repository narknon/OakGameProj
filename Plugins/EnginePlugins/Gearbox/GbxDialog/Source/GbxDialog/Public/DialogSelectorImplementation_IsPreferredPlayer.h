#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_IsPreferredPlayer.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class GBXDIALOG_API UDialogSelectorImplementation_IsPreferredPlayer : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* WhoParam;
    
    UDialogSelectorImplementation_IsPreferredPlayer();
};

