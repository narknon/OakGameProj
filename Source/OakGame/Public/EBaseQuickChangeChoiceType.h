#pragma once
#include "CoreMinimal.h"
#include "EBaseQuickChangeChoiceType.generated.h"

UENUM(BlueprintType)
enum class EBaseQuickChangeChoiceType : uint8 {
    Skin,
    Head,
    Body,
    Emote,
    Color,
    ECHOSkin,
    Respec,
    WeaponSkin,
    WeaponTrinket,
};

