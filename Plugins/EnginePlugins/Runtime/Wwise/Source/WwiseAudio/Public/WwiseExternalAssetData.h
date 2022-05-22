#pragma once
#include "CoreMinimal.h"
#include "WwiseExternalAssetData.generated.h"

class UWwiseEvent;

USTRUCT()
struct FWwiseExternalAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UWwiseEvent> WwiseEventPtr;
    
    UPROPERTY(EditAnywhere)
    float EstimatedDuration;
    
    WWISEAUDIO_API FWwiseExternalAssetData();
};

