#pragma once
#include "CoreMinimal.h"
#include "EEchoLogBlockedStartMethod.generated.h"

UENUM(BlueprintType)
enum class EEchoLogBlockedStartMethod : uint8 {
    Cancel,
    PlayInWorldOnly,
    Queue,
    Interrupt,
};

