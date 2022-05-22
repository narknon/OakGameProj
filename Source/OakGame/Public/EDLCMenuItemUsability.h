#pragma once
#include "CoreMinimal.h"
#include "EDLCMenuItemUsability.generated.h"

UENUM(BlueprintType)
enum class EDLCMenuItemUsability :  {
    None,
    CanUse,
    AlreadyStarted,
    RequiresMissionProgress,
    NotInstalled,
    NotLicensed,
};

