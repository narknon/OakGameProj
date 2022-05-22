#pragma once
#include "CoreMinimal.h"
#include "ESpawnerType.generated.h"

UENUM(BlueprintType)
enum class ESpawnerType :  {
    None,
    Level,
    Static,
    Dynamic,
};

