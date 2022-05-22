#pragma once
#include "CoreMinimal.h"
#include "OnDialogPerformanceNotifyDelegate.h"
#include "DialogSequenceNotifyDelegate.generated.h"

USTRUCT(BlueprintType)
struct FDialogSequenceNotifyDelegate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnDialogPerformanceNotify OnNotify;
    
    GBXDIALOG_API FDialogSequenceNotifyDelegate();
};

