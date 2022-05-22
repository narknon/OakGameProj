#pragma once
#include "CoreMinimal.h"
#include "ECoverUserState.generated.h"

UENUM(BlueprintType)
enum class ECoverUserState : uint8 {
    NotInCover,
    Idling,
    Firing,
};

