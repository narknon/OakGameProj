#pragma once
#include "CoreMinimal.h"
#include "EGbxMenuParentType.generated.h"

UENUM(BlueprintType)
enum class EGbxMenuParentType : uint8 {
    Viewport,
    PlayerScreen,
    Inherit,
};

