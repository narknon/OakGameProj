#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_GbxCondition.generated.h"

class UDialogParameter;
class UGbxCondition;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_GbxCondition : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* ContextParam;
    
    UDialogSelectorImplementation_GbxCondition();
};

