#pragma once
#include "CoreMinimal.h"
#include "SpawnerWaveEventDelegate.generated.h"

class ASpawner;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnerWaveEvent, ASpawner*, Spawner, int32, WaveIndex);

