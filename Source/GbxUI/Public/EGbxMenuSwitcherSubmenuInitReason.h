#pragma once
#include "CoreMinimal.h"
#include "EGbxMenuSwitcherSubmenuInitReason.generated.h"

UENUM(BlueprintType)
enum class EGbxMenuSwitcherSubmenuInitReason :  {
    Unknown,
    Pushed,
    NextPage,
    PrevPage,
    Switched,
};

