#pragma once
#include "CoreMinimal.h"
#include "WwisePlaybackInstance.h"
#include "ActiveLoopingSoundNotifyData.generated.h"

USTRUCT(BlueprintType)
struct FActiveLoopingSoundNotifyData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FWwisePlaybackInstance> Instances;
    
    GBXAUDIO_API FActiveLoopingSoundNotifyData();
};

