#pragma once
#include "CoreMinimal.h"
#include "MissionVehicleSpawnedEventDelegate.generated.h"

class AOakVehicle;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionVehicleSpawnedEvent, AOakVehicle*, MissionVehicle);

