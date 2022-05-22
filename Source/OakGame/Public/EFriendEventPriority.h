#pragma once
#include "CoreMinimal.h"
#include "EFriendEventPriority.generated.h"

UENUM(BlueprintType)
enum class EFriendEventPriority : uint8 {
    Highest,
    High,
    Normal,
    Low,
};

