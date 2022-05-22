#pragma once
#include "CoreMinimal.h"
#include "SpawnerActorData.h"
#include "SpawnDataEventDelegate.generated.h"

class USpawnerComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnDataEvent, USpawnerComponent*, SpawnerComponent, const FSpawnerActorData&, ActorData);

