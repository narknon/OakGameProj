#pragma once
#include "CoreMinimal.h"
#include "EInventorySerialNumberState.generated.h"

UENUM(BlueprintType)
enum class EInventorySerialNumberState : uint8 {
    Empty,
    Writing,
    Full,
    Reading,
    Encrypted,
};

