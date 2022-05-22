#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "StandInUIControllerTickFunction.generated.h"

USTRUCT()
struct FStandInUIControllerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    OAKGAME_API FStandInUIControllerTickFunction();
};

