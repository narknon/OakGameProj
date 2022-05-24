#pragma once
#include "CoreMinimal.h"
#include "ECARStatus.generated.h"

UENUM(BlueprintType)
enum class ECARStatus : uint8 {
    Locked,
    Unfolding,
    Active,
    Inactive,
};

