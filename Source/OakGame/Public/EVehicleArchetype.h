#pragma once
#include "CoreMinimal.h"
#include "EVehicleArchetype.generated.h"

UENUM(BlueprintType)
enum class EVehicleArchetype : uint8 {
    Null,
    Technical,
    Outrunner,
    Revolver,
    Emperor,
};

