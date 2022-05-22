#pragma once
#include "CoreMinimal.h"
#include "EPickupFlyToSettingsType.generated.h"

UENUM(BlueprintType)
enum class EPickupFlyToSettingsType : uint8 {
    Dropped,
    Container,
    AutoLootContainer,
};

