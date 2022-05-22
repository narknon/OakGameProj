#pragma once
#include "CoreMinimal.h"
#include "ETimeSlotEchoPreference.generated.h"

UENUM(BlueprintType)
enum class ETimeSlotEchoPreference : uint8 {
    AutoTransition,
    LiveOnly,
    EchoOnly,
};

