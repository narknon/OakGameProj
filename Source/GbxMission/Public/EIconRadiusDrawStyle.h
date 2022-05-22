#pragma once
#include "CoreMinimal.h"
#include "EIconRadiusDrawStyle.generated.h"

UENUM(BlueprintType)
enum class EIconRadiusDrawStyle : uint8 {
    None,
    Wire,
    Solid,
    SolidAndWire,
};

