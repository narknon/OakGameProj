#pragma once
#include "CoreMinimal.h"
#include "ECohtmlImageFormat.generated.h"

UENUM(BlueprintType)
enum class ECohtmlImageFormat : uint8 {
    PNG,
    TGA,
    JPEG,
    PSD,
    SVG,
    DDS,
    BMP,
    ASTC,
    PKM,
    KTX,
};

