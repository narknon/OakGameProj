#pragma once
#include "CoreMinimal.h"
#include "ESpawnerDrawStyle.generated.h"

UENUM(BlueprintType)
enum class ESpawnerDrawStyle : uint8 {
    None,
    Wire,
    Solid,
    SolidAndWire,
};

