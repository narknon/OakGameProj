#pragma once
#include "CoreMinimal.h"
#include "DialogPerformanceNotify.generated.h"

USTRUCT(BlueprintType)
struct FDialogPerformanceNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TimeFraction;
    
    UPROPERTY(EditAnywhere)
    FName Name;
    
    GBXDIALOG_API FDialogPerformanceNotify();
};

