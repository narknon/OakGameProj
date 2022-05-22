#pragma once
#include "CoreMinimal.h"
#include "ETerritoryDrawStyle.generated.h"

UENUM(BlueprintType)
enum class ETerritoryDrawStyle : uint8 {
    None,
    Wire,
    Solid,
    SolidAndWire,
};

