#pragma once
#include "CoreMinimal.h"
#include "EBaseQuickChangeMenuState.generated.h"

UENUM(BlueprintType)
enum class EBaseQuickChangeMenuState : uint8 {
    CategorySelection,
    BodySelection,
    HeadSelection,
    SkinSelection,
    ColorSelection,
    EmoteSelection,
    ECHOSelection,
    Respec,
    TrinketIcon,
    WeaponSkinIcon,
    DecorationIcon,
    None,
    MAX,
};

