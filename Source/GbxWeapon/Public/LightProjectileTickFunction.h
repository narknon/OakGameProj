#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "LightProjectileTickFunction.generated.h"

USTRUCT()
struct FLightProjectileTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GBXWEAPON_API FLightProjectileTickFunction();
};

