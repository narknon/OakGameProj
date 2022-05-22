#pragma once
#include "CoreMinimal.h"
#include "ETravelStatus.generated.h"

UENUM(BlueprintType)
enum class ETravelStatus : uint8 {
    None,
    Queued,
    Cancelled_OpenMenu,
    Cancelled_DownState,
    Cancelled_Cinamatic,
    Cancelled_DLCOwnership,
};

