#pragma once
#include "CoreMinimal.h"
#include "ENavPainterLayer.generated.h"

UENUM(BlueprintType)
enum class ENavPainterLayer : uint8 {
    Default,
    Driver,
    Scripted,
};

