#pragma once
#include "CoreMinimal.h"
#include "DialogParameterMapping.h"
#include "DialogScopeParameterInfo.generated.h"

class UObject;

USTRUCT()
struct FDialogScopeParameterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UObject* Target;
    
    UPROPERTY(EditAnywhere)
    TArray<FDialogParameterMapping> ParameterMappings;
    
    GBXDIALOG_API FDialogScopeParameterInfo();
};

