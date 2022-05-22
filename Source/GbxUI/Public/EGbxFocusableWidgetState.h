#pragma once
#include "CoreMinimal.h"
#include "EGbxFocusableWidgetState.generated.h"

UENUM(BlueprintType)
enum class EGbxFocusableWidgetState : uint8 {
    Unknown,
    Disabled,
    NotFocused,
    NotFocused_MouseHovered,
    NotFocused_MouseDown,
    Focused,
    Focused_MouseHovered,
    Focused_MouseDown,
};

