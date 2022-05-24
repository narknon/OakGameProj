#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxMenuSwitcherSubmenuInitReason.generated.h"

UENUM(BlueprintType)
enum class EGbxGFxMenuSwitcherSubmenuInitReason : uint8 {
    Unknown,
    Pushed,
    NextPage,
    PrevPage,
    Switched,
};

