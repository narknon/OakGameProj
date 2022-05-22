#pragma once
#include "CoreMinimal.h"
#include "FloatWaveform.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FFloatWaveform {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    float Amplitude;
    
    UPROPERTY(EditAnywhere)
    float Phase;
    
    FFloatWaveform();
};

