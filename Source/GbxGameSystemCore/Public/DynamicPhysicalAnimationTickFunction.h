#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "DynamicPhysicalAnimationTickFunction.generated.h"

USTRUCT()
struct FDynamicPhysicalAnimationTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GBXGAMESYSTEMCORE_API FDynamicPhysicalAnimationTickFunction();
};

