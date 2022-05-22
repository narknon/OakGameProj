#pragma once
#include "CoreMinimal.h"
#include "PresenceStatus.generated.h"

UENUM(BlueprintType)
enum class PresenceStatus :  {
    Unavailable,
    Available,
    Chat,
    DoNotDisturb,
    Away,
    ExtendedAway,
};

