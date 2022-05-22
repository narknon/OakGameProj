#pragma once
#include "CoreMinimal.h"
#include "EStretchBonesMarkerMode.generated.h"

UENUM(BlueprintType)
enum class EStretchBonesMarkerMode : uint8 {
    BeforeMarker,
    AttachedMarker,
    AfterMarker,
};

