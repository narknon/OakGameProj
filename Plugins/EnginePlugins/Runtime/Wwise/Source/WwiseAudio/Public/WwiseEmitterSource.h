#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WwiseEmitterSource.generated.h"

USTRUCT(BlueprintType)
struct WWISEAUDIO_API FWwiseEmitterSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Gain;
    
    FWwiseEmitterSource();
};

