#pragma once
#include "CoreMinimal.h"
#include "EWwiseDebugFlags.generated.h"

UENUM(BlueprintType)
enum class EWwiseDebugFlags :  {
    ShowOwner,
    ShowComponentType,
    ShowEventNames,
    ShowDistanceToListener,
    HideActiveComponents,
    ShowHibernatingComponents,
    ShowDetailedLocations,
};

