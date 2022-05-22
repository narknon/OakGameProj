#pragma once
#include "CoreMinimal.h"
#include "SpawnWaveEventDelegate.generated.h"

class USpawnerComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnWaveEvent, USpawnerComponent*, SpawnerComponent, int32, WaveIndex);

