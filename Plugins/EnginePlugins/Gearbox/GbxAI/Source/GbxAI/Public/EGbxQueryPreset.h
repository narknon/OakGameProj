#pragma once
#include "CoreMinimal.h"
#include "EGbxQueryPreset.generated.h"

UENUM(BlueprintType)
enum EGbxQueryPreset {
    UseBestLocation,
    TryCurrentLocation,
    OnlyCurrentLocation,
    QueryFrequencyLow,
    QueryOnStart,
};

