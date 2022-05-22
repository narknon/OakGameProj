#pragma once
#include "CoreMinimal.h"
#include "FloatWaveform.h"
#include "VectorWaveform.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FVectorWaveform {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatWaveform X;
    
    UPROPERTY(EditAnywhere)
    FFloatWaveform Y;
    
    UPROPERTY(EditAnywhere)
    FFloatWaveform Z;
    
    FVectorWaveform();
};

