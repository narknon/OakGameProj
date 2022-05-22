#pragma once
#include "CoreMinimal.h"
#include "SpawnerActorData.h"
#include "SpawnerDataEventDelegate.generated.h"

class ASpawner;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnerDataEvent, ASpawner*, Spawner, const FSpawnerActorData&, ActorData);

