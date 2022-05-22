#pragma once
#include "CoreMinimal.h"
#include "TritonLayerFadeParams.generated.h"

USTRUCT(BlueprintType)
struct FTritonLayerFadeParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RangeMin;
    
    UPROPERTY(EditAnywhere)
    float VolMin;
    
    UPROPERTY(EditAnywhere)
    float Pivot;
    
    UPROPERTY(EditAnywhere)
    float RangeMax;
    
    UPROPERTY(EditAnywhere)
    float VolMax;
    
    TRITONRUNTIME_API FTritonLayerFadeParams();
};

