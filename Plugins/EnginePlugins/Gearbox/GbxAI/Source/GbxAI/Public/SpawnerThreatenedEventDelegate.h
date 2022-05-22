#pragma once
#include "CoreMinimal.h"
#include "SpawnerThreatenedEventDelegate.generated.h"

class ASpawner;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnerThreatenedEvent, ASpawner*, Spawner);

