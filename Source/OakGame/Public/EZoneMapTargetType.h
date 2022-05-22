#pragma once
#include "CoreMinimal.h"
#include "EZoneMapTargetType.generated.h"

UENUM(BlueprintType)
enum class EZoneMapTargetType : uint8 {
    None,
    POI,
    Player,
    CrewChallenge,
    MissionWaypoint,
    DeployedVehicle,
};

