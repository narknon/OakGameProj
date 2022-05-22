#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AudioPropHitFilter_DirectionLimit.generated.h"

USTRUCT(BlueprintType)
struct FAudioPropHitFilter_DirectionLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Direction;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval DotProductLimits;
    
    GBXAUDIO_API FAudioPropHitFilter_DirectionLimit();
};

