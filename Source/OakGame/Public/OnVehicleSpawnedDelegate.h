#pragma once
#include "CoreMinimal.h"
#include "OnVehicleSpawnedDelegate.generated.h"

class ACatchARide;
class AOakVehicle;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehicleSpawned, ACatchARide*, Target, AOakVehicle*, Vehicle);

