#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_HasGameplayTag.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_HasGameplayTag : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* ActorParam;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* TagParam;
    
    UDialogSelectorImplementation_HasGameplayTag();
};

