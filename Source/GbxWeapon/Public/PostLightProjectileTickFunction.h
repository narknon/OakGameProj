#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PostLightProjectileTickFunction.generated.h"

USTRUCT()
struct FPostLightProjectileTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GBXWEAPON_API FPostLightProjectileTickFunction();
};

