#pragma once
#include "CoreMinimal.h"
#include "EMassSelection.generated.h"

UENUM(BlueprintType)
enum class EMassSelection : uint8 {
    Automatic,
    Custom,
    Preset,
};

