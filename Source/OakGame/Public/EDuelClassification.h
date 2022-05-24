#pragma once
#include "CoreMinimal.h"
#include "EDuelClassification.generated.h"

UENUM(BlueprintType)
enum class EDuelClassification : uint8 {
    Standard1v1,
    FreeForAll,
};

