#pragma once
#include "CoreMinimal.h"
#include "EWeaponTriggerFeedbackMode.generated.h"

UENUM(BlueprintType)
enum class EWeaponTriggerFeedbackMode : uint8 {
    Off,
    Feedback,
    Weapon,
    Vibration,
};

