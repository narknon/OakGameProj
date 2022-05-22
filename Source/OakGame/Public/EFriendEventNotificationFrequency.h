#pragma once
#include "CoreMinimal.h"
#include "EFriendEventNotificationFrequency.generated.h"

UENUM(BlueprintType)
enum class EFriendEventNotificationFrequency : uint8 {
    Off,
    VeryLow,
    Low,
    Normal,
    High,
    VeryHigh,
};

