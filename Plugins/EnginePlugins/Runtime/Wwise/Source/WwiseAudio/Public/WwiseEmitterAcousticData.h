#pragma once
#include "CoreMinimal.h"
#include "WwiseEmitterAcousticData.generated.h"

USTRUCT()
struct FWwiseEmitterAcousticData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float DryVolume;
    
    UPROPERTY(VisibleAnywhere)
    float ERVolume;
    
    UPROPERTY(VisibleAnywhere)
    float LRVolume;
    
    UPROPERTY(VisibleAnywhere)
    float LRDuration;
    
    UPROPERTY(VisibleAnywhere)
    float DirectionAmbiX;
    
    UPROPERTY(VisibleAnywhere)
    float DirectionAmbiY;
    
    WWISEAUDIO_API FWwiseEmitterAcousticData();
};

