#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_CheckLevel.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_CheckLevel : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* BalancedActorParam;
    
    UPROPERTY(EditInstanceOnly)
    int32 MinLevel;
    
    UPROPERTY(EditInstanceOnly)
    int32 MaxLevel;
    
    UDialogSelectorImplementation_CheckLevel();
};

