#pragma once
#include "CoreMinimal.h"
#include "ESpawnerActorState.generated.h"

UENUM(BlueprintType)
enum class ESpawnerActorState : uint8 {
    Unborn,
    Alive,
    Suspended,
    Dead,
};

