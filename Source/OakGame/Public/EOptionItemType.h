#pragma once
#include "CoreMinimal.h"
#include "EOptionItemType.generated.h"

UENUM(BlueprintType)
enum class EOptionItemType : uint8 {
    Title,
    Slider,
    Spinner,
    BooleanSpinner,
    Button,
    Controls,
    Keybinding_Button,
    KeyBinding_Axis,
    TodoItem,
    DropDownList,
};

