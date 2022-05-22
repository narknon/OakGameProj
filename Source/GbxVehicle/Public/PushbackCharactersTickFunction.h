#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PushbackCharactersTickFunction.generated.h"

USTRUCT()
struct FPushbackCharactersTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GBXVEHICLE_API FPushbackCharactersTickFunction();
};

