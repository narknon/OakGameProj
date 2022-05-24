#pragma once
#include "CoreMinimal.h"
#include "EMovieFFRWState.generated.h"

UENUM(BlueprintType)
enum class EMovieFFRWState : uint8 {
    RegularPlayback,
    FastForward,
    Rewind,
};

