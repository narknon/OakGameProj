#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PostLightBeamTickFunction.generated.h"

USTRUCT()
struct FPostLightBeamTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GBXWEAPON_API FPostLightBeamTickFunction();
};

