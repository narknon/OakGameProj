#pragma once
#include "CoreMinimal.h"
#include "ETargetedNameplateType.generated.h"

UENUM(BlueprintType)
enum class ETargetedNameplateType : uint8 {
    Standard,
    NPC,
    Boss,
    None,
};

