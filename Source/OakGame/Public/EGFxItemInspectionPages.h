#pragma once
#include "CoreMinimal.h"
#include "EGFxItemInspectionPages.generated.h"

UENUM(BlueprintType)
enum class EGFxItemInspectionPages : uint8 {
    None,
    Inspect,
    Manufacturer,
    Elemental,
    Parts,
    Skins,
};

