#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "CameraBehavior_InitialRotation.h"
#include "CameraBehavior_LimitPitchBySlope.generated.h"

UCLASS(EditInlineNew)
class UCameraBehavior_LimitPitchBySlope : public UCameraBehavior_InitialRotation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SlopeToMaxPitchCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SlopeToMinPitchCurve;
    
    UPROPERTY(EditAnywhere)
    float PitchLimitEasingSpeed;
    
    UCameraBehavior_LimitPitchBySlope();
};

