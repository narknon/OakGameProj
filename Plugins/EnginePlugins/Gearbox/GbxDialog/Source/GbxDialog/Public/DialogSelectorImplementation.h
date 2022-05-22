#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogContext.h"
#include "EDialogDecisionTestResult.h"
#include "DialogSelectorImplementation.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class GBXDIALOG_API UDialogSelectorImplementation : public UObject {
    GENERATED_BODY()
public:
    UDialogSelectorImplementation();
protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void PerformTest(const FDialogContext& Context, EDialogDecisionTestResult& Result);
    
};

