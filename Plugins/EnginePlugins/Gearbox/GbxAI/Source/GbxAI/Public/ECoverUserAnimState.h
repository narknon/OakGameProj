#pragma once
#include "CoreMinimal.h"
#include "ECoverUserAnimState.generated.h"

UENUM(BlueprintType)
enum class ECoverUserAnimState : uint8 {
    None,
    Idle,
    Exit,
    FireIdle,
    FireEnter,
    FireExit,
    FireToIdle,
    Transition,
    ViewSwitch,
};

