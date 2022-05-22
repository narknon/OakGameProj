#pragma once
#include "CoreMinimal.h"
#include "VehicleSpawnPointEventDelegate.generated.h"

class AOakVehicleSpawnPoint;
class AOakVehicle;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVehicleSpawnPointEvent, AOakVehicleSpawnPoint*, VehicleSpawnPoint, AOakVehicle*, Vehicle);

