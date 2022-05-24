#pragma once
#include "CoreMinimal.h"
#include "EWwiseTrackDirectionality.generated.h"

UENUM()
enum class EWwiseTrackDirectionality : int32 {
    ForwardsAndBackwards,
    OnlyForwards,
    OnlyBackwards,
};

