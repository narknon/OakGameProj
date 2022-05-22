#pragma once
#include "CoreMinimal.h"
#include "EScreenParticleScalingMode.generated.h"

UENUM(BlueprintType)
enum class EScreenParticleScalingMode : uint8 {
    FitToHorizontal,
    FitToVertical,
    FitToExterior,
    FitToInterior,
    FitToViewport,
    DontAdjustScaling,
    FitToViewportAndKeepContentAspectRatio,
};

