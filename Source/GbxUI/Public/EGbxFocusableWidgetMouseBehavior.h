#pragma once
#include "CoreMinimal.h"
#include "EGbxFocusableWidgetMouseBehavior.generated.h"

UENUM(BlueprintType)
enum class EGbxFocusableWidgetMouseBehavior : uint8 {
    None,
    SelectOnHover,
    SelectOnClick,
    InheritFromOwner,
};

