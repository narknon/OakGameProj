#pragma once
#include "CoreMinimal.h"
#include "EWwiseTrackDirectionality.generated.h"

UENUM(BlueprintType)
enum class EWwiseTrackDirectionality : int32 {
    ForwardsAndBackwards,
    OnlyForwards,
    OnlyBackwards,
};

