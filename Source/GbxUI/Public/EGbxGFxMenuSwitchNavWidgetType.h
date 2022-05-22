#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxMenuSwitchNavWidgetType.generated.h"

UENUM(BlueprintType)
enum class EGbxGFxMenuSwitchNavWidgetType : int32 {
    Unknown,
    MenuSwitcher,
    CustomSwitcher,
};

