#pragma once
#include "CoreMinimal.h"
#include "EMissionDrivenLootableType.generated.h"

UENUM(BlueprintType)
enum class EMissionDrivenLootableType : uint8 {
    None,
    CopyPickupMissionObjective,
    UseSelfMissionObjective,
};

