#pragma once
#include "CoreMinimal.h"
#include "ERelativeSizeCharge.generated.h"

UENUM(BlueprintType)
enum class ERelativeSizeCharge : uint8 {
    Everyone,
    SameAndBigger,
    OnlyBigger,
    None,
};

