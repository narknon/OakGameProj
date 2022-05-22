#pragma once
#include "CoreMinimal.h"
#include "ESimpleMotionType.h"
#include "SimpleMotionState.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FSimpleMotionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESimpleMotionType MotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* SpeedControlCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bScaleTransformByValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bScaleSpeedByValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bScaleAccelerationByValue: 1;
    
    FSimpleMotionState();
};

