#pragma once
#include "CoreMinimal.h"
#include "ELightBeamQueryActorType.generated.h"

UENUM(BlueprintType)
enum class ELightBeamQueryActorType : uint8 {
    Unfiltered,
    DamageCauser,
    Instigator,
    Source,
    Target,
    SourceOrTarget,
    SourceAndTarget,
};

