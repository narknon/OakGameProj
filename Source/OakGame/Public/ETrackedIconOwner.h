#pragma once
#include "CoreMinimal.h"
#include "ETrackedIconOwner.generated.h"

UENUM(BlueprintType)
enum class ETrackedIconOwner : uint8 {
    Unknown,
    Released,
    Minimap_Clamped,
    Minimap_Interior3D,
    InWorldContainer,
};

