#pragma once
#include "CoreMinimal.h"
#include "EFreezeType.generated.h"

UENUM(BlueprintType)
enum class EFreezeType : uint8 {
    Cryo,
    Anointed,
    MAX,
};

