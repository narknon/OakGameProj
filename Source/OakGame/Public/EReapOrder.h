#pragma once
#include "CoreMinimal.h"
#include "EReapOrder.generated.h"

UENUM(BlueprintType)
enum class EReapOrder : uint8 {
    OldestFirst,
    NewestFirst,
    Random,
};

