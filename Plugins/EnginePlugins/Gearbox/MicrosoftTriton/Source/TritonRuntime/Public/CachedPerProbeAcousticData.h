#pragma once
#include "CoreMinimal.h"
#include "CachedPerProbeAcousticData.generated.h"

USTRUCT()
struct FCachedPerProbeAcousticData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ERVolume;
    
    UPROPERTY(EditAnywhere)
    float LRVolume;
    
    UPROPERTY(EditAnywhere)
    float LRDuration;
    
    TRITONRUNTIME_API FCachedPerProbeAcousticData();
};

