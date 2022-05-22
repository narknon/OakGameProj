#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorFunctionCallInstance.h"
#include "DialogConditionRequirement.generated.h"

USTRUCT(BlueprintType)
struct FDialogConditionRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogSelectorFunctionCallInstance SelectorCall;
    
    UPROPERTY(EditAnywhere)
    bool bRequiredResult;
    
    GBXDIALOG_API FDialogConditionRequirement();
};

