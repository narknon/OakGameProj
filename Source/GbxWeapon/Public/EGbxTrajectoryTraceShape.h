#pragma once
#include "CoreMinimal.h"
#include "EGbxTrajectoryTraceShape.generated.h"

UENUM(BlueprintType)
enum class EGbxTrajectoryTraceShape : uint8 {
    Line,
    Sphere,
    Capsule,
    Box,
};

