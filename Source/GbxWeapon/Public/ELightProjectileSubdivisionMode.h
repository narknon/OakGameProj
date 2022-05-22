#pragma once
#include "CoreMinimal.h"
#include "ELightProjectileSubdivisionMode.generated.h"

UENUM(BlueprintType)
enum class ELightProjectileSubdivisionMode : int32 {
    Distance,
    Seconds,
    Width,
    Count,
};

