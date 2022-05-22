#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "ElementalInteractionManagerPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FElementalInteractionManagerPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    OAKGAME_API FElementalInteractionManagerPostPhysicsTickFunction();
};

