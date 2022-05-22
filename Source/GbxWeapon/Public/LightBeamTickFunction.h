#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "LightBeamTickFunction.generated.h"

USTRUCT()
struct FLightBeamTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GBXWEAPON_API FLightBeamTickFunction();
};

