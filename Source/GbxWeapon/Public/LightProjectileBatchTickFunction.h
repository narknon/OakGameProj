#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "LightProjectileBatchTickFunction.generated.h"

USTRUCT()
struct FLightProjectileBatchTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GBXWEAPON_API FLightProjectileBatchTickFunction();
};

