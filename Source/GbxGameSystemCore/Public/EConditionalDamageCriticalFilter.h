#pragma once
#include "CoreMinimal.h"
#include "EConditionalDamageCriticalFilter.generated.h"

UENUM(BlueprintType)
enum class EConditionalDamageCriticalFilter : uint8 {
    HitRegionMustBeCritical,
    HitRegioneMustNotBeCritical,
    MustBeAnyCritical,
    MustNotBeAnyCritical,
};

