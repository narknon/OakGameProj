#pragma once
#include "CoreMinimal.h"
#include "ESpawnerActorState.generated.h"

UENUM(BlueprintType)
enum class ESpawnerActorState :  {
    Unborn,
    Alive,
    Suspended,
    Dead,
};

