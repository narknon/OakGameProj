#pragma once
#include "CoreMinimal.h"
#include "SpawnerDoneEventDelegate.generated.h"

class ASpawner;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnerDoneEvent, ASpawner*, Spawner);

