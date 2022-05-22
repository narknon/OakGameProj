#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointFilter.generated.h"

UENUM(BlueprintType)
enum class ESpawnPointFilter : uint8 {
    Any,
    All,
    NotAny,
    NotAll,
};

