#pragma once
#include "CoreMinimal.h"
#include "ELingeringDamageStyle.generated.h"

UENUM(BlueprintType)
enum class ELingeringDamageStyle : uint8 {
    DamageStyle_Burst,
    DamageStyle_Beam,
    DamageStyle_Radius,
    DamageStyle_MAX UMETA(Hidden),
};

