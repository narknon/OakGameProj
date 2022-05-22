#pragma once
#include "CoreMinimal.h"
#include "InitialDialogInProgress.generated.h"

class UDialogPerformanceData;

USTRUCT(BlueprintType)
struct FInitialDialogInProgress {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 DialogThreadID;
    
    UPROPERTY()
    int32 DialogSequenceID;
    
    UPROPERTY()
    UDialogPerformanceData* Performance;
    
    UPROPERTY()
    float PlayTime;
    
    GBXDIALOG_API FInitialDialogInProgress();
};

