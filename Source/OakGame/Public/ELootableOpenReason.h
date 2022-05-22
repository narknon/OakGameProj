#pragma once
#include "CoreMinimal.h"
#include "ELootableOpenReason.generated.h"

UENUM(BlueprintType)
enum class ELootableOpenReason : uint8 {
    Use,
    Damage,
};

