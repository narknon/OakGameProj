#pragma once
#include "CoreMinimal.h"
#include "ECachedResultLifetime.h"
#include "DialogSelectorFunctionCallInstance.h"
#include "DialogLookupDecision.generated.h"

USTRUCT(BlueprintType)
struct GBXDIALOG_API FDialogLookupDecision {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogSelectorFunctionCallInstance Call;
    
    UPROPERTY(EditAnywhere)
    ECachedResultLifetime CachedLifetime;
    
    UPROPERTY(EditAnywhere)
    uint32 DecisionNumber;
    
    FDialogLookupDecision();
};

