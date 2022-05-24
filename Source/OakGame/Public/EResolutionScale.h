#pragma once
#include "CoreMinimal.h"
#include "EResolutionScale.generated.h"

UENUM(BlueprintType)
enum class EResolutionScale : uint8 {
    Scale_50,
    Scale_75,
    Scale_100,
    Scale_125,
    Scale_150,
    Scale_175,
    Scale_200,
    Scale_MAX UMETA(Hidden),
};

