#pragma once
#include "CoreMinimal.h"
#include "TravelStationActorSpawnedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTravelStationActorSpawned, AActor*, SpawnedActor);

