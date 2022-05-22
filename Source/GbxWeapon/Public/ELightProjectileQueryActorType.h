#pragma once
#include "CoreMinimal.h"
#include "ELightProjectileQueryActorType.generated.h"

UENUM(BlueprintType)
enum class ELightProjectileQueryActorType : uint8 {
    Unfiltered,
    DamageCauser,
    Instigator,
    Source,
    Target,
    Attached,
};

