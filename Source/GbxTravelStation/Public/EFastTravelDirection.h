#pragma once
#include "CoreMinimal.h"
#include "EFastTravelDirection.generated.h"

UENUM(BlueprintType)
enum class EFastTravelDirection : uint8 {
    SendAndReceive,
    SendOnly,
    ReceiveOnly,
};

