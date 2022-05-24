#pragma once
#include "CoreMinimal.h"
#include "EWwiseDebugFlags.generated.h"

UENUM(BlueprintType)
enum class EWwiseDebugFlags : uint8 {
    ShowOwner,
    ShowComponentType,
    ShowEventNames,
    ShowDistanceToListener,
    HideActiveComponents,
    ShowHibernatingComponents,
    ShowDetailedLocations,
};

