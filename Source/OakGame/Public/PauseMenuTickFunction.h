#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PauseMenuTickFunction.generated.h"

USTRUCT()
struct FPauseMenuTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    OAKGAME_API FPauseMenuTickFunction();
};

