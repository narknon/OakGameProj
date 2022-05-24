#pragma once
#include "CoreMinimal.h"
#include "EGFxStoreMenuTabType.generated.h"

UENUM()
enum class EGFxStoreMenuTabType : int32 {
    Empty,
    Featured,
    Expansions,
    Customizations,
    Purchased,
};

