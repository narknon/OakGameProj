#pragma once
#include "CoreMinimal.h"
#include "EHUDStateManagerVisibility.generated.h"

UENUM(BlueprintType)
enum class EHUDStateManagerVisibility : uint8 {
    Unknown,
    Visible,
    NotVisible,
};

