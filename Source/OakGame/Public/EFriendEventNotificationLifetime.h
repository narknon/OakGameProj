#pragma once
#include "CoreMinimal.h"
#include "EFriendEventNotificationLifetime.generated.h"

UENUM(BlueprintType)
enum class EFriendEventNotificationLifetime : uint8 {
    Normal,
    Long,
    VeryLong,
};

