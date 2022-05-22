#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "CMMotionData.generated.h"

USTRUCT(BlueprintType)
struct FCMMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve X;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Y;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Z;
    
    GBXGAMESYSTEMCORE_API FCMMotionData();
};

