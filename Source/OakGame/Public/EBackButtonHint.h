#pragma once
#include "CoreMinimal.h"
#include "EBackButtonHint.generated.h"

UENUM(BlueprintType)
enum class EBackButtonHint : uint8 {
    Back,
    Cancel,
    Exit,
};

