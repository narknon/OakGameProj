#pragma once
#include "CoreMinimal.h"
#include "EAnisotropicFilteringType.generated.h"

UENUM(BlueprintType)
enum class EAnisotropicFilteringType : uint8 {
    Trilinear,
    TwoX,
    FourX,
    EightX,
    SixteenX,
};

