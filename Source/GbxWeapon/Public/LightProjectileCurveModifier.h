#pragma once
#include "CoreMinimal.h"
#include "LightProjectileMoveModifier.h"
#include "LightProjectileCurveModifier.generated.h"

UCLASS(EditInlineNew)
class ULightProjectileCurveModifier : public ULightProjectileMoveModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartTangentMultiplier;
    
    ULightProjectileCurveModifier();
};

