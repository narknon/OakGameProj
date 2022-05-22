#pragma once
#include "CoreMinimal.h"
#include "EVendingMachineAnimType.generated.h"

UENUM(BlueprintType)
enum class EVendingMachineAnimType : uint8 {
    Idle,
    Back,
    BackTwice,
    BackThrice,
    BackJiggle,
    Forward,
    ForwardTwice,
    ForwardThrice,
    ForwardJiggle,
    Purchase,
    PurchaseInPlace,
    TurnOn,
    TurnOff,
    ErrorJiggle,
    SlideInFromTop,
    SlideInFromBottom,
    MAX,
};

