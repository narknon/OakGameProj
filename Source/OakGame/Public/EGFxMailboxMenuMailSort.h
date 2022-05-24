#pragma once
#include "CoreMinimal.h"
#include "EGFxMailboxMenuMailSort.generated.h"

UENUM(BlueprintType)
enum class EGFxMailboxMenuMailSort : uint8 {
    Date,
    Unread,
    Friend,
    System,
};

