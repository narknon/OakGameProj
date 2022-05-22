#pragma once
#include "CoreMinimal.h"
#include "ELookAtPointType.generated.h"

UENUM(BlueprintType)
enum class ELookAtPointType : uint8 {
    Interrupt,
    Persist,
    Any,
};

