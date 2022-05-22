#pragma once
#include "CoreMinimal.h"
#include "DialogParameterMapping.h"
#include "DialogSelectorFunctionCallInstance.generated.h"

class UDialogSelectorFunction;

USTRUCT(BlueprintType)
struct GBXDIALOG_API FDialogSelectorFunctionCallInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogSelectorFunction* Function;
    
    UPROPERTY(EditAnywhere)
    TArray<FDialogParameterMapping> ParameterMappings;
    
    FDialogSelectorFunctionCallInstance();
};

