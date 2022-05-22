#pragma once
#include "CoreMinimal.h"
#include "EmitterWwiseEventRTPCParam.generated.h"

class UWwiseRtpc;

USTRUCT(BlueprintType)
struct FEmitterWwiseEventRTPCParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWwiseRtpc* RTPC;
    
    UPROPERTY()
    float Value;
    
    GBXGAMESYSTEMCORE_API FEmitterWwiseEventRTPCParam();
};

