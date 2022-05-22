#pragma once
#include "CoreMinimal.h"
#include "LightProjectileMoveModifier.h"
#include "LightProjectileAimViewPointHomingModifier.generated.h"

UCLASS(EditInlineNew)
class ULightProjectileAimViewPointHomingModifier : public ULightProjectileMoveModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LookAheadDistance;
    
    ULightProjectileAimViewPointHomingModifier();
};

