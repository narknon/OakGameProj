#pragma once
#include "CoreMinimal.h"
#include "EGbxButtonEvent.generated.h"

UENUM(BlueprintType)
enum class EGbxButtonEvent : uint8 {
    Pressed,
    Released,
};

