#pragma once
#include "CoreMinimal.h"
#include "EGbxAreaDrawStyle.generated.h"

UENUM(BlueprintType)
enum class EGbxAreaDrawStyle : uint8 {
    None,
    Wire,
    Solid,
    SolidAndWire,
};

