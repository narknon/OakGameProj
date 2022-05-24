#pragma once
#include "CoreMinimal.h"
#include "EGbxMenuSwitcherSubmenuInitReason.generated.h"

UENUM(BlueprintType)
enum class EGbxMenuSwitcherSubmenuInitReason : uint8 {
    Unknown,
    Pushed,
    NextPage,
    PrevPage,
    Switched,
};

