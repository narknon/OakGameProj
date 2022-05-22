#pragma once
#include "CoreMinimal.h"
#include "EActorTagQueryMode.generated.h"

UENUM(BlueprintType)
enum class EActorTagQueryMode : uint8 {
    HasAny,
    HasNone,
    HasAll,
};

