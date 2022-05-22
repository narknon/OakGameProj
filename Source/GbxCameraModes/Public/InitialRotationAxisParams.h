#pragma once
#include "CoreMinimal.h"
#include "InitialRotationAxisParams.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FInitialRotationAxisParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxAngle;
    
    UPROPERTY(EditAnywhere)
    bool bRelativeToBase;
    
    UPROPERTY(EditAnywhere)
    bool bLinearInterpolation;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* SpeedScaleCurve;
    
    UPROPERTY(EditAnywhere)
    float Delay;
    
    GBXCAMERAMODES_API FInitialRotationAxisParams();
};

