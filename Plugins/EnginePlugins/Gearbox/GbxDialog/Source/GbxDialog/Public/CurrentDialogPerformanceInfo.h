#pragma once
#include "CoreMinimal.h"
#include "WwisePlaybackInstance.h"
#include "CurrentDialogPerformanceInfo.generated.h"

class UDialogPerformanceData;

USTRUCT(BlueprintType)
struct GBXDIALOG_API FCurrentDialogPerformanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 DialogThreadID;
    
    UPROPERTY()
    int32 DialogSequenceID;
    
    UPROPERTY()
    UDialogPerformanceData* Performance;
    
    UPROPERTY()
    FWwisePlaybackInstance PlayingAudioInstance;
    
    UPROPERTY()
    bool bForcingOwnerRelevantForEcho;
    
    FCurrentDialogPerformanceInfo();
};

