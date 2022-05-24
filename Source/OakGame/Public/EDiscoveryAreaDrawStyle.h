#pragma once
#include "CoreMinimal.h"
#include "EDiscoveryAreaDrawStyle.generated.h"

UENUM(BlueprintType)
enum class EDiscoveryAreaDrawStyle : uint8 {
    None,
    Wire,
    Solid,
    SolidAndWire,
};

