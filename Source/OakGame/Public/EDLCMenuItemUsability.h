#pragma once
#include "CoreMinimal.h"
#include "EDLCMenuItemUsability.generated.h"

UENUM(BlueprintType)
enum class EDLCMenuItemUsability : uint8 {
    None,
    CanUse,
    AlreadyStarted,
    RequiresMissionProgress,
    NotInstalled,
    NotLicensed,
};

