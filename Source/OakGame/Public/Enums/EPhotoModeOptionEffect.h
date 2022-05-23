#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeOptionEffect.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeOptionEffect : uint8 {
    None,
    FieldOfView,
    CameraRoll,
    Target,
    FocusDistance,
    FocusRegion,
    DOFIntensity,
    Contrast,
    Saturation,
    Gamma,
    Gain,
    TimeOfDay,
    HideCharacters,
    FilmGrain,
    Filter,
    FilterIntensity,
    VignetteIntensity,
    VignetteFeathering,
    HideDamageNumbers,
    OverrideDOF,
    Border,
    Tag,
};

