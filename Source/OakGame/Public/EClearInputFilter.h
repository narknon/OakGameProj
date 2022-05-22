#pragma once
#include "CoreMinimal.h"
#include "EClearInputFilter.generated.h"

UENUM(BlueprintType)
enum EClearInputFilter {
    ClearWeapons = 0x1,
    ClearInputComponent,
    DisableHover = 0x4,
    ClearAll = 0xFF,
};

