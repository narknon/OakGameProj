#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxMenuSwitcherSubmenuInitReason.generated.h"

UENUM(BlueprintType)
enum class EGbxGFxMenuSwitcherSubmenuInitReason :  {
    Unknown,
    Pushed,
    NextPage,
    PrevPage,
    Switched,
};

