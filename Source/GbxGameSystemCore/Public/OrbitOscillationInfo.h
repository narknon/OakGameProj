#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "OrbitOscillationInfo.generated.h"

USTRUCT(BlueprintType)
struct FOrbitOscillationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Cycle;
    
    UPROPERTY(EditAnywhere)
    float OverrideDuration;
    
    UPROPERTY(Transient)
    float CurrentTime;
    
    GBXGAMESYSTEMCORE_API FOrbitOscillationInfo();
};

