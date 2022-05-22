#pragma once
#include "CoreMinimal.h"
#include "EDiscoveryAreaDrawStyle.generated.h"

UENUM(BlueprintType)
enum class EDiscoveryAreaDrawStyle :  {
    None,
    Wire,
    Solid,
    SolidAndWire,
};

