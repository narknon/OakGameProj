#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimCurveTypes.h"
#include "UObject/NoExportTypes.h"
#include "FakeGear.generated.h"

USTRUCT()
struct FFakeGear {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatCurve RPMCurve;
    
    UPROPERTY(EditAnywhere)
    FVector2D SpeedMinMax;
    
    OAKGAME_API FFakeGear();
};

