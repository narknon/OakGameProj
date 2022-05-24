#pragma once
#include "CoreMinimal.h"
#include "EFriendSyncState.generated.h"

UENUM(BlueprintType)
enum class EFriendSyncState : uint8 {
    Disabled,
    Enabled,
};

