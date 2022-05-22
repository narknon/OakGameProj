#pragma once
#include "CoreMinimal.h"
#include "WwiseAcousticEmulationParameters.generated.h"

USTRUCT()
struct WWISEAUDIO_API FWwiseAcousticEmulationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 EarlyReflectionsOffsetTimeMs;
    
    UPROPERTY(EditAnywhere)
    float GlobalWetnessScaleDB;
    
    UPROPERTY(EditAnywhere)
    float DecayDistance;
    
    UPROPERTY(EditAnywhere)
    float EarlyReflectionDecay;
    
    UPROPERTY(EditAnywhere)
    float LateReflectionDecay;
    
    UPROPERTY(EditAnywhere)
    float DryVolumeCorrectionDistance;
    
    FWwiseAcousticEmulationParameters();
};

