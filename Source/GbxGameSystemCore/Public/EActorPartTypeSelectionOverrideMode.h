#pragma once
#include "CoreMinimal.h"
#include "EActorPartTypeSelectionOverrideMode.generated.h"

UENUM(BlueprintType)
enum class EActorPartTypeSelectionOverrideMode : uint8 {
    PreferredParts,
    OverrideParts,
};

