#pragma once
#include "CoreMinimal.h"
#include "EMovieFFRWState.generated.h"

UENUM(BlueprintType)
enum class EMovieFFRWState :  {
    RegularPlayback,
    FastForward,
    Rewind,
};

