#pragma once
#include "CoreMinimal.h"
#include "EInWorldIconRange.generated.h"

UENUM(BlueprintType)
enum class EInWorldIconRange : uint8 {
    None,
    Near,
    Far,
};

