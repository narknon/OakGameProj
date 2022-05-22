#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_PitchFOV.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class OAKGAME_API UCameraBehavior_PitchFOV : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* PitchFOVCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* PitchFOVScaleCurve;
    
    UPROPERTY(EditAnywhere)
    float MinPitch;
    
    UPROPERTY(EditAnywhere)
    float MaxPitch;
    
    UCameraBehavior_PitchFOV();
};

