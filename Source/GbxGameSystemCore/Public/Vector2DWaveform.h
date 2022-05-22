#pragma once
#include "CoreMinimal.h"
#include "FloatWaveform.h"
#include "Vector2DWaveform.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FVector2DWaveform {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatWaveform X;
    
    UPROPERTY(EditAnywhere)
    FFloatWaveform Y;
    
    FVector2DWaveform();
};

