#pragma once
#include "CoreMinimal.h"
#include "EDamageAreaOverlapFilterType.generated.h"

UENUM(BlueprintType)
enum class EDamageAreaOverlapFilterType : uint8 {
    AllDynamicObjects,
    Profile,
    Custom,
};

