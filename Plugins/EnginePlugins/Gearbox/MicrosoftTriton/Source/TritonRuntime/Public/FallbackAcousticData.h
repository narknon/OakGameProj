#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WwiseEmitterAcousticData.h"
#include "FallbackAcousticData.generated.h"

USTRUCT(BlueprintType)
struct FFallbackAcousticData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FWwiseEmitterAcousticData AcousticData;
    
    UPROPERTY(EditAnywhere)
    float Outdoorness;
    
    UPROPERTY(EditAnywhere)
    TArray<float> EarlyReflections;
    
    TRITONRUNTIME_API FFallbackAcousticData();
};

