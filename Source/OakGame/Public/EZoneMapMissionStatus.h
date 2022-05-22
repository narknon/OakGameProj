#pragma once
#include "CoreMinimal.h"
#include "EZoneMapMissionStatus.generated.h"

UENUM(BlueprintType)
enum EZoneMapMissionStatus {
    ZMM_AvailableMission,
    ZMM_TrackedObjective,
    ZMM_OptionalObjective,
    ZMM_NotTrackedObjective,
    ZMM_OutOfMap,
    ZMM_Unknown,
    ZMM_MAX UMETA(Hidden),
};

