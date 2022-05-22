#pragma once
#include "CoreMinimal.h"
#include "EActorPartReplacementMode.generated.h"

UENUM(BlueprintType)
enum class EActorPartReplacementMode : uint8 {
    Additive,
    Selective,
    Complete,
};

