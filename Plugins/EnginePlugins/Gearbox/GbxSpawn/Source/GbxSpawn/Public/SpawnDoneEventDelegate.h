#pragma once
#include "CoreMinimal.h"
#include "SpawnDoneEventDelegate.generated.h"

class USpawnerComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnDoneEvent, USpawnerComponent*, SpawnerComponent);

